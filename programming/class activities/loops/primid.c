#include<stdio.h>

int main(){
    int i,j,p,count=1;
    
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("  ");
        }
        
        for(p=1;p<=count;p++){
             printf("* ");
        }  
        printf("\n");
        count+=2;
    } 
    return 0;
}