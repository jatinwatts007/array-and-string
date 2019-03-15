#include <iostream>
using namespace std;

void spiralPrint(int input[][1000], int row, int col){
	int a[row*col];
    int j=row-1;
    int k=col-1;
    int m=0;
    int n=0;
    int l=0;
  
  int p=0;
  
  while(p<row*col)
  {
 
    for(int i=n;i<=k;i++)
    {
      a[l]=input[m][i];
      p++;
      l++;
    }
    m++;
    
    for(int i=m;i<=j;i++)
    {
      a[l]=input[i][k];
      p++;
      l++;
    }
    k--;
    
    for(int i=k;i>=n;i--)
    {
      a[l]=input[j][i];
      p++;
      l++;
    }
    j--;
    
    for(int i=j;i>=m;i--)
    {
      a[l]=input[i][n];
      p++;
      l++;
    }
    n++;
    
    
  }
  
  for(int i=0;i<row*col;i++)
  {
    cout<<a[i]<<" ";
  }

}



int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;

    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    spiralPrint(input, row, col);
}
