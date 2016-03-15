#include<iostream>
using namespace std;
int main()
{
        int a = 1;
        int b = 2;
        int &refA = a;
        int *ptrA = NULL;
        ptrA = &a;
        ptrA++;
        *ptrA = (int)&b;
        int size = 0;
        size = sizeof(a);
        size = sizeof(refA);
        cout << a << endl;
        cout << b << endl;
        cout << refA << endl;
        cout << ptrA << endl;

}
