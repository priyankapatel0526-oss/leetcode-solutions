#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {

    int i = 0;

    while (strs[0][i] != '\0') {

        char ch = strs[0][i];

        for (int j = 1; j < strsSize; j++) {

            if (strs[j][i] != ch) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }

        i++;
    }

    return strs[0];
}

int main() {

    char str1[] = "flower";
    char str2[] = "flow";
    char str3[] = "flight";

    char* strs[] = {str1, str2, str3};

    printf("Test Case 1: %s\n",
           longestCommonPrefix(strs, 3));


    char str4[] = "dog";
    char str5[] = "racecar";
    char str6[] = "car";

    char* strs2[] = {str4, str5, str6};

    printf("Test Case 2: %s\n",
           longestCommonPrefix(strs2, 3));

    return 0;
}