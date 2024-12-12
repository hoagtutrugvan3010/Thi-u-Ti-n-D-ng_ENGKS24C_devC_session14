#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; 

    printf("nhap ho va ten : ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        printf("ten cua ban la : %s\n", str);
        printf("do dai ten la : %zu \n", len);
    } else {
        printf("loi\n");
    }

    return 0;
}

