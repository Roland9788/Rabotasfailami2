#include <iostream>
#include <io.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	//�������� ����
	/*const char* path = "D:\\example\\b_data.dat";
	const int n = 10;
	int array[n], a;
	FILE* f;
	if (fopen_s(&f,path,"wb")!=NULL)
	{
		cout << "The file cannot be opened";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			array[i] = i + 1;
			fwrite(&array[i], sizeof(int), 1, f);
		}
		fclose(f);
	}

	if (fopen_s(&f, path, "rb") != NULL)
	{
		cout << "The file cannot be opened";
	}
	else
	{
		fread(&a, sizeof(int), 1, f);
		cout << a;
		fclose(f);
	}*/
	/*const char* path = "D:\\example\\b_data.dat";
	int n = 10, imax = 0, imin = 0;
	int* a;
	FILE* f;
	if (fopen_s(&f,path,"wb")!=NULL)
	{
		cout << "The file cannot be opened";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			fwrite(&i, sizeof(int), 1, f);
		}
		fclose(f);
	}

	if (fopen_s(&f, path, "rb") != NULL)
	{
		cout << "The file cannot be opened";
	}
	else
	{
		a = new int[n];
		int min = a[0], max = a[0];
		fread(&a, sizeof(int), n, f);
		for (int i = 1; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				imax = i;
			}
			if (a[i] < min)
			{
				min = a[i];
				imin = i;
			}
		}
		cout << a;
		fseek(f, sizeof(int) + max * sizeof(double), SEEK_SET);  //SEEK_SET-����� � �������� �������
		fseek(f, sizeof(int) + min * sizeof(double), SEEK_SET);
		fwrite(&max, sizeof(double), 1, f);
		fclose(f);
		delete[]a;
	}*/


	//����� ������
	/*struct _finddata_t myfileinfo;
	char str[200] = "D:\\example\\*.txt";
	long done1 = _findfirst("*.cpp", &myfileinfo);
	cout << myfileinfo.name << "\n";
	long done2 = _findfirst(str, &myfileinfo);
	cout << myfileinfo.name << "\n";
	if (done2 == -1)
	{
		cout << "������ ����� ����";
	}
	else
	{
		cout << "����� ���� ����: ";
		cout << myfileinfo.name << "\n";
	}
	while (done2 != -1)
	{
		cout << myfileinfo.name << "\n";
		done2 = _findnext(done2, &myfileinfo);
	}*/
	/*struct _finddata_t myfileinfo;
	char str[200];
	cout << "������� ���� � ����� � ��� ���������� ��������:  (D:\\example\\*.txt) \n";
	cin >> str;
	long done1 = _findfirst(str, &myfileinfo);
	while (done1 != -1)
	{
		cout << myfileinfo.name << "\n";
		done1 = _findnext(done1, &myfileinfo);
	}*/

	//����
	/*��� ��� ������ � _findata_t(���� unsigned �������)
	_A_NORMAL -������, ������ ��� �����������
	_A_RDONLY - ���� ������ ��� ������
	_A_ARCH  -�����
	time_t time_create - ������ �������� �����
	time_t time_acces -����� � ���� ���������� �������� �����
	time_t time_write-����� ���������� ��������������
	_fsize_t size - ������ �����
	char name[260] - ��� �����*/

	//��� ����
	/*int math[] = {0,1,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0};
	cout << "������: ";
	for (auto number : math)
	{
		cout << number << " ";
	}*/

	//����� �����
	/*const string names[] = {"Saha","Ivan","John","Orland","Leonardo","Nina","Anton","Molly"};
	string username;
	cout << "������� ���: \n";
	cin >> username;
	for (const auto& name : names)
	{
		if (username == name)
		{
			cout << "\n����� ��� ����\n";
			break;
		}
		else
		{
			continue;
			cout << "\n����� ��� ���������\n";
		}

	}*/




	return 0;
}