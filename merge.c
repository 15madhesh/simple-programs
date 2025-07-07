#include<stdio.h>
int main(){
   int m,n,i,t,j;
   printf("Enter no.of elements in array:");
   scanf("%d",&m);
   int a[m];
   for(i=0;i<m;i++)
      scanf("%d",&a[i]);
   printf("Enter no.of elements in array:");
   scanf("%d",&n);
   int b[n];
   for(i=0;i<n;i++)
      scanf("%d",&b[i]);
   for(i=m;i<m+n;i++)
      a[i] = b[i-n];
   for(i = 0;i<m+n;i++){
      for(j=i+1;j<m+n;j++){
         if(a[i] > a[j]){
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }
   printf("Merge Sorted Array: ");
   for(i=0;i<m+n;i++)
      printf("%d\t",a[i]);
   printf("\n");
}