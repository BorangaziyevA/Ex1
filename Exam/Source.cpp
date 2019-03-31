#include <stdio.h> 
#include <time.h> 
#include <iostream> 
using namespace std;
void task1()
{
	int a, a2, a4, a8, a12, a24, a28;
	cin >> a;
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a12 = a8 * a4;
	a24 = a12 * a12;
	a28 = a24 * a4;
	cout << "a^28 = " << a28 << endl;
	system("pause");
}

void task4()
{
	int x = 0, a = 10, k;
	cout << "Введите число:";
	cin >> k;
	while (k > 0)
	{
		if (k % 10 != 0 && k % 10 != 5)
		{
			
			x = ((k%10) * a) + x;
			a *= 10;

		}
		k /= 10;
	}

	do
	{
		x = x / 10;

	} while (x%10 ==0);


	cout << x << endl;
	
}

void task2()
{
	int p1 = 1, x;
	double c;
	cin >> x;
	for (size_t i = 2; i <= 64; i*=2)
	{
		p1 = p1 * (x - i);
	}
	int k = 1, p2 = 1;
	for (size_t i = 1; i <= 63; i +=k)
	{
		k = 2 * k;
		p2 = p2 * (x - i);
	}
	if (p2 == 0)
	{
		cout << "Error" << endl;
	}
	else 
	{
		c = (double)p1 / (double)p2;

		cout << "Результат = " << c << endl;
	}
}

void task5()
{
	int k = 0;
	char str[30];

	cin >> str;

	while (str[k] != ':' && (k != strlen(str)))
	{
		cout << str[k] << '\n';
		str[k++];
	}

	system("pause");
}

void task6()

{
	int n;
	const int m = 9;

	cout << "Введите количество строк: ";
	cin >> n;

	int **b = new int*[n];

	for (size_t i = 0; i < n; i++)
	{
		b[i] = new int[m];
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
			b[i][j] = (1 + rand() % 100);

	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
			cout << b[i][j]<< " ";
		cout << endl;

	}
	float sum = 0;

	for (size_t i = 0; i < m; i++)
	{
		sum = 0;

		for (size_t j = 0; j < n; j++)
		{
			sum = sum + b[j][i];
			if (j == n-1)
			{
				sum = (float)sum / 9;
				cout << "Cреднее арифметическое " << i << " столбца = " << sum << endl;
			}
		}

	}
	cout << endl << endl << endl;
	for (size_t i = 0; i < m; i++)
	{
		sum = 0;

		for (size_t j = 0; j < n; j++)
		{
			if (i%2 == 0)
			{
				sum = sum + b[j][i];
				if (j == n - 1)
				{
					sum = (float)sum / 9;
					cout << "Cреднее арифметическое " << i << " столбца = " << sum<<endl;
				}

			}
		}

	}

	cout << endl;
	system("pause");
}

void task3()
{
	int n;
	cout << "Введите количетсво элементов:" << endl;
	cin >> n;
	int *b;
	b = new int[n];
	float f;
	float s = 0;
	cout << "Ввод элементов:" << endl;
	for (size_t i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		if (b[i] % 3 == 0)
			f = pow(b[i], 2);
		else if (b[i] % 3 == 1)
			f = b[i];
		else
			f = (float)b[i] / 3;
		s = s + f;
	}

	cout << "Сумма = " << s << endl;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int task;
	int flag;

	do
	{
		system("cls");

		printf("Введите номер задания: ");
		cin >> task;

		switch (task)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 4:
		{
			task4();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
		}

		cout << "Хотите продолжить?" << endl;
		cin >> flag;

	} while (flag == 1);
}


