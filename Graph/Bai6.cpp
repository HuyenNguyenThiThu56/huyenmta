#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include <fstream> 
#include <vector>

using namespace std;
char m1[] = "input2_1.txt";
char m2[] = "output2_1.txt";

void docdsKe(char*file_name1, char*file_name2)
{
	int arr[50][50] = {0} ;
	int row;
	

	ifstream in1; 
	ofstream out1;
	in1.open(file_name1, ios :: in);
	out1.open(file_name2,ios :: out);
	
	in1 >> row;
	out1 << row<<endl;
	
	int str=0;
	int i=0;

	char a;

    do{
      in1.get(a);
    }while(a!=10);
   
    while (in1.get(a))
    {
	    int str=0;
	    if(a !=10 && a !=32)
	    {
	        str=str*10+int(a)-48;
	        arr[i][str-1]=1;
	    }
	    else if(a==10) i++;
    }
    //ma tran ke
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			out1 << arr[i][j] <<"\t";
		}
		out1 << endl;
	}
	out1 <<endl;
	//danh sach canh
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			if(arr[i][j]==1)
				out1 << i+1<<"\t"<<j+1<<endl;
		}
	}
	out1 <<endl;
	
	//dinh
	for(int i=0;i<row;i++)
   {
      int deg=0;
      for(int j=0;j<row;j++)
      {
         if(arr[i][j]==1) deg++;
      }
      out1<<"Deg("<<i+1<<")="<<deg<<endl;
   }
   
	in1.close();
	out1.close();
	
}
int main ()
{
	docdsKe(m1,m2);
	return 0;
}
