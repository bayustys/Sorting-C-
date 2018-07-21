#include<iostream>

using namespace std;

int data['n'],data2['n'];
int n;

void header()
{
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"|\t\tProgram SELECTION SORT\t\t\t|"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
}

void tukar_selection(int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort()
{
	int pos,i,j;
	for(i=1;i<=n-1;i++)
 	{
		pos = i;
  		for(j = i+1;j<=n;j++)
  		{
   			if(data[j] < data[pos]) pos = j;
  		}
  		if(pos != i) tukar_selection(pos,i);
 	}
}

main()
{
	header();
	
 	cout<<"\nMasukkan Jumlah Data : "; cin>>n;
 	cout<<endl;
 	for(int i=1;i<=n;i++)
 	{
  		cout<<"Masukkan data ke "<<i<<" : "; cin>>data[i];
 	 	data2[i]=data[i];
 	}
 	selection_sort();
 	cout<<"\nData Setelah di Sorting Ascending : ";
 	for(int i=1; i<=n; i++)
 	{
  		cout<<" "<<data[i];
 	}
 	cout<<"\nData Setelah di Sorting Descending : ";
 	for(int i=n; i>=1; i--){
 		cout<<" "<<data[i];
	}
 	return 0;
}
