#include <iostream>
using namespace std;

// arr - input array
// n - size of array

void PushZeroesEnd(int arr[], int n){
  int a=0;
  int temp=0;
  int i=0;
  int flag;
  
  while(i<n && arr[i]!=0)
  {
    a++;
    i++;
  }
    
  while(i<n)
  {
    if(arr[i]==0)
      i++;
    
    if(arr[i]!=0)
    {
      temp=arr[i];
      arr[i]=arr[a];
      arr[a]=temp;
      i++;
      a++;
    }
  }
}


int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	PushZeroesEnd(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	
	return 0;

}
