//#include<iostream>
//using namespace std;
//
////���캯�������г�ʼ������
//class person
//{
//public:
//	//���캯��
//	person()
//	{
//		cout << "person�޲ι��캯���ĵ���" << endl;
//	}
//	person(int a)
//	{
//		age = a;
//		cout << "person�вι��캯���ĵ���" << endl;
//	}
//	//�������캯��
//	person(const person &p)
//	{
//		//������������ϵ��������ԣ�������������
//		cout << "person�������캯���ĵ���" << endl;
//		age = p.age;
//	}
//
//	//��������
//	~person()
//	{
//		cout << "person���������ĵ���" << endl;
//
//	}
//
//	int age;
//};
//
////����
//void test01()
//{
//	//���ŷ�
//	person p1;//Ĭ�Ϲ��캯���ĵ���
//	person p2(10);//�вκ����ĵ���
//	person p3(p2);//�������캯���ĵ���
//
//	//ע��
//	//����Ĭ�Ϲ��캯��ʱ����Ҫ�ӣ���
//	//��Ϊ�±����д��룬����������Ϊ��һ������������,������Ϊ�ڴ�������
//	//person p1();
//
//	//cout << "p2�����䣺" << p2.age << endl;
//	//cout << "p3�����䣺" << p3.age << endl;
//
//	//��ʾ��
//	person p4;
//	person p5 = person(10);
//	person p6 = person(p5);
//
//	//person(10);//�������� �ص㣺��ǰ��ִ�н����Ժ�ϵͳ���������յ���������
//	//��Ҫ�ÿ������캯����ʼ����������,����������Ϊperson��p3��=== person p3����������
//	//person(p3);
//
//	//��ʽת����
//	person p7 = 10;//�൱��д�� person p4=person(10);�вι���
//	person p8 = p7;//��������
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