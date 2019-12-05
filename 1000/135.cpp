/*
viết hàm tìm giá trị dương đầu tiên trong mảng 1 chiều số thực. 
Nếu mạng không có giá trị chẳn thì trả về -1.
*/


#include <iostream>
using namespace std;

void InputArray(int a[], int n)
{
    do
    {
        if(n < 0)
        {
            cout<<"n can not below 0? agian!"<<endl;
        }
    } while (n < 0);

    //input data

    int i = 0;
    while (i < n)
    {
        cout << "a[" << i <<"] = "; cin >> a[i]; cout<<endl;
        i++;
    }
    
}


void PrintOutputArray(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout <<"a["<< i <<"] = "<<a[i]<<endl;
		i++;
    }
    
}

void FindPositiveNumbers(int a[], int n)
{
    int PositiveNumber = 0;
    int i = 0;
    int ValuePositiveNumber = 0;
    while ((i < n) && (PositiveNumber == 0))
    {
        if (a[i] % 2 == 0)
        {
            PositiveNumber = 1;
            ValuePositiveNumber = a[i];
        }
        i++;
    }

    if (PositiveNumber == 1)
    {
        cout<<"This array has first PositiveNumbers is "<< ValuePositiveNumber <<endl;
    }
    else 
    {
        cout<<"This array has not PositiveNumbers"<<endl;
    }
}

void main()
{
    int a[100];
    int n = 5;
    InputArray(a, n);
    PrintOutputArray(a, n);

    FindPositiveNumbers(a, n);

    system("pause");
}