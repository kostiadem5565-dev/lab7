#include <iostream>
#include <cstdarg>
#include <clocale>

using namespace std;

int sum(int k, ...)
{
    va_list args;
    va_start(args, k);

    int s = 0;
    for (int i = 0; i < k / 2; i++)
    {
        int a = va_arg(args, int);
        int b = va_arg(args, int);
        s += a * b;
    }

    va_end(args);
    return s;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int s1 = sum(8, 1, 2, 3, 4, 5, 6, 7, 8);
    int s2 = sum(10, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6);
    int s3 = sum(12, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6);

    cout << "Сумма для 8 параметров: " << s1 << endl;
    cout << "Сумма для 10 параметров: " << s2 << endl;
    cout << "Сумма для 12 параметров: " << s3 << endl;

    return 0;
}