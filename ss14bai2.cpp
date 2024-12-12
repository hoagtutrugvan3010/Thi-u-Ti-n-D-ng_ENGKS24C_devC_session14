#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hoag tu trug van"; 
    printf("chuoi ki tu la: %s\n", str);
    printf("cac ki tu trong chuoi la: ");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
        if (i < strlen(str) - 1) {
            printf(" "); 
        }
    }

    printf("\n"); 
    return 0;
}
	
