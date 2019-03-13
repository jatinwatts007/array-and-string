#include<iostream>
using namespace std;

int platformsNeeded(int arrival[], int departure[], int n) {
  
  int min=arrival[0];
  int max=0;
  
  for(int i=1;i<n;i++)
  {
    if(min>arrival[i])
    {
      min=arrival[i];
    }
  }
  
  for(int i=0;i<n;i++)
  {
    if(max<departure[i])
    {
      max=departure[i];
    }
  }
  
  int x=max-min;
  int a[x];
  
  
  for(int i=0;i<x;i++)
  {
    a[i]=0;
  }
  
  for(int i=0;i<n;i++)
  {
    a[arrival[i]-min]=1;
    
  }
   for(int i=0;i<n;i++)
  {
    a[departure[i]-min]=-1;
    
  }
  
  int fmax=0;
  int sum=0;
    for(int i=0;i<x;i++)
    {
      sum=sum+a[i];
      if(fmax<sum)
        fmax=sum;
    }
  return fmax;
}

int main()
{
	int n;
	cin>>n;
    int* arr=new int[n];
    int* dep=new int[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(int i=0;i<n;i++)
    {
    	cin>>dep[i];
	}
    cout<< platformsNeeded(arr, dep, n);
}
