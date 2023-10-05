#include <iostream>
#include <cmath>

int main()
{
    std::cout.precision(10);
    double diem;
    int n;
    std::cin >> diem >> n;

    std::cout << round(diem * n) / n;

    return 0;
}