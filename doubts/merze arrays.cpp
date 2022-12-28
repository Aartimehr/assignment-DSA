#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>A)
{
    for(int i;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
}
void printvector2(vector<int>Aa)
{
    for(int j=0;j<Aa.size();j++)
    {
        cout<<Aa[j]<<" ";
    }
}
void sort(vector<int>&A)
{
    for(int i=1;i<A.size();i++)
    {
        int temp=A[i];
        int j=i-1;
         while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}
void sorting(vector<int>Aa)
{
    for(int k=1;k<Aa.size();k++)
    {
        int temp = Aa[k];
        int q=k-1;
        while(q>=0 && Aa[k]>temp)
        {
            Aa[k+1] = Aa[k];
            k--;
        }
        Aa[k+1]=temp;
    }
    
}
int main()
{
    vector<int>A = {6,1,2,3,4,6,1};
    vector<int>Aa = {2,3,4,1,4,7,8};
    cout<<"sorted"<<" ";
    sort(A);
    sorting(Aa);
    printvector(A);
    printvector(Aa);
    return 0;
}
