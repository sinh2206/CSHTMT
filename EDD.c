#include<stdio.h>

struct EDD
{
    /* data */
    // Đại diện cho 1 tác vụ
    int id; //Thứ tự tiến trình
    int start_time; // Thời gian bắt đầu
    int finishing_time; // Thời gian kết thúc
    int absolute_deadline; // Thời gian buộc phải hoàn thành
};
//Tính gía trị lớn nhất giữa 2 số
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {

    //Tạo hoạt động 7 tác vụ
    struct EDD edd[] = {
        {1,3,5,15},
        {2,0,3,11},
        {3,10,13,18},
        {4,5,10,16},
        {5,13,14,20},
        {6,14,16,20},
        {7,16,20,20}
    };
    //Để giá trị trung bình là nhỏ nhất thì r(releasee time) = s (start time)
    //Tính số deadline
    int tb = sizeof(edd) / sizeof(edd[0]);

    //Tính computation time và biểu diễn thành phần khác trong deadline
    printf("ID  |  START TIME |  FINISH TIME  |  COMPUTATION TIME  |  DEADLINE\n");
    printf("------------------------------------------------------------------\n");

    for(int i=0; i < tb; i++) {
        int computation_time = edd[i].finishing_time-edd[i].start_time;
        printf("%2d  |  %2d         |  %2d           | %2d                 |  %2d\n",
        edd[i].id,edd[i].start_time,edd[i].finishing_time,
        computation_time,edd[i].absolute_deadline);
    }

    //Tính thời gian trung bình
    int average_response_time = 0;
    for(int i=0; i < tb; i++){
        average_response_time += (edd[i].finishing_time - edd[i].start_time);
    }
    printf("Average response time: %d\n",average_response_time / tb);

    //Tính độ trễ lớn nhất L
    int max_delay = 0;
    for(int i=0; i < tb; i++) {
        max_delay = max(max_delay,edd[i].finishing_time - edd[i].absolute_deadline);
    }
    printf("Max delay: %d\n",max_delay);
    //Tính thời gian vượt quá E tương tự tính độ trễ lớn nhất L
    int exceeding_time = max_delay;
    printf("Exceeding time: %d\n", exceeding_time);
    return 0;
}