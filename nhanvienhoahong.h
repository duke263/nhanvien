#ifndef HOAHONG_H
#define HOAHONG_H
#include "nhanvien.h"

class NhanVienHoaHong : public NhanVien
{
protected:
	float rateSalary;
	long long int moneyFromContract;
public:
	//setter
	void setRateSlary(float rateSalary)
	{
		this->rateSalary = rateSalary;
	}
	
	void setMoneyFromContract(long long int moneyFromContract)
	{
		this->moneyFromContract = moneyFromContract;
	}
	//getter
	float getRateSalary()
	{
		return rateSalary;
	}
	
	long long int getMoneyFromContract()
	{
		return moneyFromContract;
	}
	//function
	long long int totalSalary()
	{
		if (this->rateSalary * this->moneyFromContract > 9000000)
			return (this->rateSalary * this->moneyFromContract)*0.9;
		return this->rateSalary * this->moneyFromContract;
	}
	
	friend istream& operator >> (istream& in, NhanVienHoaHong &a)
	{
		in>>a.code;
		in.ignore();
		getline(in,a.name);
		in>>a.taxID;
		in>>a.rateSalary;
		in>>a.moneyFromContract;
		return in;
	}
	
	void Print ()
	{
		cout<<"Ma nhan vien      : "<<code<<endl;
		cout<<"Ten nhan vien     : "<<name<<endl;
		cout<<"Ma so thue        : "<<taxID<<endl;
		cout<<"Ti so luong       : "<<rateSalary<<endl;
		cout<<"Doanh thu hop dong: "<<moneyFromContract<<endl;
		cout<<"Luong             : "<<totalSalary()<<endl;
	}
	
	void PrintToFile ()
	{
		freopen ("myfile.txt","w",stdout);
		cout<<"Ma nhan vien      : "<<code<<endl;
		cout<<"Ten nhan vien     : "<<name<<endl;
		cout<<"Ma so thue        : "<<taxID<<endl;
		cout<<"Ti so luong       : "<<rateSalary<<endl;
		cout<<"Doanh thu hop dong: "<<moneyFromContract<<endl;
		cout<<"Luong             : "<<totalSalary()<<endl;
	}
};

#endif
