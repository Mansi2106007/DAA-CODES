#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array without duplicates: ");
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("%d ", arr[i]);
    }
    return 0;
}
