#include <stdio.h>

int main() {
    char str[1000];
    int count = 0; 
    printf("nhap ho va ten: ");
    fgets(str, sizeof(str), stdin); 
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
   		 printf("so ki tu la chu cai la: %d\n", count);

    	return 0;
}
