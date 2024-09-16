// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n; //size
    int a[n]; //declaration
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxlength =1;  //store longest subsequence
    int currentlength=1; // store current subsequence
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            currentlength++;   // 4
        }
        else  // 1234444212
        {
            if(currentlength>maxlength)
            {
                maxlength=currentlength;  //update maxlength
            }
            currentlength =1;
        }
    }
    if(currentlength>maxlength)
    {
        maxlength = currentlength;
    }
    cout<<maxlength<<endl;

    return 0;
}
