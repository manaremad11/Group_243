#include <iostream>
using namespace std;

int main() {
    long long n;
    cin>>n;
    int lastdigit= n%10;   //find the last digit
    if(lastdigit %2 !=0)  
    {
        cout<<"Valid"<<endl;
    }
    else
    {
        cout<<"Not Valid"<<endl;
    }
    
    return 0;
}
