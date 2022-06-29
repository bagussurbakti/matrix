#include<iostream>
#include <conio.h> 
#include <iomanip>

using namespace std;
main()
{
	

	cout<<"\n___________________________MATRIX : _______________________"<<endl;

	cout<<"DWI BAGUS RIO KARDO SURBAKTI"<<endl;

	
cout<<"\n==============================================================="<<endl;

int a,b; 
int matrix1[2][2]; 
int matrix2[2][2]; 
int matrix3[2][2];

//clrscr();
cout<<"\t**MATRIKS PENJUMLAHAN**\n\n";
for(a=0;a<=1;a++) 
{
for(b=0;b<=1;b++)
 { 
cout<<"Masukkan nilai ke - "<<a<<" "<<b<<" ";
 cin>>matrix1[a][b]; 
 } 
}
cout<<"\nmatrix1\n";
for(a=0;a<=1;a++)
{ 
for(b=0;b<=1;b++)
{
cout<<setiosflags(ios::left)<<setw(3)<<matrix1[a][b];
 }
 cout<<"\n";
} 
cout<<"\n";
 for(a=0;a<=1;a++)
{ 
for(b=0;b<=1;b++)
{ 
cout<<"Masukkan nilai ke - "<<a<<" "<<b<<" ";
cin>>matrix2[a][b];
} 
}
cout<<"\nmatrix2\n";
for(a=0;a<=1;a++)
{ 
for(b=0;b<=1;b++)
{ 
cout<<setiosflags(ios::left)<<setw(3)<<matrix2[a][b];
}
 cout<<"\n"; }
 for(a=0;a<=1;a++)
{ 
for(b=0;b<=1;b++)

{
matrix3[a][b]=matrix1[a][b]+matrix2[a][b];
} 
} 
cout<<"\nmatrix3 (penjumlahan)\n";
 for(a=0;a<=1;a++)
 { for(b=0;b<=1;b++)
 { 
 cout<<setiosflags(ios::left)<<setw(3)<<matrix3[a][b];
 } 
 cout<<"\n"; 
 }
return 0;
 }

