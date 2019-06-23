#ifndef NHANVIEN_H
#define NHANVIEN_H
using namespace std;
class NhanVien
{
protected:
	string code;
	string name;
	int taxID;
public:
	NhanVien()
	{
		code = "";
		name = "";
		taxID = 0;
	}
	
	
	// setter
	void setCode(string code)
	{
		this->code = code;
	}
	
	void setName(string name)
	{
		this->name = name;
	}
	
	void setTaxID(int taxID)
	{
		this->taxID = taxID;
	}
	
	// getter
	string getCode()
	{
		return code;
	}
	
	string getName()
	{
		return name;
	}
	
	int getTaxID()
	{
		return taxID;
	}
	
	virtual long long int totalSalary()=0;
	virtual void Print()=0;
	virtual void PrintToFile()=0;
};

#endif
