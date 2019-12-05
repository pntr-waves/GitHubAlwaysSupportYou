/*tìm số chẵn cuối cùng trong mảng 1 chiều các số nguyên. 
nếu mảng không có giá trị chẵn thì trả về -1*/


#include <iostream>
using namespace std;

//functions

void InputArray(int a[], int n)
{
    do
    {
        if(n < 0)
        {
            cout << "n is not less than 0? again!" << endl;
        }
    } while (n < 0);

    //
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = "; cin >> a[i]; cout<<endl;
    }
}


void PrintOutPutArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}

void FindLastPositiveNumber(int a[], int n)
{
    int PositiveNumber = -1;
    int Value = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            Value = a[i];
            PositiveNumber = i;
        }
    }

    if(PositiveNumber == -1)
    {
        cout << "this array has not PositiveNumber" << endl; 
    }
    else
    {
        cout << "this array has last PositveNumber : a[" << PositiveNumber << "] = " << Value << endl;
    }
}


void main()
{
    int a[100];
    int n = 5;
    InputArray(a, n);
    PrintOutPutArray(a, n);
    FindLastPositiveNumber(a, n);
    system("pause");
}