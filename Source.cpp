
#include "iostream"
#include <conio.h>
#include "string"
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\t\tОценки студентов\n\n";
	const int n = 2;
	int b[n],d[n];
	char a[n],c[n];
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << "Введите фио стдента " << ":";
			cin >> a[i];

			//cin.getline(a, n);
			cout << "Введите оценку стдента " << ":";
			cin >> b[i];
			if (b[i] >= 2.5)
			{
				c[i] = a[i];
				d[i] = b[i];
			}
		}
	}
          system("cls");
	for (int i = 0;i < n;i++)
	{
	
				for (int j = 0;j < n;j++)
				{
					cout << c[i] << ":";
				}
				cout << d[i] << endl;
			
		}
	
	_getch();
	return 0;
}