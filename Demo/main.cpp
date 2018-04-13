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
    // int ival = 42;
    // int *p = &ival;
    // std::cout << "point to: " << p << " value: " << *p << std::endl;

    // void *
    // double obj = 3.14, *pd = &obj;
    // void *pv = &obj;
    // std::cout << "void *: " << pv << std::endl;
    // pv = pd;
    // std::cout << "void *: " << pv << std::endl;

    // 指向指针的引用
    // int i = 42;
    // int *p;
    // int *&r = p;
    // std::cout << "i: " << i << " p: " << p << " r: " << r << std::endl;
    // r = &i;
    // std::cout << "i: " << i << " p: " << p << " r: " << r << std::endl;
    // *r = 0;
    // std::cout << "i: " << i << " p: " << p << " r: " << r << std::endl;

    // 对const 的引用可能引用一个并非const的对象
    int i = 42;
    int &r1 = i;
    const int &r2 = i;
    std::cout << "i: " << i << " r1: " << r1 << " r2: " << r2 << std::endl;
    r1 = 0;
    std::cout << "i: " << i << " r1: " << r1 << " r2: " << r2 << std::endl;

    return 0;
}