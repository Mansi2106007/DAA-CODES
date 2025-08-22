#include <stdio.h>
int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter K: ");
    scanf("%d", &k);
    k = k % n;

    printf("Rotated array: ");
    for (int i = n - k; i < n; i++)
        printf("%d ", arr[i]);
    for (int i = 0; i < n - k; i++)
        printf("%d ", arr[i]);

    return 0;
}
