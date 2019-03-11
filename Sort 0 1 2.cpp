#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int arr[], int n)  {  
  int a=0;
  int b=n-1;
  int temp;
  int i=0;
  int flag;
  while(i<n && arr[i]==0)
  {
    a++;
    i++;
  } 
  while(i<=b){
    flag=0;
    if(arr[i]!=1)
    {
      flag=1;
      if(arr[i]==0)
      {
        temp=arr[a];
        arr[a]=arr[i];
        arr[i]=temp;
        a++;
        i++;
      }      
      else if(arr[i]==2)
      {
        temp=arr[b];
        arr[b]=arr[i];
        arr[i]=temp;
        b--;
        if(temp==1)
          i++;
      }    
    }
     if(flag==0)
       i++;
  }
}


int main() {

	int size_first;

	cin>>size_first;
	int *arr_first=new int[1+size_first];	
	
	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];
	
	sort012(arr_first,size_first);
		
	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";	
	return 0;
}
