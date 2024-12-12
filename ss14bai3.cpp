#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hoag tu trug van"; 
    printf("chuoi ki tu la: %s\n", str);
    int len = strlen(str);
    printf("chuoi dao nguoc la : ");   
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n"); 
    return 0;
}

