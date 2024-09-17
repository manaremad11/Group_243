#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin>>n>>m;
    if(n>m)
    {
        cout<<"Alice Win"<<endl;
    }
    else if(m>n)
    {
        cout<<"Bob Win"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
    }
    
    return 0;
}
