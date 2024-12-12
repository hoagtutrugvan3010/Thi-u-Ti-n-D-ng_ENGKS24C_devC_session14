#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[] = "hoag tu trug van"; 
    int wordCount = 0;
    bool inWord = false;
    printf("chuoi ki tu la : \"%s\"\n", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
        	inWord = true;
            wordCount++;
            }
    } else {
            inWord = false;
        }
    }

    
    	printf("so tu trong chuoi la: %d\n", wordCount);




    	return 0;
}

