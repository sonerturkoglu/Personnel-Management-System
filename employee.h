#include <iostream>
using namespace std;
class employee
{
protected:
	int individualEmpNo;
	int grade;
	float accumPay;
	static int EmpNo;
public:
	employee(int e_grade=1,float e_accumPay=2000.0f);
	virtual ~employee(){}
	virtual float Pay()=0;
	virtual void promote()=0;
	friend ostream & operator<<(ostream &os,const employee &ref);
	friend istream & operator>>(istream &is,employee &ref);
	friend void functions();
};
class manager:virtual public employee
{
public:
	manager(int m_grade=1);
	virtual ~manager(){};
	void Print();
	virtual float Pay();
	virtual void promote();
	friend void functions();
};
class technician:public employee
{
protected:
	int hour;
	int tecparameter;
public:
	technician(int t_grade=1,int t_hour=0,int t_tecparameter=260);
	virtual ~technician(){};
	void Print();
	virtual float Pay();
	virtual void promote();
	friend void functions();
};
class salesman:virtual public employee
{
protected:
	float sale;
	float saleparameter;
public:
	salesman(int s_grade=1,float s_sale=0.0f,float s_saleparameter=0.05f);
	virtual ~salesman(){};
	void Print();
	virtual float Pay();
	virtual void promote();
	friend void functions();
};
class Salemanager:public manager,public salesman
{
protected:
	float basicpay;
	float salemanagerparameter;
public:
	Salemanager(int s_grade=1,float s_sale=0.0f,float s_basicpay=8000.0f,float s_salemanagerparameter=0.04f);
	virtual ~Salemanager(){}
	void Print();
	float Pay();
	void promote();
	friend void functions();
};