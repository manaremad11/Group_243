#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int last_two_digits= n%100;
    if(last_two_digits %4==0 || last_two_digits %7==0)
    {
        cout<<"Lucky"<<endl;
    }
    else
    {
        cout<<"Not Lucky"<<endl;
    }
    
    
    return 0;
}
