#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    bool found=false;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            
            found =true;
            break;
        }
        
    }
    if(found)  //true
    {
        cout<<"YES"<<endl;
    }
    else  //false
    {
        cout<<"NO"<<endl;
    }
  
    return 0;
}
