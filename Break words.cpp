#include<iostream>
#include<string.h>
using namespace std;

void breakWords(char* S)
{
  int j=0;
  int i=0;
  int p=0;
  char T[100000];
  while(S[i]!='\0')
  {
    if(S[i]==' ')
    {
      int k=i-p;
      if(k>=4 && k%2==0)
      {
        int l=0;
        while(l<k/2)
        {
          T[j]=S[p];
          j++;
          l++;
          p++;
        }
        T[j]=' ';
        j++;
        while(l<k)
        {
          T[j]=S[p];
          j++;
          l++;
          p++;
        }
        T[j]=' ';
        j++;
      }
       
      else
      {
        int l=0;
        while(l<k)
        {
          T[j]=S[p];
          l++; 
          j++;
          p++;
        }
        T[j]=' ';
        j++;
      }
      p=i+1;
      
    }
    i++;    
  }
  
  while(S[p]!='\0')
  {
    T[j]=S[p];
    p++;
    j++;
  }
  
  i=0;
  while(T[i]!='\0')
  {
    S[i]=T[i];
    i++;
  }
}


int main()
{
	char str[100000];
	cin.getline(str,100000);
	breakWords(str);
	cout<<str;
}
