#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z'){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    else {
        printf("Invalid");
    }

    return 0;
}
