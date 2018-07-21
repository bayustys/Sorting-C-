#include<iostream>
using namespace std;

int data['n'],data2['n'];
int n;
void tukar_insertion(

int a, int b){
	int t;
 	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void insertion_sort(){
	int temp,i,j;
 	for(i=1;i<=n;i++){
  		temp = data[i];
  		j = i -1;
  		while(data[j]>temp && j>=0){
   			data[j+1] = data[j];
   			j--;
  		}
 		data[j+1] = temp;
 	}
}

int a[101];  
void merge(int,int,int);  
void merge_sort(int low,int high)  
{  
 	int mid;  
 	if(low<high)  
 	{  
  		mid=(low+high)/2;  
  		merge_sort(low,mid);  
  		merge_sort(mid+1,high);  
  		merge(low,mid,high);  
 	}  
}  
void merge(int low,int mid,int high)  
{  
 	int h,i,j,b[101],k;  
 	h=low;  
 	i=low;  
 	j=mid+1;  
 	while((h<=mid)&&(j<=high))  
 	{  
  		if(a[h]<=a[j])  
  		{  
   			b[i]=a[h]; h++;  
  		}  
  		else  
  		{  
   			b[i]=a[j]; j++;  
  		} i++;  
 	}  
 	if(h>mid)  
 	{  
  		for(k=j;k<=high;k++)  
  		{  
   			b[i]=a[k]; i++;  
  		}  
 	}  
 	else  
 	{  
  		for(k=h;k<=mid;k++)  
  		{  
   			b[i]=a[k]; i++;  
  		}  
 	}  
 	for(k=low;k<=high;k++)  
  	a[k]=b[k];  
} 

int dat['l'],dat2['l'];
int l;

void tukar(int a, int b){
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}
void selection_sort(){
	int pos,i,j;
	for(i=1;i<=n-1;i++){
		pos = i;
  		for(j = i+1;j<=n;j++)
  		{
   			if(data[j] < data[pos]) pos = j;
  		}
  		if(pos != i) tukar(pos,i);
 	}
}

void tampilkan_larik(int data[], int n){
 int i;
 for (i=1;i<=n;i++)
 cout<<data[i]<<" ";
 cout<<"\n";
}

int partisi (int data[], int awal, int akhir)
{
 int x,i,j,simpan;

 i=awal;
 j=akhir;

   while(1)
   {
   while(data[i]<data[awal])
   i=i+1;

    while(data[j]>data[awal])
     j=j-1;

    if (i<j)
    {
    
   simpan=data[i];
    data[i]=data[j];
   data[j]=simpan;
    }
   else
      return j;
   }
}

void quick_sort(int data[], int awal, int akhir)
{
 int q;
 if(awal<akhir)
 {
  q=partisi(data,awal,akhir);
  quick_sort(data,awal,q);
  quick_sort(data, q+1,akhir);
 }
}

int main(){

	int pil;
	menu:
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"|\t\t\tProgram Sorting\t\t\t\t|"<<endl;
	cout<<"-----------------------------------------------------------------"<<endl<<endl;
	cout<<"Pilih Jenis Sorting Yang Kamu Suka";
	cout<<"\n[1] Bubble Sort";
	cout<<"\n[2] Insertion Sort";
	cout<<"\n[3] Merge Sort";
	cout<<"\n[4] Selection Sort";
	cout<<"\n[5] Quick Sort";
	cout<<"\n[6] Exit";
	cout<<"\nTentukan Pilihanmu : ";
	cin>>pil;
	cout<<endl;
	
	if(pil==1){
		int nilai['n'];
		int temp;
		int n;
		cout<<"Banyak Data: ";
		cin>>n;
		cout<<endl;
		for (int a=1; a<=n; a++){
			cout<<"nilai["<<a<<"]: ";
			cin>>nilai[a];
		}
			cout<<endl<<endl;
			cout<<"Data Sebelum diurutkan"<<endl;
		for(int a=1; a<=n; a++){
			cout<<nilai[a] <<" ";
		}
		for(int a=n-1; a>=1; a--){
			for(int b=1; b<=a; b++){
				if(nilai[b]>nilai[b+1]){
					temp=nilai[b+1];
					nilai[b+1]=nilai[b];
					nilai[b]=temp;
				}
			}
		}
		cout<<"\n\nData Setelah Diurutkan"<<endl;
		for (int a=1; a<=n; a++){
			cout<<nilai[a]<<" ";
		}
		cout<<endl; system("pause"); system("cls"); goto menu;
	}
	if(pil==2){
		cout<<"\nMasukkan Jumlah Data : "; cin>>n;
 		cout<<endl;
		for(int i=1;i<=n;i++){
  			cout<<"Masukkan data ke"<<i<<" : "; cin>>data[i];
  			data2[i]=data[i];
 		}
 		insertion_sort();
 		cout<<"\nData Setelah di Sorting : ";
 		for(int i=1; i<=n; i++){
  			cout<<" "<<data[i];
 		}
		cout<<endl; system("pause"); system("cls"); goto menu;	
	}
	if(pil==3){
		int num,i;
		cout<<"Masukkan Jumlah Data : "; cin>>num;  
   		cout<<endl;  
 		for(i=1;i<=num;i++){  
  			cout<<"Masukkan Data ke "<<i<<" : "; cin>>a[i] ;  
 		}  
 		merge_sort(1,num);  
 		cout<<endl;  
 		cout<<"Data Setelah Disorting : ";  
 		for(i=1;i<=num;i++){
  			cout<<a[i]<<" ";
  		}
  		cout<<endl; system("pause"); system("cls"); goto menu;
	}
	if(pil==4){
		cout<<"\nMasukkan Jumlah Data : "; cin>>l;
 		cout<<endl;
 		for(int i=1;i<=l;i++){
  			cout<<"Masukkan data ke "<<i<<" : "; cin>>dat[i];
 	 		data2[i]=dat[i];
 		}
 		selection_sort();
 		cout<<"\nData Setelah di Sorting : ";
 		for(int i=1; i<=l; i++){
  			cout<<" "<<dat[i];
 		}
 		cout<<endl; system("pause"); system("cls"); goto menu;
	}
	if(pil==5){
		int i,j,n,data[101];
		cout<<"masukkan banyak data= ";cin>>n;
   		for(i=1;i<=n;i++){
    		cout<<"data ke-"<<i<<" = ";cin>>data[i];
		}
 		cout<<"Data sebelum diurut: "<<endl;
 		for(j=1;j<=n;j++){
  			cout<<data[j]<<" ";
		}
		quick_sort(data,1,n);
		cout<<endl;
 		cout<<endl;
 		cout<<"hasil pengurutan:\n";
 		tampilkan_larik(data,n);
		cout<<endl; system("pause"); system("cls"); goto menu;
	}
	if(pil==6){
		return 0;	
	}
	else
		cout<<"\nPilihan tidak ada!!";
		cout<<endl; system("pause"); system("cls"); goto menu;
}
