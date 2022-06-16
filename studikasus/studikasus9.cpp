#include <iostream>
using namespace std;

class Matriks {
	public :
		void input();
		void proses();
		void output();
	private :
		int n, k, temp, baris, kolom;
		int data[30];
		int A[40][40];
};

void Matriks::input()
{
	cout<<"Masukkan Banyak Bilangan : ";cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Masukkan Data ke-"<<i<<" : ";cin>>data[i];
	}
	cout<<endl;
	cout<<"Data Sebelum Diurutkan : "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<data[i]<<" ";
	}
}

void Matriks::proses()
{
	//sorting
	for(int i=0; i<20; i++)
	{
		for(int j=0; j<(19-i); j++)
		{
			if(data[j] > data[j+1])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	cout<<endl;
	cout<<"\nData Setelah Diurutkan : "<<endl;
	for(int i=0; i<20; i++)
	{
		cout<<data[i]<<" ";
	}
	k=0;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<5; j++)
		{
			A[i][j] = data[k];
			k++;
		}
	}
}

void Matriks::output()
{
	cout<<endl<<endl;
	cout<<"Berapa Baris : ";cin>>baris;
	cout<<"Berapa Kolom : ";cin>>kolom;
	for(int i=0; i<baris; i++)
	{
		for(int j=0; j<kolom; j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	Matriks matri;
	matri.input();
	matri.proses();
	matri.output();
}
