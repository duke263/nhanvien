#include <bits/stdc++.h>
#include "nhanvien.h"
#include "nhanvienbienche.h"
#include "nhanvienhopdong.h"
#include "nhanvienhoahong.h"
#include "nhanvienhoahongdacbiet.h"
using namespace std;

void Menu ()
{
	cout<<".=================================."<<endl;
	cout<<"| 1. Them moi nhan vien           |"<<endl;
	cout<<"| 2. Xem danh sach nhan vien da co|"<<endl;
	cout<<"| 0. Thoat                        |"<<endl;
	cout<<".=================================."<<endl;
	cout<<"Chon chuc nang: ";
}

void staffMenu ()
{
	cout<<".=================================."<<endl;
	cout<<"| 1. Nhan vien bien che           |"<<endl;
	cout<<"| 2. Nhan vien hop dong           |"<<endl;
	cout<<"| 3. Nhan vien hoa hong           |"<<endl;
	cout<<"| 4. Nhan vien hoa hong dac biet  |"<<endl;
	cout<<"| 0. Thoat                        |"<<endl;
	cout<<".=================================."<<endl;
	cout<<"Chon chuc nang: ";
}

int main()
{
	NhanVien* listNhanVien[100];
	int list = 0;
	int option=2312;
	int staffOption;
	while(option!=0)
	{
		Menu();
		cin>>option;
		if (option==1)
		{
			staffMenu();
			cin>>staffOption;
			if (staffOption==1)
			{
				NhanVienBienChe *nv = new NhanVienBienChe;
				cin>>*nv;
				listNhanVien[list++] = nv;
			}
			else if (staffOption==2)
			{
				NhanVienHopDong *nv = new NhanVienHopDong;
				cin>>*nv;
				listNhanVien[list++] = nv;
			}
			else if (staffOption==3)
			{
				NhanVienHoaHong *nv = new NhanVienHoaHong;
				cin>>*nv;
				listNhanVien[list++] = nv;
			}
			else if (staffOption==4)
			{
				NhanVienHoaHongDacBiet *nv = new NhanVienHoaHongDacBiet;
				cin>>*nv;
				listNhanVien[list++] = nv;
			}
		}
		else if (option==2)
		{
			for (int i = 0; i < list; i++)
			{
				listNhanVien[i]->Print();
				cout<<endl;
			}
		}
		for (int i = 0; i < list; i++)
		{
			for (int j = i; j < list; j++)
			{
				if (listNhanVien[i]->totalSalary()<listNhanVien[j]->totalSalary())
				{
					NhanVien *temp;
					temp = listNhanVien[i];
					listNhanVien[i] = listNhanVien[j];
					listNhanVien[j] = temp;
				}
			}
		}
	}
	
	freopen ("myfile.txt","w",stdout);
	
	for (int i = 0; i < list; i++)
	{
		
		listNhanVien[i]->Print();
	}
	return 0;
}
