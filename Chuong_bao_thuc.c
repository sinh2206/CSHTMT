#include <stdio.h>
#include <unistd.h>

enum State {
    Off,
    Wait,
    Alarm
};

enum State toggleState(enum State currentState) {
    if (currentState == Off) {
        return Wait;
    } else if (currentState == Wait) {
        return Alarm;
    } else {
        return Off;
    }
}

int main() {
    enum State currentState = Off;
    int timer = 0;

    while (1) {
        switch (currentState) {
            case Off:
                printf("Chuong bao thuc dang tat.\n");
                break;
            case Wait:
                printf("Chuong bao thuc dang cho doi.\n");
                break;
            case Alarm:
                printf("Chuong bao thuc dang keu.\n");
                break;
        }

        timer++;

        if (timer == 5 && currentState == Wait) {
            currentState = Alarm;
            timer = 0;
        } else if ((timer == 10 || currentState == Off) && currentState == Alarm) {
            currentState = Off;
            timer = 0;
        }

        // Mô phỏng sự kiện bấm nút (chuyển trạng thái)
        char key;
        printf("Nhap 'on' de bat chuong, 'off' de tat chuong: ");
        scanf("%s", &key);

        if (key[0] == 'o' || key[0] == 'O') {
            currentState = toggleState(currentState);
            timer = 0;
        } else if (key[0] == 'o' || key[0] == 'O' && currentState == Alarm) {
            currentState = Off;
            timer = 0;
        }

        // Mô phỏng đợi 1 giây (sử dụng hàm sleep)
        sleep(1);
    }

    return 0;
}
