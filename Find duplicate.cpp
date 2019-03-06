#include <iostream>
using namespace std;

// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){
  
  int a[size-1];
  
  for(int i=0;i<size-1;i++)
  {
    a[i]=i;
  }
    
  for(int i=0;i<size;i++)
  {
    if(a[arr[i]]==-1)
    {
      return arr[i];
    }
    a[arr[i]]=-1;
  }
}


int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout << MissingNumber(input, size);	
	
	delete [] input;

	return 0;
}
