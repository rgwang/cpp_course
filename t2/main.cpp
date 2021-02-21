#include <iostream>

using namespace std;

void limits(); // 输出各种整型所占的字节数，所能表示的最值

void floatnum(); // 浮点类型

void switchStatement(); // switch语句

int main()
{
//    std::cout << "Hello, World!" << std::endl;
//    floatnum();
//    limits();
    switchStatement();
    return 0;
}

void switchStatement()
{
    int vehicleClass;
    double toll;
    cout << "Enter vehicle class: ";
    cin >> vehicleClass;

    switch (vehicleClass) {
        case 1:
            cout << "Passenger car.";
            toll = 0.5;
            break;
        case 2:
            cout << "Bus.";
            toll = 1.5;
            break;
        case 3:
            cout << "Truck.";
            toll = 2.;
            break;
        default:
            cout << "Unknown vehicle class!";
    }
}

void limits()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
}

void floatnum()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0/3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
}