#include <iostream>
#include <stdio.h>
using namespace std;

int addArray(int array1[], int n);

int main()
{
    //cout << "Hello world!" << endl;
	int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size1 = sizeof(data) / sizeof(data[0]);
	printf("sizeof(data):%d\n", sizeof(data));
	printf("½á¹ûÊÇ:%d\n", addArray(data, size1));

    return 0;
}

int addArray(int array1[], int n)
{
    int sum = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        sum += array1[i];
    }
    return sum;
}
