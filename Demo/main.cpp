#include <iostream>

int main() {
    
    // 引用
    // int i, &ri = i;
    // std::cout << i << " x1 " << ri << std::endl;
    // i = 5;
    // std::cout << i << " x2 " << ri << std::endl;
    // ri = 10;
    // std::cout << i << " x3 " << ri << std::endl;

    // 指针
    int ival = 42;
    int *p = &ival;
    std::cout << "point to: " << p << " value: " << *p << std::endl;

    return 0;
}