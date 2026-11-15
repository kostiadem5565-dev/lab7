#include <iostream>
#include <clocale>

using namespace std;

struct Complex
{
    double re;
    double im;
};

int sub(int a, int b)
{
    return a - b;
}

Complex sub(Complex a, Complex b)
{
    Complex res;
    res.re = a.re - b.re;
    res.im = a.im - b.im;
    return res;
}

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int x, y;
    cout << "Введите два целых числа: ";
    cin >> x >> y;
    cout << "Разность целых чисел: " << sub(x, y) << endl;

    Complex c1, c2, c3;
    cout << "Введите действительную и мнимую части первого комплексного числа: ";
    cin >> c1.re >> c1.im;
    cout << "Введите действительную и мнимую части второго комплексного числа: ";
    cin >> c2.re >> c2.im;

    c3 = sub(c1, c2);
    cout << "Разность комплексных чисел: " << c3.re;
    if (c3.im >= 0) cout << " + " << c3.im << "i" << endl;
    else cout << " - " << -c3.im << "i" << endl;

    return 0;
}