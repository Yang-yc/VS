#include<iostream>
using namespace std;
#include<string>
#define Max 1000

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա� 1�� 2Ů
	int m_Sex;
	//����
	int m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{	
	//ͨ��¼�б������ϵ������
	struct Person personArray[Max];
	//ͨ��¼�е�ǰ��¼����Ա����
	int m_Size;
};

//�����ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨ��¼�Ƿ�������������˾Ͳ������
	if (abs->m_Size == Max)
	{
		cout << "ͨѶ���������޷����" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;

		while (true)
		{
			//����������1����2�����˳�ѭ������Ϊ���������ȷ��ֵ
			//�������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		//�绰

		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ������
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause");//�����������
		system("cls");//��������
	}
}

//��ʾ���е���ϵ��
void showPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�������0����ʾ��¼Ϊ�ա�
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��":"Ů")<< "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "��ͥסַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");//�����������
	system("cls");//��������

}

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4���鿴��ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;

}

//�����ϵ���Ƿ���ڣ�������ڷ�����ϵ�����������еľ���λ�ã������ڷ���-1
//����1 ͨѶ¼ ����2 �Ա�����
int isExist(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ��û������������
		if (abs->personArray[i].m_Name == name)
		{	
			return i;//�ҵ��ˣ�����������������еı��
		}

	}
	return -1;//�������������û���ҵ�������-1
} 

//ɾ��ָ������ϵ��
void deletePerson(Addressbooks * abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	
	//ret==-1 δ�鵽
	//ret��=-1 �鵽��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//�鵽���ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е�����
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");//�����������
	system("cls");//��������
}

//����ָ������ϵ����Ϣ
void findPerson(Addressbooks * abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);

	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ͥסַ��" << abs->personArray[ret].m_Addr << endl;
	}

	system("pause");//�����������
	system("cls");//��������
}

//�޸�ָ������ϵ��
void modifyPerson(Addressbooks * abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ�ָ����ϵ��
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		cin >> sex;
		while (true)
		{
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�绰
		cout << "������绰" << endl;
		string phone;
		abs->personArray[ret].m_Phone = phone;
		//��ͥסַ
		cout << "�������ͥסַ��" << endl;
		string address;
		abs->personArray[ret].m_Addr = address;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");//�����������
	system("cls");//��������
}

//�����ϵ��
void cleamPerson(Addressbooks * abs)
{
	abs->m_Size = 0;//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
	cout << "ͨѶ¼�Ѿ����" << endl;

	system("pause");//�����������
	system("cls");//��������
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;
	while (true)
	{
		//�˵��ĵ���
		showMenu();

		int select = 0;//�����û�ѡ������ı���

		cin >> select;

		switch (select)
		{
		case 1:  //�����ϵ��
			addPerson(&abs);  // ���õ�ַ���ݿ����޸�ʵ��
			break;
		case 2:  //��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:  //ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:  //�鿴��ϵ��
			findPerson(&abs);
			break;
		case 5:  //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:  //�����ϵ��
			cleamPerson(&abs);

			break;
		case 0:  //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	

	system("pause");
	
	return 0;
}