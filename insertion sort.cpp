#include <iostream>

using namespace std;

int data['n'],data2['n'];
int n;

void header()
{
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"|\t\tProgram INSERTION SORT\t\t\t|"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
}

void tukar_insertion(int a, int b)
{
	int t;
 	t = data[b];
 	data[b] = data[a];
 	data[a] = t;
}
void insertion_sort()
{
 	int temp,i,j;
 	for(i=1;i<=n;i++){
  		temp = data[i];
  		j = i -1;
  		while(data[j]>temp && j>=0)
  		{
   			data[j+1] = data[j];
   			j--;
  		}
 	data[j+1] = temp;
 	}
}
main()
{
 	header();
	cout<<"\nMasukkan Jumlah Data : "; cin>>n;
 	cout<<endl;
	for(int i=1;i<=n;i++)
	{
  		cout<<"Masukkan data ke"<<i<<" : "; cin>>data[i];
  		data2[i]=data[i];
 	}
 	insertion_sort();
 	cout<<"\nData Setelah di Sorting Ascending : ";
 	for(int i=1; i<=n; i++)
 	{
  		cout<<" "<<data[i];
 	}
 	cout<<"\nData Setelah di Sorting Descending : ";
 	for(int i=n; i>=1; i--)
 	{
 		cout<<" "<<data[i];
	}
	return 0;
}
