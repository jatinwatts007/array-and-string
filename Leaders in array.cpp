#include<iostream>
#include<climits>
using namespace std;

void Leaders(int* arr,int len)
{
  int n=len-1;
  int max=0;
  int p[len];
  int a=0; 
  
 
  for(int i=n;i>=0;i--)
  {
    if(arr[i]>=max)
    {
      p[a]=arr[i];
      a++;
      max=arr[i];
    }
  }
  
  for(int k=a-1;k>=0;k--)
  {
    cout<<p[k]<<" ";
  }
  
}

int main()
{
    int len;
    cin>>len;
	int *arr = new int[len + 1];
	
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
	Leaders(arr,len);
}
