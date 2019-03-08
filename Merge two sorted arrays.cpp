#include<iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
  
  int i=0;
  int l=0;
  int r=0;
  
  while(l<size1 && r<size2)
  {
    if(arr1[l]<=arr2[r])
    {
      ans[i]=arr1[l];
        l++;
    }
    else
    {
      ans[i]=arr2[r];
        r++;
    }
      i++;
  }
  
  while(l>=size1 && i<size1+size2)
  {
    ans[i]=arr2[r];
    r++;
    i++;
  }
  
   while(r>=size2 && i<size1+size2)
  {
    ans[i]=arr1[l];
    l++;
    i++;
  }
    
}


int main(){
  int size1;  
  cin >> size1;
  int* arr1 = new int[size1];
  for(int i = 0; i < size1; i++){
    cin >> arr1[i];
  } 
  int size2;  
  cin >> size2;
  int* arr2 = new int[size2];
  for(int i = 0; i < size2; i++){
    cin >> arr2[i];
  } 
	
  int* ans = new int[size1 + size2];
	
  merge(arr1, size1, arr2, size2, ans);

  for(int i = 0; i < size1 + size2; i++){
			cout << ans[i] <<  " ";
		}
  delete arr1;
  delete arr2;
  delete ans;
}


