#include <iostream>
using namespace std;

long maxPathSum(int ar1[], int ar2[], int m, int n)
{
  long maxsum=0;
  long sum1=0;
  long sum2=0;
  long i=0;
  long j=0;
  
  while(i<m && j<n)
  {
    if(ar1[i]<ar2[j])
    {
      sum1+=ar1[i];
      i++;
    }
    if(ar1[i]>ar2[j])
    {
      sum2+=ar2[j];
      j++;
    }
    if(ar1[i]==ar2[j])
    {
      sum1+=ar1[i];
      sum2+=ar2[j];
      i++;
      j++;
      if(sum1>=sum2)
      {
        maxsum+=sum1;
      }
      else
      {
        maxsum+=sum2;
      }
      sum1=0;
      sum2=0;
    }
  }
  
  if(i>=m)
  {
    while(j<n)
    {
      sum2+=ar2[j];
      j++;
    }
  }
  
   if(j>=n)
  {
    while(i<m)
    {
      sum1+=ar1[i];
      i++;
    }
  }
    if(sum1>=sum2)
    {
      maxsum+=sum1;
    }
  else
  {
    maxsum+=sum2;
  }
    
    return maxsum;
}


int main() {
    int *a,*b,m,n,i;
    cin>>m;
    a=new int[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    b=new int[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    long ans = maxPathSum(a,b,m, n);
    cout << ans << endl;
    delete a;
    delete b;
    return 0;
}
