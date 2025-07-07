#include<stdio.h>
int main(){
   int m,n,i,j,k;
   printf("Enter no.of rows and columns:");
   scanf("%d %d",&m,&n);
   int arr[m][n],array[m][n];
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         scanf("%d",&arr[i][j]);
      }
   }
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         if(arr[i][j] == 0){
            for(k=0;k<m;k++){
               array[i][k] = 0;
            }
            for(k=0;k<n;k++){
               array[k][j] = 0;
            }
         }
      }
      printf("\n");
   }
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         printf("%d\t",array[i][j]);}
      printf("\n");
   }
}
