#include <iostream>
#include <io.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	//Бинарный файл
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
		fseek(f, sizeof(int) + max * sizeof(double), SEEK_SET);  //SEEK_SET-поиск с текущего момента
		fseek(f, sizeof(int) + min * sizeof(double), SEEK_SET);
		fwrite(&max, sizeof(double), 1, f);
		fclose(f);
		delete[]a;
	}*/


	//Поиск файлов
	/*struct _finddata_t myfileinfo;
	char str[200] = "D:\\example\\*.txt";
	long done1 = _findfirst("*.cpp", &myfileinfo);
	cout << myfileinfo.name << "\n";
	long done2 = _findfirst(str, &myfileinfo);
	cout << myfileinfo.name << "\n";
	if (done2 == -1)
	{
		cout << "Такого файла нету";
	}
	else
	{
		cout << "Такой файл есть: ";
		cout << myfileinfo.name << "\n";
	}
	while (done2 != -1)
	{
		cout << myfileinfo.name << "\n";
		done2 = _findnext(done2, &myfileinfo);
	}*/
	/*struct _finddata_t myfileinfo;
	char str[200];
	cout << "Введите путь к файлу и его расширение например:  (D:\\example\\*.txt) \n";
	cin >> str;
	long done1 = _findfirst(str, &myfileinfo);
	while (done1 != -1)
	{
		cout << myfileinfo.name << "\n";
		done1 = _findnext(done1, &myfileinfo);
	}*/

	//инфо
	/*Это все входит в _findata_t(поле unsigned атрибут)
	_A_NORMAL -Чтение, запись без ограничений
	_A_RDONLY - Файл только для чтения
	_A_ARCH  -Архив
	time_t time_create - веремя создания файла
	time_t time_acces -время и дата последнего открытия файла
	time_t time_write-время последнего редоктирования
	_fsize_t size - размер файла
	char name[260] - имя файла*/

	//Фор эйдж
	/*int math[] = {0,1,4,5,6,7,8,9,10,9,8,7,6,5,4,3,2,1,0};
	cout << "Массив: ";
	for (auto number : math)
	{
		cout << number << " ";
	}*/

	//Поиск имени
	/*const string names[] = {"Saha","Ivan","John","Orland","Leonardo","Nina","Anton","Molly"};
	string username;
	cout << "Введите имя: \n";
	cin >> username;
	for (const auto& name : names)
	{
		if (username == name)
		{
			cout << "\nТакое имя есть\n";
			break;
		}
		else
		{
			continue;
			cout << "\nТакое имя отсутвует\n";
		}

	}*/




	return 0;
}