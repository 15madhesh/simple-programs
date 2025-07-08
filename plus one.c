#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("Enter number of digits: ");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter digits: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int tot = 0;
    for (i = 0; i < n; i++) {
        tot = tot * 10 + arr[i];
    }
    tot = tot + 1;  
    int ar[20]; 
    int b = 0;
    int temp = tot;
    while (temp > 0) {
        ar[b++] = temp % 10;
        temp = temp / 10;
    }
    printf("Digits after increment: ");
    for (i = b - 1; i >= 0; i--) {
        printf("%d ", ar[i]);
    }
    printf("\n");
    return 0;
}
