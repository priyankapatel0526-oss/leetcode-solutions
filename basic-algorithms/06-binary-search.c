#include <stdio.h>

int search(int* nums, int numsSize, int target) {

    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {

        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    int nums[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 1: Index: %d\n",
           search(nums, 6, 9));


    int nums2[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 2: Index: %d\n",
           search(nums2, 6, 2));

    return 0;
}