#include <stdio.h>

int main() {
    char s[100];
    scanf("%[^\n]", s); 

    int i, v = 0, c = 0, sp = 0, d = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || 
            s[i] == 'O' || s[i] == 'U') {
            v++;
        }
        else if (s[i] == ' ') {
            sp++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            d++;
        }
        else {
            c++;
        }
    }

    printf("Vowel = %d\nSpace = %d\nConsonant = %d\nDigit = %d\n", v, sp, c, d);
    return 0;
}