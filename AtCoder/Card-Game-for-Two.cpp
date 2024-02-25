#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  int arr[N];
  cin>>N>>endl;
  for(int i=0;i<N;i++)
  {
    cin>>arr[i];
  }
  int alice=0;
  int bob=0;
  
  for(int i=0;i<N;i++)
  {
    if(i%2==0)
    {
      alice+=i;
    }
    else
    {
      bob+=i;
    }
  }
  cout<<alice-bob<<endl;
}
