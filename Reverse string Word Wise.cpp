#include <iostream>
using namespace std;

// input - given string
// You need to update in the given string itself. No need to print or return anything

void reverseStringWordWise(char input[]) {
  int n=0;
  int i=0;
  int arr[1000];
  arr[0]=-1;
  char p[1000];
  int l=0;
  int k=1;
  while(input[i]!='\0')
  {
    if(input[i]==' ')
    {
      arr[k]=i;
      k++;
    }
    n++; 
    i++;
  }
  arr[k]=i;
  
  while(k>0)
  {
    for(int i=arr[k-1]+1;i<arr[k];i++)
    {
      p[l]=input[i];
      l++;
    }
    p[l]=' ';
    l++;
    n=arr[k]-1;
    k--;
  }
  p[l-1]='\0';
  
  int x=0;
  while(p[x]!='\0')
  {
    input[x]=p[x];
    x++;
  }
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
