#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", &arr);
    int l = strlen(arr);
    for (int i = 0;i < l;i++) {
        if (arr[i] <= 'Z')
            arr[i] = arr[i] + 32;
        else if (arr[i] > 'Z')
            arr[i] = arr[i] - 32;
    }
    printf("%s", arr);
    return 0;
}