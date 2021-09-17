#include <cstdio>

/**
 * @brief Creates a user defined function that recieves two inputs
 * and print out to the console whether the first value is smaller
 * or larger than the second value.
 * 
 * @param a the first interger argument
 * @param b the second interger argument
 */
void compare(int a, int b) {
    if (a < b)
        std::printf("%d is smaller than %d", a, b);
    else
        std::printf("%d is larger than %d", a, b);
}

int main() {
    int a = 10, b = 29;
    compare(a, b);
    return 0;
}