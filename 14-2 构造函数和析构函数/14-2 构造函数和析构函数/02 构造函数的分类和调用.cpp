//#include<iostream>
//using namespace std;
//
////构造函数，进行初始化操作
//class person
//{
//public:
//	//构造函数
//	person()
//	{
//		cout << "person无参构造函数的调用" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "person有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	person(const person &p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		cout << "person拷贝构造函数的调用" << endl;
//		age = p.age;
//	}
//
//	//析构函数
//	~person()
//	{
//		cout << "person析构函数的调用" << endl;
//
//	}
//
//	int age;
//};
//
////调用
//void test01()
//{
//	//括号法
//	person p1;//默认构造函数的调用
//	person p2(10);//有参函数的调用
//	person p3(p2);//拷贝构造函数的调用
//
//	//注意
//	//调用默认构造函数时，不要加（）
//	//因为下边这行代码，编译器会认为是一个函数的声明,不会认为在创建对象
//	//person p1();
//
//	//cout << "p2的年龄：" << p2.age << endl;
//	//cout << "p3的年龄：" << p3.age << endl;
//
//	//显示法
//	person p4;
//	person p5 = person(10);
//	person p6 = person(p5);
//
//	//person(10);//匿名对象 特点：当前行执行结束以后，系统会立即回收掉匿名对象
//	//不要用拷贝构造函数初始化匿名对象,编译器会认为person（p3）=== person p3；对象声明
//	//person(p3);
//
//	//隐式转换法
//	person p7 = 10;//相当于写了 person p4=person(10);有参构造
//	person p8 = p7;//拷贝构造
//
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}