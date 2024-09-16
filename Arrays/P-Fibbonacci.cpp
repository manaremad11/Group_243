// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    if(num==0 || num==1)  //special cases
    {
        cout<<1<<endl;
        return 0;
    }
   int fib0=1, fib1=1,fibN;
    for(int i =2;i<=num;i++)
    {
        fibN = fib0+fib1;
        fib0=fib1; //move to next
        fib1=fibN;
    }
    cout<<fibN<<endl;
    
    
    
}
