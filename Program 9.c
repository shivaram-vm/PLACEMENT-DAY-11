#include <stdio.h>
int countVowels(const char *str) {
    int count = 0;
    while (*str) {
        char ch = *str;
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    const char *text = "Hello, World!";
    int vowelCount = countVowels(text);
    printf("Number of vowels: %d\n", vowelCount);
    return 0;
}
