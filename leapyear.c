#include <stdio.h>

int main() {
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%4==0){
        printf("leap year");
        
    }
    else{
        printf("not leap year");
    }

    return 0;
}
