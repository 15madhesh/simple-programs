#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n],i,j,target;
    printf("enter values for array: ");
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a target value: ");
    scanf("%d",&target);
    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            if(arr[i] + arr[j] == target){
                printf("Array index to get target:%d %d",i,j);
            }
        }
    }
    return 0;
}