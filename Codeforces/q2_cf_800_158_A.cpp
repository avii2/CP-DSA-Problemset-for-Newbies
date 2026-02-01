// take care of zero's in this problem 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int cnt = 0;

    vector<int>a(n);
    for(auto &it : a)
    {
        cin>>it;
    }

    int score = a[k-1];
   
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 0)
        
        {
            continue;
        }
      else   if(a[i]>= score)
        {
           
            cnt++;
        }
    }

     cout<<cnt<<endl;
}