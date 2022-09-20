#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i;
    cin>>i;
    int Arr[i];
    for(int n=0;n<i;n++)
    {
        cin>>Arr[n];
        
    }
       for(int n=i-1;n>=0;n--)
       {
           cout<<Arr[n]<<" ";
       }
    return 0;
}
