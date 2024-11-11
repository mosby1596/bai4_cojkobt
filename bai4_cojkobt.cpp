#include <iostream> 
using namespace std;
int main() 
{ cout << "CHUONG TRINH TINH CAC PHEP TINH CO BAN\n"; 
double so1, so2, tong, hieu, tich, thuong; cout << "Nhap so 1:"; 
cin >> so1; cout << "Nhap so 2:"; cin >> so2;
tong = so1 + so2;
hieu = so1 - so2;
tich = so1 * so2;
thuong = so1 / so2;
cout << "tong hai so:" << so1 << "+" << so2 << "=" << tong << endl;
cout << "hieu hai so:" << so1 << "-" << so2 << "=" << hieu << endl;
cout << "tich hai so:" << so1 << "*" << so2 << "=" << tich << endl;
cout << "thuong hai so:" << so1 << "/" << so2 << "=" << thuong << endl;
return 0; }