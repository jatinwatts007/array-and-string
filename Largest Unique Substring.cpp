#include <iostream>
using namespace std;

void findLargestUniqueSubstring(char input[], char output[]){
	int p=0;
  while(input[p]!='\0')
    p++;
  int max=1;
  int x;
  int y;
  int flag;
  int l;
  int j;
  for(int i=0;i<p;i++)
  { 
    flag=0;
    l=1;
    j=i;
    while(flag==0 && j<=p)
    {
      l++;
      j++;
      for(int f=i;f<j;f++)
      {
        if(input[j]==input[f])
        flag=1; 
      }  
    }
    l--;
    if(max<l)
    {
      x=i;
      y=j;
      max=l;
    }
    if(j==p-1)
      break;   
  } 
  for(int i=x;i<y;i++)
  {
    output[i-x]=input[i];
  } 
  output[y-x] = '\0';
}


int main() {
    char input[1000], output[1000];
    cin.getline(input, 1000);
    findLargestUniqueSubstring(input, output);
    cout << output << endl;
}
