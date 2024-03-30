#include <iostream>
#include <cstdio>

void check_bigger(int n) {
    if (n > 5) {
    std::cout << n << " is bigger than 5" << std::endl;
    }
}


void compare(int a, int b) {
    if (a > b) {
        std::cout << a << " is bigger than " << b << std::endl;
    }
    else {
        std::cout << a << " is not bigger than " << b << std::endl;
    }
}


void print_hello(std::string name) {
    std::printf("Hello to %s\n", name.c_str());
}


int main() {
//    int n = 5;
//    int n1 = 7;
//    compare(n, n1);
    //compare(n1, n);
    print_hello("marco");
    print_hello("leonardo");

    return 0;
}