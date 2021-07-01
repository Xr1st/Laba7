#include <iostream>
using namespace std;




double func_for_one(double a, double b) {
    return 2.0 / (1.0 / a + 1.0 / b);
}


void func_for_two(double* a, double* b, double* c)
{
    if (*c < *b)
        swap(*c, *b);
    if (*c < *a)
        swap(*c, *a);
    if (*b < *a)
        swap(*b, *a);
}

void one() {

    double a;
    cout << "¬вод а: ";
    cin >> a;
    cout << "¬вод b: ";
    double b;
    cin >> b;
    cout << func_for_one(a, b);
}

void two() {
    cout << "¬ведите три числа: ";
    double a, b, c;
    cin >> a >> b >> c;
    func_for_two(&a, &b, &c);
    cout << a <<" " <<  b << " "<< c;
}

int main() {

    setlocale(LC_ALL, "Russian");
    one();
    two();

    return 0;
}