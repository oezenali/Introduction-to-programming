//1. Cevap:

#include <conio.h> 
#include <iostream>
#include<stdlib.h>
#include <ctime> 
using namespace std;

int main()
{
	srand((int)time(NULL));
	setlocale(LC_ALL, "Turkish"); 
	int n;
	char secim;

	cout << "Dizi boyutunu giriniz: ";
	cin >> n;
	int dizi[100];

	for (int i = 0; i < n; i++)
	{
		dizi[i] = rand() % 99 + 1;

	}
	for (int i = 0; i < n; i++)
	{
		{
			if (i == 0)
				cout << "--->";

		}

		cout << dizi[i] << "\n\t" << endl;
	}
	cout << "Aşağı ilerlemek için 'A' veya 'a' tuşuna basınız " << endl;
	cout << "Yukarı ilerlemek için 'D' veya 'd' tuşuna basınız " << endl;
	cout << "Çıkmak için 'C' veya 'c' basınz " << endl;
	secim = _getch();
	int indeks = 0;
	while (secim != 'c' && secim != 'C') {

		if (secim == 'a' || secim == 'A')
		{
			indeks = (indeks + 1) % n;
			for (int i = 0; i < n; i++)
			{
				{
					if (i == indeks)
						cout << "--->";

				}

				cout << dizi[i] << "\n\t" << endl;
			}
		}if (secim == 'd' || secim == 'D')
		{
			if (indeks - 1 < 0)
				indeks = n + (indeks - 1);
			else
			{
				indeks = indeks--;
			}
			for (int i = 0; i < n; i++)
			{
				{
					if (i == indeks)
						cout << "--->";

				}

				cout << dizi[i] << "\n\t" << endl;
			}
		}
		cout << "Aşağı ilerlemek için 'A' veya 'a' tuşuna basınız " << endl;
		cout << "Yukarı ilerlemek için 'D' veya 'd' tuşuna basınız " << endl;
		cout << "Çıkmak için 'C' veya 'c' basınz " << endl;
		secim = _getch();

	}

	//system("CLS");
	return 0;
}





//2. Cevap:
#include <conio.h> 
#include <iostream>
#include<stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	int N, matris[100][100] = {};

	int sayi;
	int altlimit, ustlimit;
	int b;
	b = rand();


	cout << "n sayisini giriniz:";
	cin >> N;

	cout << "\nAlt limit belirleyiniz: ";
	cin >> altlimit;

	cout << "\nUst limit belirleyiniz:";
	cin >> ustlimit;

	for (int i = 0; i < N; i++)
	{
		cout << "\n";
		for (int j = 0; j < N; j++)
		{
			matris[i][j] = (rand() % 10);
			cout << matris[i][j] << " ";
		}
	}
	cout << "\n" << "Crypted Array:\n";
	for (int i = 0; i < N; i++) {
		cout << "\n";
		for (int j = 0; j < N; j++) {
			sayi = matris[i][j];
			if (sayi < altlimit)
				cout << "*" << " ";
			else if (sayi > ustlimit)
				cout << "-" << " ";
			else if (altlimit <= sayi && sayi <= ustlimit)
				cout << "~" << " ";


		}
	}


	return 0;
}