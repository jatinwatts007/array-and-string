#include <iostream>
using namespace std;

int countPalindromeSubstrings(char s[]) {
	int n=0;
    int count=0;
  while(s[n]!='\0')
  {
    n++;
  }
  
  if(n==1)
    return n;
  
  for(int l=2;l<=n;l++)
  {
    for(int j=0;j<=n-l;j++)
    {
      int flag=0;
      int k=j;
      int m=j+l-1;
      while(k<j+l/2)
      {
        if(s[k]!=s[m])
        {
          flag=1;
          break;
        }  
        k++;
        m--;
      }
      if(flag==0)
        count++;
    }
  }
  return n+count;
}


int main() {
    char input[10000];
    cin >> input;
    cout << countPalindromeSubstrings(input) << endl;
}
