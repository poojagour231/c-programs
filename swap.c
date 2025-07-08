#include <stdio.h>
int main() {
    int a;
    printf("enter a :");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
    int tem;
    tem=a;
    a=b;
    b=tem;
    printf("the value of a is %d",a);
    printf("\n");
     printf("the value of b is %d",b);

    return 0;
}
