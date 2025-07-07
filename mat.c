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
         array[i][j] = arr[i][j];
         printf("%d\t",arr[i][j]);}
      printf("\n");
   }
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         if(arr[i][j] == 0){
            for(k=0;k<m;k++){
               array[i][k] = 0;
               printf("i = %d k = %d\n",i,k);
            }
            for(k=0;k<n;k++){
               array[k][j] = 0;
               printf("k = %d j = %d\n",k,j);
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
