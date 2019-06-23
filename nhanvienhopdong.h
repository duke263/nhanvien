#ifndef HOPDONG_H
#define HOPDONG_H
#include "nhanvien.h"

class NhanVienHopDong : public NhanVien
{
protected:
	int time;
	long long int salaryPerHour;
public:
	//setter
	void setTime(int time)
	{
		this->time = time;
	}
	
	void setSalaryPerHour(long long int salaryPerHour)
	{
		this->salaryPerHour = salaryPerHour;
	}
	//getter
	long long int getSalaryPerHour()
	{
		return salaryPerHour;
	}
	
	int getTime()
	{
		return time;
	}
	//function
	long long int totalSalary()
	{
		if (this->time * this->salaryPerHour > 9000000)
			return (this->time * this->salaryPerHour)*0.9;
		return this->time * this->salaryPerHour;
	}
	
	friend istream& operator >> (istream& in, NhanVienHopDong &a)
	{
		in>>a.code;
		in.ignore();
		getline(in,a.name);
		in>>a.taxID;
		in>>a.time;
		in>>a.salaryPerHour;
		return in;
	}
	
	void Print ()
	{
		cout<<"Ma nhan vien : "<<code<<endl;
		cout<<"Ten nhan vien: "<<name<<endl;
		cout<<"Ma so thue   : "<<taxID<<endl;
		cout<<"So gio lam   : "<<time<<endl;
		cout<<"Luong moi gio: "<<salaryPerHour<<endl;
		cout<<"Luong        : "<<totalSalary()<<endl;
	}
	
	void PrintToFile ()
	{
		freopen ("myfile.txt","w",stdout);
		cout<<"Ma nhan vien : "<<code<<endl;
		cout<<"Ten nhan vien: "<<name<<endl;
		cout<<"Ma so thue   : "<<taxID<<endl;
		cout<<"So gio lam   : "<<time<<endl;
		cout<<"Luong moi gio: "<<salaryPerHour<<endl;
		cout<<"Luong        : "<<totalSalary()<<endl;
	}
};

#endif
