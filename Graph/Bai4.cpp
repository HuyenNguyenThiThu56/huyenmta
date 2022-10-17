#Nguyễn Thị Thu Huyền- ANHTTT56

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

char m1[] = "input1_2.txt";
char m3[] = "output1_2.txt";

void maTranKe(char* file_name1, char*file_name2)
{
	int arr[50][50] = {0} ;
	int keHangCuoi[10];
	int arrDinh[10];
	int row;
	
	ifstream in1; 
	ofstream out1;
	in1.open(file_name1, ios :: in);
	out1.open(file_name2,ios :: out);
	
	in1 >> row;
	out1 << row<<endl;
	
	//ma tran ke
	int a, b;
	int dem=1;
	int keCuoi=0;
	int dinh=0;
	
	while(in1 >> a)
	{
		in1 >> b;
		//danh sach ke
		if(a == dem)
		{
			out1 << b <<"\t";
			dinh++;
		}
		else if(a != dem)
		{
			out1 << endl;
			out1 << b <<"\t";
			
			arrDinh[dem] = dinh;
			dinh=1;
			
			dem++;
		}
		//ke voi dinh 6
		if(b==row)
		{
			keHangCuoi[keCuoi] = a;
			keCuoi++;
		}
		//gia tri ma tran ke
		arr[a-1][b-1]=1;
		arr[b-1][a-1]=1;
		
	}
	out1 << endl;	
	
	for(int k=0;k<keCuoi;k++)
	{
		out1<<keHangCuoi[k]<<"\t";
	}
	
	out1 << endl;
	out1 << endl;
	
	//dinh
	for(int l=1; l<=row; l++)
	{
		out1<<"Deg("<<l<<")="<<arrDinh[l]<<endl;
	}
	
	out1 << endl;
	out1 << endl;
	//ma tran ke
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			out1 << arr[i][j] <<"\t";
		}
		out1 << endl;
	}


	in1.close();
	out1.close();
}

int main()
{
	maTranKe(m1, m3);
	return 0;
}
