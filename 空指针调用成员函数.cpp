//#include<iostream>
//
//
//using namespace std;
//
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class " << endl;
//	}
//	void showAge()
//	{
//		//报错原因为传入的指针为空
//		if (this==NULL)
//		{
//			return;
//		}
//		cout << "age=" << m_Age << endl;
//	}
//	int m_Age;
//};
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();
//	p->showAge();
//
//
//
//}
//int main()
//{
//
//	test01();
//	return 0;
//}