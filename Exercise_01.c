#include <stdio.h>
struct Exercise_01
{
    /* data */
    int s;
    int f;
    int d;
};
int main() {
    struct Exercise_01 a1;
    a1.s = 1;
    printf("%d",a1.s);
}