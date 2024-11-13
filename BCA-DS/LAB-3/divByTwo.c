// Numbers divisible by 2 but not by 4
#include<stdio.h>

void main(){
    int start, end;

    printf("enter starting number: ");
    scanf("%d", &start);
    printf("enter ending number: ");
    scanf("%d", &end);
    
    int i = start;

    do {
        if(i%2 == 0 && i%4 != 0){
            printf("%d\n", i);
        }
        i++;
    } while(i <= end);
}