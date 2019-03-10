#include <iostream>
using namespace std;

// input - given string
// You need to update in the given string itself i.e. in input. No need to return or print.

void stringCompression(char input[]) {
  
  int a=49;
  int b=0;
  int i=1;
  while(input[i]!='\0')
  {
    if(input[i]==input[i-1])
    {
      
      int k=i;
      while(input[k]==input[k-1])
      {
        a++;
        k++;
      }
      i=k;
      input[b]=input[i-1];
      b++;
      input[b]=char(a);
      a=49;
      
    }
    else
    {
      b++;
      input[b]=input[i];
      i++;
    }
      
    
  }
  b++;
  input[b]='\0';

}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    stringCompression(input);
    cout << input << endl;
}
