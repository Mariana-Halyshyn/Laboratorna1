#include <iostream>
#include <cmath>

using namespace std;

class ZavdClass
{
public:
    double calculate_a(double x, double y, double z, double b)
    {
        return pow((x + y), 2) + x + pow(x, 0.3) / pow((pow(b, 2) + y), 2) / 1 + exp(-(x - y)) + pow(fabs(z), 0.34);
    }
    double calculate_b(double x, double y, double z)
    {
        return 1 + pow(fabs(y - x), 2) / pow(fabs(z - 1), 1.34) + pow((z - x), 2) / pow(sin(z), 2);
    }
};

int main()
{
    setlocale(LC_ALL, "Ukr");

    ZavdClass zc;
    double  x = 0.48 * 3, y = 0.47 * 3, z = -1.32 * 3;

    ZavdClass result;
    double B = 3;

    double a = zc.calculate_a(x, y, z, B);
    double b = zc.calculate_b(x, y, z);

    cout << "Значення a: " << a << endl;
    cout << "Значення b: " << b << endl;

    for (double H = -1; H < 1; H = H + 0.2)
    {
        zc.calculate_b(H, y, z);
        zc.calculate_a(H, y, z, b);
        double a = zc.calculate_a(H, y, z, B);
        double b = zc.calculate_b(H, y, z);
        cout << "Табульоване значення а: " << a << endl;
        cout << "Табульоване значення b: " << b << endl;
    }

    return 0;
}