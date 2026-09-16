#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char s[] = "hello";

    reverseString(s, strlen(s));

    printf("Test Case 1: %s\n", s);

    char s2[] = "Hannah";

    reverseString(s2, strlen(s2));

    printf("Test Case 2: %s\n", s2);

    return 0;
}