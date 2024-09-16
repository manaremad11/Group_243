// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool is_increasing=true;
    bool is_decreasing=true;
    
    for(int i=1;i<n;i++)  // check is increasing
    {
        if(a[i]<a[i-1])
        {
            is_increasing = false;
            break;
        }
    }
     for(int i=1;i<n;i++)  // check is decreasing
    {
        if(a[i]>a[i-1])
        {
            is_decreasing = false;
            break;
        }
    }
    if(is_increasing)
    {
        cout<<"YES,Monotonic Increasing"<<endl;
    }
    else if(is_decreasing)
    {
        cout<<"YES,Monotonic decreasing"<<endl;
    }
    else
    {
        cout<<"not"<<endl;
    }
    
    
    
}
