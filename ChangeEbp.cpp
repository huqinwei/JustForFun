#include<iostream>
using namespace std;

int sum(int a,int b){
        int c = 0;
        c = a + b;
        int *p = &c;
        p++;
        p++;
        *p = *p - 0x10;
        return c;
}
int func1(int a, int b)
{
        int c = sum(a,b);
        return c;
}
int main(){
        int iiiii = 0;
        int i = 1;
        int j = 2;
        int k = 0;
        k = func1(i,j);
//      k = sum(i,j);

        cout << k << endl;
        cout << i << endl;
        cout << j << endl;
        return 0;
}
/*
思路：破坏入栈的ebp地址，导致寻找ebp不利，栈的边界出现问题，ebp出了问题，找参数c就会找错，c找错了，赋值就错了，返回值自然就错了。
这倒不影响程序执行顺序，因为ret是另一个位置存的。这个效果，两层函数调用才会比较明显，在sum()函数内破坏掉入栈的ebp，返回func1时，当前栈帧的ebp就错误，找c变量的位置就错了，3赋值给了一个错误的位置，c变量还是初始化的野值，返回一个野值。
k打印出来也是野值。
*/
