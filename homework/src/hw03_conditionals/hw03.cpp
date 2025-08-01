#include "hw03.h"

// Pre-conditions: in is not NaN, nor infinity/-infinity
// Post-conditions: none
// Returns: returns the absolute value of value in
//          1 -> 1
//          -1 -> 1
//          -5.51 -> 5.51
//          100 -> 100
double cppclass_abs(double in) {
    if (in >= 0) {
        return in;
    }
    else {
        return -in;
    }
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whichever of the inputs is larger
int max_of_two_items(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whichever of the inputs is smaller
int min_of_two_items(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whichever of the inputs is largest
int max_of_three_items(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > c) {
        return b;
    }
    return c;
}

// Pre-conditions: none
// Post-conditions: none
// Returns: returns whether the year entered is a leap year
//          A year is a leap year if it satisfies:
//              a) the year is divisible by 4
//              b) but not divisible by 100
//              c) unless it is divisible by 400
bool is_leap_year(unsigned int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    else if (year % 400 == 0) {
        return true;
    }
    return false;
}

// Pre-conditions: op is one of ['+', '-', '*', '/', '%']
//                 if op is '/' or '%', b is non-zero
// Post-conditions: none
// Returns: returns the value of: a op b
int simple_calc(int a, int b, char op) {
    if (op == '+') {
        return a + b;
    }
    else if (op == '-') {
        return a - b;
    }
    else if (op == '*') {
        return a * b;
    }
    else if (op == '/') {
        return a / b;
    }
    else if (op == '%') {
        return a % b;
    }
    else {
        return -1;
    }
}
