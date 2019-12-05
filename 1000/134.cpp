/*
viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
*/


#include <iostream>

using namespace std;

void InputArray(float a[], int n)
{
    do
    {
        if (n < 0)
        {
            cout<<"n below 0 ?agian?"<<endl;
        }
    }
    while (n < 0);

    //input data of array
    int i = 0;
    while(i < n)
    {
        cout<<"a["<< i <<"] = "; cin >> a[i]; cout<<endl; 
        i++;
    }
}

void PrintOutputArray(float a[])
{
    for(int i = 0; i < 5; i ++ )
    {
        cout<<"a["<< i <<"] = "<< a[i]; cout<<endl;    
    }
}

float FindMaxInArray(float a[])
{
    int max = a[0];

    //find max

    for(int i = 0 ;i < 5; i++)
    {
        if(a[i] > a[0])
        {
            max = a[i];
        }
    }

    return max;
}


void main()
{
    int n = 5;
    float a[100];
    InputArray(a,n);
    PrintOutputArray(a);
    cout << FindMaxInArray(a);
    system("pause");
}