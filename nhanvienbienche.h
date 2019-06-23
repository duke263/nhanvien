#ifndef BIENCHE_H
#define BIENCHE_H
#include "nhanvien.h"

class NhanVienBienChe : public NhanVien
{
protected:
	long long int hardSalary;
public:
	//setter
	void setHardSalary(long long int hardSalary)
	{
		this->hardSalary = hardSalary;
	}
	//getter
	long long int getHardSalary()
	{
		return hardSalary;
	}
	//function
	long long int totalSalary()
	{
		return hardSalary;
	}
	
	friend istream& operator >> (istream& in, NhanVienBienChe &a)
	{
		in>>a.code;
		in.ignore();
		getline(in,a.name);
		in>>a.taxID;
		in>>a.hardSalary;
		return in;
	}
	
	void Print ()
	{
		cout<<"Ma nhan vien : "<<code<<endl;
		cout<<"Ten nhan vien: "<<name<<endl;
		cout<<"Ma so thue   : "<<taxID<<endl;
		cout<<"Luong        : "<<hardSalary<<endl;
	}
	
	void PrintToFile ()
	{
		freopen ("myfile.txt","w",stdout);
		cout<<"Ma nhan vien : "<<code<<endl;
		cout<<"Ten nhan vien: "<<name<<endl;
		cout<<"Ma so thue   : "<<taxID<<endl;
		cout<<"Luong        : "<<hardSalary<<endl;
	}
};

#endif
