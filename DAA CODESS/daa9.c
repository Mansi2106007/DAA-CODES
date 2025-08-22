#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);

    int count = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            count++;
    }
    printf("Word count = %d", count);
    return 0;
}
