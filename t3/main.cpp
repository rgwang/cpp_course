#include <iostream>
using namespace std;

void getNumbers(int& input1, int& input2); // 从键盘读入两个整数

void swapValues(int& variable1, int& variable2); // 交换variable1和variable2的值

void showResults(int output1, int output2); // 以此顺序显示variable1和variable2的值

int main() {
    // std::cout << "Hello, World!" << std::endl;
    int firstNum, secondNum;

    getNumbers(firstNum, secondNum);
    swapValues(firstNum, secondNum);
    showResults(firstNum, secondNum);
    return 0;
}

void getNumbers(int& input1, int& input2)
{
    cout << "Enter two integers: ";
    cin >> input1
        >> input2;
}

void swapValues(int& variable1, int& variable2)
{
    int temp;

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void showResults(int output1, int output2)
{
    cout << "In reverse order the numbers are: "
         << output1 << " " << output2 << endl;
}