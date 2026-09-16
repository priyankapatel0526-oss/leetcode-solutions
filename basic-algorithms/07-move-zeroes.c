#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize) {
        nums[position] = 0;
        position++;
    }
}

int main() {

    int nums[] = {0, 1, 0, 3, 12};
    int size = 5;

    moveZeroes(nums, size);

    printf("Test Case 1: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");


    int nums2[] = {0, 0, 1};
    int size2 = 3;

    moveZeroes(nums2, size2);

    printf("Test Case 2: ");

    for (int i = 0; i < size2; i++) {
        printf("%d ", nums2[i]);
    }

    printf("\n");

    return 0;
}