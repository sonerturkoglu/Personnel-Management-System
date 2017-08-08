#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "employee.h"
using namespace std;
int i=0;
int employee::EmpNo=0;
employee::employee(int e_grade,float e_accumPay):grade(e_grade),accumPay(e_accumPay)
{
	EmpNo++;
	individualEmpNo=EmpNo;
}
ostream & operator<<(ostream &os,const employee &ref)
{
	os<<"Ա�����Ϊ��"<<ref.individualEmpNo<<endl<<"Ա���ȼ�Ϊ��"<<ref.grade<<endl<<"Ա����нΪ��"<<ref.accumPay<<endl;
	return os;
}
istream & operator>>(istream &is,employee &ref)
{
	cout<<"������Ա���ȼ���";
	is>>ref.grade;
	cout<<"������Ա����н��";
	is>>ref.accumPay;
	return is;
}
manager::manager(int m_grade):employee(m_grade,12000.0f){}
void manager::Print()
{
	cout<<"������Ϊ��"<<individualEmpNo<<endl<<"����ȼ�Ϊ��"<<grade<<endl<<"������нΪ��"<<accumPay<<endl;
}
float manager::Pay()
{
	return accumPay;
}
void manager::promote()
{
	grade++;
	accumPay+=8000.0f;
}
technician::technician(int t_grade , int t_hour,int t_tecparameter )
{
	grade=t_grade;
	hour=t_hour;
	tecparameter=t_tecparameter;
	accumPay=(float)hour*tecparameter;
}
void technician::Print()
{
    cout<<"����Ա���Ϊ��"<<individualEmpNo<<endl<<"����Ա�ȼ�Ϊ��"<<grade<<endl<<"����Ա��нΪ��"<<accumPay<<endl;
}
float technician::Pay()
{
	return (float)hour*tecparameter;
}
void technician::promote()
{
	grade++;
    tecparameter+=100;
	accumPay=(float)hour*tecparameter;
}
salesman::salesman(int s_grade , float s_sale ,float s_saleparameter)
{
	grade=s_grade;
	sale=s_sale;
	saleparameter=s_saleparameter;
	accumPay=saleparameter*sale;
}
void salesman::Print()
{
    cout<<"����Ա���Ϊ��"<<individualEmpNo<<endl<<"����Ա�ȼ�Ϊ��"<<grade<<endl<<"����Ա��нΪ��"<<accumPay<<endl;
}
float salesman::Pay()
{
	return saleparameter*sale;
}
void salesman::promote()
{
	grade++;
    saleparameter+=0.04f;
	accumPay=saleparameter*sale;
}
Salemanager::Salemanager(int s_grade, float s_sale,float s_basicpay,float s_salemanagerparameter)
{
	grade=s_grade;
	sale=s_sale;
	basicpay=s_basicpay;
	salemanagerparameter=s_salemanagerparameter;
	accumPay=basicpay+(float)salemanagerparameter*sale;
}
void Salemanager::Print()
{
    cout<<"���۾�����Ϊ��"<<individualEmpNo<<endl<<"���۾���ȼ�Ϊ��"<<grade<<endl<<"���۾�����нΪ��"<<accumPay<<endl;
}
float Salemanager::Pay()
{
	return basicpay+(float)salemanagerparameter*sale;
}
void Salemanager::promote()
{
	grade++;
	basicpay+=2000.0f;
	salemanagerparameter+=0.04f;
	accumPay=basicpay+(float)salemanagerparameter*sale;
}
int main()
{
	//manager m1(10);
	//technician t1(5,20);
	//salesman s1(4,500000.0f);
	//Salemanager S1(8,500000.0f);
	//m1.Print();
	//t1.Print();
	//s1.Print();
	//S1.Print();
	//employee *pt1=&m1;
	//employee *pt2=&t1;
	//employee *pt3=&s1;
	//employee *pt4=&S1;
	//cout<<pt1->Pay()<<endl;
	//cout<<pt2->Pay()<<endl;
	//cout<<pt3->Pay()<<endl;
	//cout<<pt4->Pay()<<endl;
	//pt1->promote();
	//pt2->promote();
	//pt3->promote();
	//pt4->promote();
	//m1.Print();
	//t1.Print();
	//s1.Print();
	//S1.Print();
	//cout<<pt1->Pay()<<endl;
	//cout<<pt2->Pay()<<endl;
	//cout<<pt3->Pay()<<endl;
	//cout<<pt4->Pay()<<endl;
	void preface();
	preface();
	void functions();
	try
	{
		functions();
	}
	catch(int)
	{
		cout<<"�ļ��򿪴���"<<endl;
		return 0;
	}
	catch(double)
	{
		cout<<"�����ְ�񲻷���"<<endl;
		return 0;
	}
	catch(char)
	{
		cout<<"�����ˣ�"<<endl;
		return 0;
	}
	system("pause");
	return 0;
}
void preface()
{
	cout<<setw(10)<<" "<<setiosflags(ios::left)<<setw(4)<<"****"<<setw(12)<<"**"<<setw(4)<<"****"<<setw(12)<<"**"<<endl;
    cout<<setw(8)<<" "<<setiosflags(ios::left)<<setw(8)<<"**"<<setw(8)<<"**"<<setw(8)<<"**"<<setw(10)<<"**"<<endl;
	cout<<setw(6)<<" "<<setiosflags(ios::left)<<setw(12)<<"**"<<setw(4)<<"**"<<setw(12)<<"**"<<setw(8)<<"**"<<endl;
	cout<<setw(4)<<" "<<setiosflags(ios::left)<<setw(16)<<"**"<<setw(16)<<"**"<<setw(6)<<"**"<<endl;
	cout<<setw(2)<<" "<<setiosflags(ios::left)<<setw(36)<<"**"<<setw(4)<<"**"<<endl;
	for(i=1;i<=5;i++)
		cout<<setiosflags(ios::left)<<setw(40)<<"**"<<setw(2)<<"**"<<endl;
    cout<<setw(2)<<" "<<setiosflags(ios::left)<<setw(36)<<"**"<<setw(4)<<"**"<<endl;
	cout<<setw(4)<<" "<<setiosflags(ios::left)<<setw(32)<<"**"<<setw(6)<<"**"<<endl;
	cout<<setw(6)<<" "<<setiosflags(ios::left)<<setw(28)<<"**"<<setw(8)<<"**"<<endl;
	cout<<setw(8)<<" "<<setiosflags(ios::left)<<setw(24)<<"**"<<setw(10)<<"**"<<endl;
	cout<<setw(10)<<" "<<setiosflags(ios::left)<<setw(20)<<"**"<<setw(12)<<"**"<<endl;
	cout<<setw(12)<<" "<<setiosflags(ios::left)<<setw(16)<<"**"<<setw(14)<<"**"<<endl;
	cout<<setw(14)<<" "<<setiosflags(ios::left)<<setw(12)<<"**"<<setw(16)<<"**"<<endl;
	cout<<setw(16)<<" "<<setiosflags(ios::left)<<setw(8)<<"**"<<setw(18)<<"**"<<endl;
	cout<<setw(18)<<" "<<setiosflags(ios::left)<<setw(4)<<"**"<<setw(20)<<"**"<<endl;
	cout<<setw(20)<<" "<<setiosflags(ios::left)<<setw(22)<<"**"<<endl;
    cout<<setw(11)<<" "<<"Ϭ����˾���¹���ϵͳ"<<setw(11)<<" "<<endl;
	cout<<setw(16)<<" "<<"1 ����¼��"<<setw(16)<<" "<<endl;
	cout<<setw(16)<<" "<<"2 �����޸�"<<setw(16)<<" "<<endl;
	cout<<setw(16)<<" "<<"3 ���ݲ�ѯ"<<setw(16)<<" "<<endl;
	cout<<setw(16)<<" "<<"4 �˳�"<<setw(16)<<" "<<endl;
}
void functions()
{
	int order=0,openerror=0;double typeerror=0.0;char defaulterror=0;
	for(int count=0;;count++)
	{
	cout<<"������ָ�";
	cin>>order;
	if(order==1)
	{
		int type;char buffer[100];
		cout<<"������Ա����Ϣ��"<<endl;
		cout<<"��ѡ��Ա�����ͣ�1���� 2����Ա 3����Ա 4���۾���"<<endl;
		cin>>type;
		switch(type)
		{
		case 1:
			{
				int tempgrade;
				cout<<"�����뾭��ȼ���";
				cin>>tempgrade;
			    manager temp(tempgrade);
				fstream outfile("1.txt",ios::app);
				if(!outfile)
					throw openerror;
				for(i=1;!outfile.eof();i++)
					outfile.getline(buffer,100);
				temp.grade=i+1;
                outfile<<"manager "<<temp.individualEmpNo<<" "<<temp.grade<<" "<<temp.accumPay<<"\0"<<endl;
				outfile.close();
				break;
			}
		case 2:
			{
				int tempgrade,temphour,temptecparameter;
				cout<<"�����뼼��Ա�ȼ���";
				cin>>tempgrade;
				cout<<"�����뼼��Ա��ʱ��";
				cin>>temphour;
				cout<<"�����뼼��ԱÿСʱ���ʣ�";
				cin>>temptecparameter;
				technician temp(tempgrade,temphour,temptecparameter);
				fstream outfile("1.txt",ios::app);
				if(!outfile)
				    throw openerror;
				for(i=1;!outfile.eof();i++)
					outfile.getline(buffer,100);
				temp.grade=i+1;
				outfile<<"technician "<<temp.individualEmpNo<<" "<<temp.grade<<" "<<temp.accumPay<<" "<<temp.hour<<" "<<temp.tecparameter<<"\0"<<endl;
                outfile.close();
				break;
			}
		case 3:
			{
				int tempgrade;float tempsale,tempsaleparameter;
				cout<<"����������Ա�ȼ���";
				cin>>tempgrade;
				cout<<"����������Ա���۶";
				cin>>tempsale;
				cout<<"����������Ա��ɱ�����";
				cin>>tempsaleparameter;
				salesman temp(tempgrade,tempsale,tempsaleparameter);
				fstream outfile("1.txt",ios::app);
				if(!outfile)
					throw openerror;
				for(i=1;!outfile.eof();i++)
					outfile.getline(buffer,100);
				temp.grade=i+1;
				outfile<<"salesman "<<temp.individualEmpNo<<" "<<temp.grade<<" "<<temp.accumPay<<" "<<temp.sale<<" "<<temp.saleparameter<<"\0"<<endl;
				outfile.close();
				break;
			}
		case 4:
			{
				int tempgrade;float tempsale,tempbasicpay,tempsalemanagerparameter;
                cout<<"���������۾���ȼ���";
				cin>>tempgrade;
				cout<<"���������۾������۶";
				cin>>tempsale;
				cout<<"���������۾����ʼ���ʣ�";
				cin>>tempbasicpay;
				cout<<"���������۾�����ɱ�����";
				cin>>tempsalemanagerparameter;
				Salemanager temp(tempgrade,tempsale,tempbasicpay,tempsalemanagerparameter);
				fstream outfile("1.txt",ios::app);
				if(!outfile)
				    throw openerror;
				for(i=1;!outfile.eof();i++)
					outfile.getline(buffer,100);
				temp.grade=i+1;
				outfile<<"salemanager "<<temp.individualEmpNo<<" "<<temp.grade<<" "<<temp.accumPay<<" "<<temp.sale<<" "<<temp.basicpay<<" "<<temp.salemanagerparameter<<"\0"<<endl;
				outfile.close();
				break;
			}
		default:
			{
				throw defaulterror;
				break;
			}
		}
	}
	else if(order==2)
	{
		int number;
		cout<<"������Ա����ţ�";
		cin>>number;
		fstream file("1.txt",ios::in|ios::out);
		if(!file)
			throw openerror;
		int type,_order;
		cout<<"������Ա�����ͣ�1 ���� 2 ����Ա 3 ����Ա 4 ���۾���"<<endl;
		cin>>type;
		switch(type)
		{
		case 1:
			{
				int tempnumber,tempgrade;float temppay;char temp[20],buffer[100];
                for(i=0;;i++)
				{
					file>>temp>>tempnumber;
					file.getline(buffer,100);
	                if(tempnumber-number==0)
				        break;
				}
				file.seekg(ios::beg);
				for(int j=0;j<=i-1;j++)
					file.getline(buffer,100);
				file>>temp>>tempnumber>>tempgrade>>temppay;
		        if(strcmp(temp,"manager")==0)
				{
					cout<<"������Ҫ�޸ĵ���Ϣ��1 ��� 2 �ȼ� 3 ����"<<endl;
					cin>>_order;
					cout<<"������Ҫ�޸ĵ�ֵ��";
					switch(_order)
					{
					case 1:
						{
							int _tempnumber;
							cin>>_tempnumber;
							tempnumber=_tempnumber;
							break;
						}
					case 2:
						{
							int _tempgrade;
							cin>>_tempgrade;
							tempgrade=_tempgrade;
							break;
						}
					case 3:
						{
							float _temppay;
							cin>>_temppay;
							temppay=_temppay;
							break;
						}
					default:
						{
							throw defaulterror;
							break;
						}
					}
					file.seekg(ios::beg);
			        for(int j=0;j<=i-1;j++)
						file.getline(buffer,100);
			        file<<"manager "<<tempnumber<<" "<<tempgrade<<" "<<temppay<<endl;
				}
				else throw typeerror;
				break;
			}
		case 2:
			{
				int tempnumber,tempgrade;float temppay,tempsale,tempsalesparameter;char temp[20],buffer[100];
                for(i=0;;i++)
				{
					file>>temp>>tempnumber;
					file.getline(buffer,100);
	                if(tempnumber-number==0)
				        break;
				}
				file.seekg(ios::beg);
				for(int j=0;j<=i-1;j++)
					file.getline(buffer,100);
				file>>temp>>tempnumber>>tempgrade>>temppay>>tempsale>>tempsalesparameter;
		        if(strcmp(temp,"salesman")==0)
				{
					cout<<"������Ҫ�޸ĵ���Ϣ��1 ��� 2 �ȼ� 3 ���� 4 ���۶� 5 ��ɱ���"<<endl;
					cin>>_order;
					cout<<"������Ҫ�޸ĵ�ֵ��";
					switch(_order)
					{
					case 1:
						{
							int _tempnumber;
							cin>>_tempnumber;
							tempnumber=_tempnumber;
							break;
						}
					case 2:
						{
							int _tempgrade;
							cin>>_tempgrade;
							tempgrade=_tempgrade;
							break;
						}
					case 3:
						{
							float _temppay;
							cin>>_temppay;
							temppay=_temppay;
							break;
						}
                    case 4:
						{
							float _tempsale;
							cin>>_tempsale;
							tempsale=_tempsale;
							temppay=tempsale*tempsalesparameter;
							break;
						}
				    case 5:
						{
							float _tempsalesparameter;
							cin>>_tempsalesparameter;
							tempsalesparameter=_tempsalesparameter;
							temppay=tempsale*tempsalesparameter;
							break;
						}
					default:
						{
							throw defaulterror;
							break;
						}
					}
					file.seekg(ios::beg);
			        for(int j=0;j<=i-1;j++)
						file.getline(buffer,100);
			        file<<"salesman "<<tempnumber<<" "<<tempgrade<<" "<<temppay<<" "<<tempsale<<" "<<tempsalesparameter<<endl;
				}
				else throw typeerror;
				break;
			}
		case 3:
			{
				int tempnumber,tempgrade,temphour,temptecparameter;float temppay;char temp[20],buffer[100];
                for(i=0;;i++)
				{
					file>>temp>>tempnumber;
					file.getline(buffer,100);
	                if(tempnumber-number==0)
				        break;
				}
				file.seekg(ios::beg);
				for(int j=0;j<=i-1;j++)
					file.getline(buffer,100);
				file>>temp>>tempnumber>>tempgrade>>temppay>>temphour>>temptecparameter;
		        if(strcmp(temp,"technician")==0)
				{
					cout<<"������Ҫ�޸ĵ���Ϣ��1 ��� 2 �ȼ� 3 ���� 4 ��ʱ 5 ÿСʱ����"<<endl;
					cin>>_order;
					cout<<"������Ҫ�޸ĵ�ֵ��";
					switch(_order)
					{
					case 1:
						{
							int _tempnumber;
							cin>>_tempnumber;
							tempnumber=_tempnumber;
							break;
						}
					case 2:
						{
							int _tempgrade;
							cin>>_tempgrade;
							tempgrade=_tempgrade;
							break;
						}
					case 3:
						{
							float _temppay;
							cin>>_temppay;
							temppay=_temppay;
							break;
						}
                    case 4:
						{
							int _temphour;
							cin>>_temphour;
							temphour=_temphour;
							temppay=(float)temphour*temptecparameter;
							break;
						}						
				    case 5:
						{
							int _temptecparameter;
							cin>>_temptecparameter;
							temptecparameter=_temptecparameter;
                            temppay=(float)temphour*temptecparameter;
							break;
						}
					default:
						{
							throw defaulterror;
							break;
						}
					}
					file.seekg(ios::beg);
			        for(int j=0;j<=i-1;j++)
						file.getline(buffer,100);
			        file<<"technician "<<tempnumber<<" "<<tempgrade<<" "<<temppay<<" "<<temphour<<" "<<temptecparameter<<endl;
				}
				else throw typeerror;
				break;
			}
		case 4:
			{
				int tempnumber,tempgrade;float temppay,tempsale,tempbasicpay,tempsalemanagerparameter;char temp[20],buffer[100];
				for(i=0;;i++)
				{
					file>>temp>>tempnumber;
					file.getline(buffer,100);
	                if(tempnumber-number==0)
				        break;
				}
                file.seekg(ios::beg);
			    for(int j=0;j<=i-1;j++)
				    file.getline(buffer,100);
				file>>temp>>tempnumber>>tempgrade>>temppay>>tempsale>>tempbasicpay>>tempsalemanagerparameter;
		        if(strcmp(temp,"salemanager")==0)
				{
					cout<<"������Ҫ�޸ĵ���Ϣ��1 ��� 2 �ȼ� 3 ���� 4 ���۶� 5 ��ʼ���� 6 ��ɱ���"<<endl;
					cin>>_order;
					cout<<"������Ҫ�޸ĵ�ֵ��";
					switch(_order)
					{
					case 1:
						{
							int _tempnumber;
							cin>>_tempnumber;
							tempnumber=_tempnumber;
							break;
						}
					case 2:
						{
							int _tempgrade;
							cin>>_tempgrade;
							tempgrade=_tempgrade;
							break;
						}
					case 3:
						{
							float _temppay;
							cin>>_temppay;
							temppay=_temppay;
							break;
						}
                    case 4:
						{
							float _tempsale;
							cin>>_tempsale;
							tempsale=_tempsale;
							temppay=tempsale*tempsalemanagerparameter+tempbasicpay;
							break;
						}
				    case 5:
						{
							float _tempbasicpay;
							cin>>_tempbasicpay;
							tempbasicpay=_tempbasicpay;
							temppay=tempsale*tempsalemanagerparameter+tempbasicpay;
							break;
						}
					case 6:
						{
							float _tempsalemanagerparameter;
							cin>>_tempsalemanagerparameter;
							tempsalemanagerparameter=_tempsalemanagerparameter;
							temppay=tempsale*tempsalemanagerparameter+tempbasicpay;
							break;
						}
					default:
						{
							throw defaulterror;
							break;
						}
					}
					file.seekg(ios::beg);
			        for(int j=0;j<=i-1;j++)
						file.getline(buffer,100);
			        file<<"salemanager "<<tempnumber<<" "<<tempgrade<<" "<<temppay<<" "<<tempsale<<" "<<tempbasicpay<<" "<<tempsalemanagerparameter<<endl;
				}
				else throw typeerror;
				break;
			}
		default:
			{
				throw defaulterror;
				break;
			}
		}
		file.close();
	}
	else if(order==3)
	{
        int tempnumber,_tempnumber;char temp[20],buffer[100];
		cout<<"������Ա����ţ�";
		cin>>tempnumber;
		ifstream infile("1.txt",ios::in);
		if(!infile)
			throw openerror;
		for(i=0;;i++)
		{
			infile>>temp>>_tempnumber;
			infile.getline(buffer,100);
			if(tempnumber==_tempnumber)
				break;
		}
		if(strcmp(temp,"manager")==0)
		{
			infile.seekg(ios::beg);
			for(int j=0;j<=i-1;j++)
				infile.getline(buffer,100);
            int ttempnumber,ttempgrade;float ttemppay;char ttemp[20];
            infile>>ttemp>>ttempnumber>>ttempgrade>>ttemppay;
			cout<<"ְ��"<<ttemp<<" ��ţ�"<<ttempnumber<<" �ȼ���"<<ttempgrade<<" ���ʣ�"<<ttemppay<<endl;
		}
		else if(strcmp(temp,"technician")==0)
		{
			infile.seekg(ios::beg);
			for(int j=0;j<=i-1;j++)
				infile.getline(buffer,100);
            int ttempnumber,ttempgrade,ttemphour,ttemptecparameter;float ttemppay;char ttemp[20];
			infile>>ttemp>>ttempnumber>>ttempgrade>>ttemppay>>ttemphour>>ttemptecparameter;
			cout<<"ְ��"<<ttemp<<" ��ţ�"<<ttempnumber<<" �ȼ���"<<ttempgrade<<" ���ʣ�"<<ttemppay<<" ��ʱ��"<<ttemphour<<" ÿСʱ���ʣ�"<<ttemptecparameter<<endl;
		}
		else if(strcmp(temp,"salesman")==0)
		{
			infile.seekg(ios::beg);
			for(int j=0;j<=i-1;j++)
				infile.getline(buffer,100);
            int ttempnumber,ttempgrade;float ttemppay,ttempsale,ttempsalesparameter;char ttemp[20];
            infile>>ttemp>>ttempnumber>>ttempgrade>>ttemppay>>ttempsale>>ttempsalesparameter;
			cout<<"ְ��"<<ttemp<<" ��ţ�"<<ttempnumber<<" �ȼ���"<<ttempgrade<<" ���ʣ�"<<ttemppay<<" ���۶"<<ttempsale<<" ��ɱ�����"<<ttempsalesparameter<<endl;
		}
		else if(strcmp(temp,"salemanager")==0)
		{
			infile.seekg(ios::beg);
			for(int j=0;j<=i-1;j++)
				infile.getline(buffer,100);
			int ttempnumber,ttempgrade;float ttemppay,ttempsale,ttempbasicpay,ttempsalemanagerparameter;char ttemp[20];
			infile>>ttemp>>ttempnumber>>ttempgrade>>ttemppay>>ttempsale>>ttempbasicpay>>ttempsalemanagerparameter;
			cout<<"ְ��"<<ttemp<<" ��ţ�"<<ttempnumber<<" �ȼ���"<<ttempgrade<<" ���ʣ�"<<ttemppay<<" ���۶"<<ttempsale<<" ��ʼ���ʣ�"<<ttempbasicpay<<" ��ɱ�����"<<ttempsalemanagerparameter<<endl;
		}
		infile.close();
	}
	else if(order==4)
	{
		cout<<"ллʹ�ã��ټ���"<<endl;
		break;
	}
	else
	{
		throw defaulterror;
	}
	}
}
