// String44.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дана строка, состоящая из русских слов, набранных заглавными бук-вами и разделенных пробелами 
//(одним или несколькими). Найти количе-ство слов, которые содержат ровно три буквы «А».

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	char s[] = "ОЛПО    АПАПА   АА АААААА ААА ВАПРОЛ     ";
	cout << s << endl;
	char word[100];
	int j = 0, n = strlen(s), counter = 0, sum = 0;
	for (int i = 0; i<n; i++) {
		if (s[i] == ' ') continue;
		j = 0;
		do {
			word[j] = s[i];
			i++;
			j++;
		} while (s[i] != ' ' && s[i]!='\0');
		word[j] = '\0';
		counter = 0;
		for (int i = 0; word[i]; i++)
		{
			if (word[i] == 'А')
				counter++;
		}
		
		if (counter == 3)
			sum++;
			
	}
	cout << sum;
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
