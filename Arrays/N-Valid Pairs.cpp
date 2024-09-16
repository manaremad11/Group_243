// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
            {
                counter++;
            }
        }
    }
cout<<counter<<endl;
    return 0;
}
