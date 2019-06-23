#ifndef HOAHONGDACBIET_H
#define HOAHONGDACBIET_H
#include "nhanvienhoahong.h"

class NhanVienHoaHongDacBiet : public NhanVienHoaHong
{
public:
	//function
	long long int totalSalary()
	{
		if (((this->rateSalary * this->moneyFromContract)*1.1)>9000000)
			return ((this->rateSalary * this->moneyFromContract)*1.1)*0.9;
		return (this->rateSalary * this->moneyFromContract)*1.1;
	}
};

#endif
