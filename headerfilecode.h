#ifndef EXTRA_BASICS_H
#define EXTRA_BASICS_H

#include <stdio.h>

// Function to find maximum of three numbers
int max_of_three(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

#endif // EXTRA_BASICS_H
