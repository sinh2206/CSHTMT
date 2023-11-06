#include <stdio.h>

// Struct đại diện cho một tác vụ
struct Task {
    int id;        // ID của tác vụ
    int deadline;  // Deadline của tác vụ
    int executionTime;  // Thời gian thực hiện của tác vụ
};

int main() {
    struct Task tasks[] = {
        {1, 15, 1},
        {2, 11, 2},
        {3, 18, 3},
        {4, 16, 4},
        {5, 20, 5},
        {6, 20, 6},
        {7, 20, 7}
    };
    int n = sizeof(tasks) / sizeof(tasks[0]);
    printf(sizeof(tasks),"\n");
    printf("\n",sizeof(tasks[0]));
    printf("ID  | Deadline | Execution Time\n");
    printf("-------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%2d  |    %2d    |      %2d\n", tasks[i].id, tasks[i].deadline, tasks[i].executionTime);
    }

    return 0;
}
