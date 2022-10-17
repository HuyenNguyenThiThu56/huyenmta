#Nguyễn Thị Thu Huyền- ANHTTT56

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>
using namespace std;

char m1[] = "input2.txt";
char m2[] = "input2_1.txt";
char m3[] = "input2_2.txt";

void dsCanh(char* file_name1, char*file_name2)
{
	int arr[50][50];
	int row;
	
	ifstream in1; 
	ofstream out1;
	in1.open(file_name1, ios :: in);
	out1.open(file_name2,ios :: out);
	
	in1>>row;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			in1 >> arr[i][j] ;
		}
		
	}
	
	out1 << row<<endl;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			if( arr[i][j] == 1 )
			{
				cout << i<<j<<endl;
				out1 << i+1 << "\t"<< j+1<<endl;
			}
		}
	}
	in1.close();
	out1.close();
}

void dsKe(char* file_name1, char*file_name2)
{
	int arr[50][50];
	int row;
	
	ifstream in1; 
	ofstream out1;
	in1.open(file_name1, ios :: in);
	out1.open(file_name2,ios :: out);
	
	in1 >> row;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			in1 >> arr[i][j] ;
		}
		
	}
	
	out1 << row<<endl;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			if( arr[i][j] == 1 )
			{
				out1 << j+1<<"\t";
			}
		}
		out1 << endl;
	}
	
	in1.close();
	out1.close();
}
int main ()
{
	dsKe(m1,m3);
	dsCanh(m1,m2);
	return 0;
}

