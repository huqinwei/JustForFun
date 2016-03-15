#include<iostream>
using namespace std;

int func1(int a, int b)
{
        int c = a + b;
        int *p = &c;
        p++;
        p++;
        p++;
        *p = *p - 0x4d;
        return c;
}
int main(){
        int iiiii = 0;
        int i = 1;
        int j = 2;
        int k = 0;
        i++;
        cout << "i:"<< i << endl;
        k = func1(i,j);

        cout << k << endl;
        cout << i << endl;
        cout << j << endl;
        return 0;
}
