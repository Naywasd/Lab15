#include <iostream>
using namespace std;

int main() {
    int a = 5;
    char b = 'A';

    char &c = b;
    int *x = &a;
    
    char *y = &b;
    int **z = &x;
    
    auto print = [&]() {
        cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;
    };

    print();

    cout << &a << " " << (void*)&b << " " << (void*)&c << " " << &x << " " << &y << " " << &z << endl;

    c = 'F';
    print();

    *y = 'W';
    print();

    *x = 6;
    print();

    **z = 7;
    print();

    return 0;
}
