#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    char a[n];   
    int sum =0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i] -'0';   
    }
    cout<<sum;
    return 0;
}
