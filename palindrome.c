#include <stdio.h>
#include "extra_basics.h"

int main() {
    printf("Max of 5, 9, 3: %d\n", max_of_three(5, 9, 3));

    int n = 121;
    if (is_palindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
