#include <iostream>
#include <cmath>
using namespace std;

const int NUMBER_OF_PLANTS = 4;

void inputData(int a[], int lastPlantNumber);
//前提条件：lastPlantNumber是数组a的声明大小
//执行结果：从plantNumber=1到lastPlantNumber:
//a[plantNumber-1]等于编号为plantNumber的工厂的产量

void scale(int a[], int size);
//前提条件：从a[0]到a[size-1]，每个索引变量都有非负数的值
//执行结果：a[i]里原来的值除以1000，再四舍五入得到一个新值
//所有的i都满足0<=i<=size-1

void graph(const int asteriskCount[], int lastPlantNumber);
//前提条件：从a[0]到a[lastPlantNumber-1]，每个索引变量都有非负数的值
//执行结果：输出一个条形图来显示各个工厂的产量
//图中第n个工厂的产量用索引变量a[n-1]的值表示，单位为1000个生产量单位
//所有的n都满足

void getTotal(int& sum);
//从键盘输入一系列非负数，将这些数的总和存在变量sum中

int roundme(double number);
//前提条件：number>=0
//返回四舍五入后的值

void printAsterisks(int n);
//在屏幕上输出n颗星

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int production[NUMBER_OF_PLANTS];

    cout << "This program displays a graph showing\n"
         << "production for each plant in the company.\n";

    inputData(production, NUMBER_OF_PLANTS);
    scale(production, NUMBER_OF_PLANTS);
    graph(production, NUMBER_OF_PLANTS);
    return 0;
}

void inputData(int a[], int lastPlantNumber)
{
    for (int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++)
    {
        cout << endl
             << "Enter production data for plant number "
             << plantNumber << endl;
        getTotal(a[plantNumber-1]);
    }
}

void getTotal(int& sum)
{
    cout << "Enter number of units produced by each department.\n"
         << "Append a negative number to the end of the list.\n";

    sum = 0;
    int next;
    cin >> next;
    while (next >= 0)
    {
        sum = sum + next;
        cin >> next;
    }

    cout << "Total = " << sum << endl;
}

void scale(int a[], int size)
{
    for (int index = 0; index < size; index++)
    {
        a[index] = roundme(a[index]/1000.0);
    }
}

int roundme(double number)
{
    return static_cast<int>(floor(number + 0.5));
}

void graph(const int asteriskCount[], int lastPlantNumber)
{
    cout << "\nUnits produced in thousands of units:\n\n";
    for (int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++)
    {
        cout << "Plant #" << plantNumber << " ";
        printAsterisks(asteriskCount[plantNumber - 1]);
        cout << endl;
    }
}

void printAsterisks(int n)
{
    for (int count = 1; count <= n; count++)
        cout << "*";
}