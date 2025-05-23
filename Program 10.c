#include <stdio.h>

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

int main() {
    const char *string1 = "hello";
    const char *string2 = "hello";

    int result = compareStrings(string1, string2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 is less than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");

    return 0;
}