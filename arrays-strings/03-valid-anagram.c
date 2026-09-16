#include <stdio.h>

int isAnagram(char s[], char t[]) {

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    char s1[] = "anagram";
    char s2[] = "nagaram";

    printf("Test Case 1: ");

    if (isAnagram(s1, s2))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");


    char s3[] = "rat";
    char s4[] = "car";

    printf("Test Case 2: ");

    if (isAnagram(s3, s4))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}