#include<stdio.h>
int main(){
    int a[10][10],i,j,rows,columns;
    printf("Enter rows and columns of the matrix: ");
    scanf("%d%d",&rows,&columns);
    for(i=0;i<=rows-1;i++){
        
        for(j=0;j<=columns-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        
        for(j=i;j>=1;j--){
            printf("  ");
        }
        
        for(j=0;j<columns;j++){
            if(i==j || i<=j){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}