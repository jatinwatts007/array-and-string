#include <iostream>
using namespace std;

// input - given string
// Update in the given input itself. No need to return or print anything

void reverseEachWord(char input[]) {
  int a=0;
  int temp;
  
  for(int i=0;input[i]!='\0';i++)
  {
    if(input[i+1]==' ' || input[i+1]=='\0')
    {
      int k=i;
      while(k>=a)
      {
        temp=input[a];
        input[a]=input[k];
        input[k]=temp;
        a++;
        k--;
      }
      a=i+2;
      
    }
      
  }

}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseEachWord(input);
    cout << input << endl;
}
