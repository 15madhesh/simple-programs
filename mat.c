#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n == 1){
       printf("\n");}
    else{
       for(i=0;i<n;i++){
          for(j=i+1;j<n;j++){
             if(arr[i] == arr[j]){
                printf("%d\t",arr[i]);
             }
          }
       }
       printf("\n");
    }
}