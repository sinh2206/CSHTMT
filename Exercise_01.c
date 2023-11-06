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
    a1.s = 1,a1.f = 2;
    printf("%d\n",a1.s);
    printf("%d",a1.f);
}