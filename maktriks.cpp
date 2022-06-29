#include<iostream>
#include <conio.h> 
#include <iomanip>

using namespace std;
main()
{
	

	cout<<"\n___________________________KELOMPOK KAMI TERDIRI DARI : _______________________"<<endl;
	cout<<"\n============NAMA=======================NIM=======================KELAS========="<<endl;
   	cout<<"NITA SEPTIANI                        12173222                   12.1D.31"<<endl;
	cout<<"DWI BAGUS RIO KARDO SURBAKTI         12170382                   12.1D.31"<<endl;
	cout<<"DANI RAMDANI                         12170497                   12.1D.31"<<endl;
	cout<<"AGUNG LASKONO PUTRO                  12170201                   12.1D.31"<<endl;
   	cout<<"RUSLAN EFENDI                        12170007                   12.1D.31"<<endl;
   	cout<<"ILMAN ROSIDA IRAWAN                  12173342                   12.1D.31"<<endl;
	
cout<<"\n=================================================================================="<<endl;

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

