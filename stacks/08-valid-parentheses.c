#include <stdio.h>

int isValid(char* s) {
    char stack[1000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            top++;
            stack[top] = s[i];
        }
        else {
            if (top == -1) {
                return 0;
            }

            char open = stack[top];
            top--;

            if (s[i] == ')' && open != '(')
                return 0;

            if (s[i] == ']' && open != '[')
                return 0;

            if (s[i] == '}' && open != '{')
                return 0;
        }
    }

    return top == -1;
}

int main() {

    char s1[] = "()[]{}";

    printf("Test Case 1: ");

    if (isValid(s1))
        printf("Valid\n");
    else
        printf("Not Valid\n");


    char s2[] = "(]";

    printf("Test Case 2: ");

    if (isValid(s2))
        printf("Valid\n");
    else
        printf("Not Valid\n");

    return 0;
}