#include <stdio.h>

int main() {
    int cp;
    printf("enter a cost price");
    scanf("%d",&cp);
    int sp;
    printf("enter a selling price");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    }
    else if(cp>sp){
        printf("loss");
    }
    else{
        printf("no profit,no loss");
    }
    
    
    return 0;
}
