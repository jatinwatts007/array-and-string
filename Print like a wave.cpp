#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int row, int col){
	int a[row*col];
    int k=0;
  
  for(int i=0;i<col;i++)
  {
    for(int j=0;j<row;j++)
    {
      if(i%2==0)
      {
        a[k]=input[j][i];
      }
      
      if(i%2==1)
      {
        a[k]=input[row-j-1][i];
      }
      k++;  
    }
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
    wavePrint(input, row, col);
}
