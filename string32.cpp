// string32.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Даны строки S и S0. Найти количество вхождений строки S0 в строку S.

#include "pch.h"
#include <iostream>
using namespace std;

int size_of_elements(char*s)
{
	int i = 0, n = 0;
	while (s[i] != NULL)
	{
		i++; n++;
	}
	return n;
}

int main()
{
	cout << "Print S: ";
	char s [100];
	gets_s(s);
	int s_size = size_of_elements(s);

	cout << "Print S0: ";
	char s0[100];
	gets_s(s0);
    int s0_size =size_of_elements(s0);

	

	int s_index = 0;
	int s0_index = 0;
	int start_index;
	int oparation_num;
	int end_index;
	int num = 0;

		while (s_index < s_size)
		{
			if (s[s_index] == s0[s0_index])
			{
				oparation_num = 0;
				while (s[s_index] == s0[s0_index])
				{
					s0_index++;
					s_index++;
					oparation_num++;
					if (oparation_num = s0_size)
					{
						num++; s_index--; break;
					}
						
				}
			}
			s0_index = 0;
			s_index++;
			
		}
		cout <<num;
		delete[]s;
		delete[]s0;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
