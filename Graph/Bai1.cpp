#Nguyễn Thị Thu Huyền _ ANHTTT56

#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <iostream>
#include <fstream> 

using namespace std;
char m1[] = "input1.txt";
char m2[] = "input2.txt";

void ghifile1(char* file_name)
{
	int arr[50][50];
	int row, col;
	int n;
	ofstream in1; 
	in1.open(file_name, ios::out  );
	
	cout<<"Kich thuoc ma tran 1: ";
	cin>>row;
	col = row;
	
	in1<<row<<endl;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"]= ";
			cin>> arr[i][j];
			in1 << arr[i][j] <<"\t";
		}
		in1 << endl;
	}
	in1.close();
}

void ghifile2(char*file_name)
{
	int arr[50][50];
	int row, col;
	ofstream in1; 
	in1.open(file_name, ios::out  );
	
	cout<<"Kich thuoc ma tran 2: ";
	cin>>row;
	col = row;
	
	in1<< row << endl;
	
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"]= ";
			cin>> arr[i][j];
			in1 << arr[i][j] <<"\t";
		}
		in1<<endl;
	}
	in1.close();
}

void nhap(char* file_name1, char* file_name2)
{
	ghifile1(file_name1);
	ghifile2(file_name2);
}


int main ()
{
	nhap(m1,m2);
	return 0;
}

