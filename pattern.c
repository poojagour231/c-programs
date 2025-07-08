

#include <stdio.h>
int main() {
    int n;
    int m;
    printf("enter a row:");
    scanf("%d",&n);
    printf("enter a coloum:");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
