#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hoag tu trug van"; 
    char ch; 
    int count = 0; 
    printf("chuoi ki tu la: %s\n", str);
    printf("nhap 1 ki tu bat ki: ");
    scanf(" %c", &ch); 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("ki tu '%c' xuat hien %d lan trong chuoi \"%s\".\n", ch, count, str);

    return 0;
}

