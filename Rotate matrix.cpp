#include<iostream>
using namespace std;

void rotate(int **input, int n){
  
    int b[n][n];
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      b[n-j-1][i]=input[i][j];
    }
  }
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      input[i][j]=b[i][j];
    }
  }
}


int main() {
    int n;
    cin >> n;
    
    int **input = new int*[n];
    
    for(int i = 0; i < n; i++) {
        input[i] = new int[n];
        for(int j = 0; j < n; j++) {
            cin >> input[i][j];
        }
    }
    
    rotate(input, n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}
