#include <iostream>
using namespace std;

// input1 - first input string
// input2 - second input string
bool isPermutation(char input1[], char input2[]) {
  
  int flag;
  
    for(int i=0;input1[i]!='\0';i++)
    {
      flag=0;
      for(int k=0;input2[k]!='\0';k++)
      {
        if(input1[i]==input2[k])
        {
          flag=1;
        }  
      }
      if(flag==0)
        return flag==1;
    }
  
  if(flag==1)
  {
  for(int i=0;input2[i]!='\0';i++)
    {
      flag=0;
      for(int k=0;input1[k]!='\0';k++)
      {
        if(input2[i]==input1[k])
        {
          flag=1;
        }  
      }
      if(flag==0)
        return flag==1;
    }
  
   return flag==1;
  }
  
}


int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
