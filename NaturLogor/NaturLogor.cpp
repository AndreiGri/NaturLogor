#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    double s = 0, x;
    int n;
    cout << "Ведите число x для вычисления Ln(1+x): ";
    cin >> x;
    cout << "Ведите число n для вычисления Ln(1+x): ";
    cin >> n;
    while (n) {
        if (n % 2 != 0) {
            s += pow(-1, n - 1) * pow(x, n) / n;
        }
        else {
            s -= pow(-1, n - 1) * pow(x, n) / n;
        }
        n--;
    }
    cout << "Натуральный логорифм Ln(1 + x) при x = " << x << " будет равен " << s << endl;
    system("pause > nul");
    return 0;
}
