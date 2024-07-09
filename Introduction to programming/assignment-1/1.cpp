//1. Cevap

#include <iostream>
using namespace std;

int main()

{
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if (i == j && i <= 3 || j == 6 - i && i <= 3 || j == 0 || j == 6)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << '\r';
            cout << endl;
        }
    }

    cout << endl;

    {
        for (int i = 0; i < 5; i++)
        {

            for (int j = 0; j < 5; j++)
            {

                if (i == 0 || i == 2 || j == 0 || j == 4)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }

            }
            cout << '\r';
            cout << endl;

        }
    }

    cout << endl;


    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            if ((i == 0 || i == 4 || j == 0 || j == 4) && i != j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }

        }
        cout << '\r';
        cout << endl;
    }
    system("PAUSE");
    return 0;
}


//Cevap 2.


#include<iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main()
{
    int sayi1, sayi2, islem, sonuc;

    cout << "1. sayiyi giriniz:" << endl;
    cin >> sayi1;

    cout << "2. sayiyi giriniz: " << endl;
    cin >> sayi2;

    cout << "1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n5-Mod_alma\n6-Karekok_alma\n7-Ust_alma\nHangi islemi yaptirmak istiyorsunuz? " << endl;
    cin >> islem;

    switch (islem)
    {
    case 1: sonuc = sayi1 + sayi2;
        cout << "Toplam: " << sonuc << endl;
        break;
    case 2: sonuc = sayi1 - sayi2;
        cout << "Cikarma: " << sonuc << endl;
        break;
    case 3: sonuc = sayi1 * sayi2;
        cout << "Carpma: " << sonuc << endl;
        break;
    case 4: sonuc = sayi1 / sayi2;
        cout << "Bolme: " << sonuc << endl;
        break;
    case 5: sonuc = sayi1 % sayi2;
        cout << "Mod_alma: " << sonuc << endl;
        break;
    case 6: sonuc = sqrt(sayi1 * sayi2);
        cout << "Karekok_alma: " << sonuc << endl;
        break;
    case 7: sonuc = pow(sayi1, sayi2);
        cout << "Ust_alma: " << sonuc << endl;
        break;
    default: cout << "Hatali islem;" << endl;
        break;
    }
    return 0;
}

//Cevap 3.

#include <iostream>
#include <functional>

using namespace std;

double integral(function<double(double)> fonksiyon, double Basla, double Bitir, double hassaslik = 0.001)
{
    double sum = 0.0;

    for (double d = Basla; d < Bitir; d += hassaslik)
    {
        sum += fonksiyon(d) * hassaslik;
    }

    return sum;
}

double deriveAtPoint(function<double(double)> fonksiyon, double puan, double hassaslik = 0.001)
{
    return (fonksiyon(puan + hassaslik) - fonksiyon(puan)) / hassaslik;
}


int main() {

    cout << "Integral x^2+2x+5 1'den 4'e: " << integral([](double x) {return x * x + 2 * x + 5; }, 1, 4) << "'dir." << endl;
    system("PAUSE");
    return 0;
}

//Cevap 4.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand((int)time(NULL));
    int i = 0;
    int enbuyuk = 0;
    int dizi[10];
    int sayac = 0;
    cout << "Sayilar:";
    while (i < 10) {
        dizi[i] = (rand() % 2000) + 1;
        cout << dizi[i] << "  ";
        i++;

    }

    enbuyuk = dizi[0];
    for (i = 0; i < 10; i++)
    {
        if (dizi[i] > enbuyuk)
        {
            enbuyuk = dizi[i];
        }
    }

    cout << "En buyuk sayi =" << (enbuyuk) << endl;


    system("PAUSE");
    return 0;
}

// Cevap 5.


#include <iostream>
using namespace std;

int main() {
    string karakter;

    cout << "karakter giriniz: ";
    cin >> karakter;

    karakter = string(karakter.rbegin(), karakter.rend());

    cout << karakter;

    return 0;
}



// Cevap 6.
#include <iostream>
#include <iostream>
#include <conio.h>
using namespace std;
void buyukYazdir(char karakter[])
{
    char yenisi;

    for (int i = 0; karakter[i] != '\0'; i++) {
        if (karakter[i] != 32) {
            yenisi = toupper(karakter[i]);
            cout << yenisi;
        }
        else
            cout << karakter[i];
    }
    _getch();
}
void kucukYazdir(char karakter[])
{

    char yenisi;

    for (int i = 0; karakter[i] != '\0'; i++) {
        if (karakter[i] != 32) {
            yenisi = tolower(karakter[i]);
            cout << yenisi;
        }
        else
            cout << karakter[i];
    }
    _getch();
}
void ilkHarfBuyuk(char karakter[])
{
    char yenisi;
    for (int i = 0; karakter[i] != '\0'; i++) {
        if (karakter[i] != 32) {
            if (i == 0) {
                yenisi = toupper(karakter[i]);
                cout << yenisi;
            }
            else
                cout << karakter[i];

        }
    }
    _getch();
}
void tersiniYazdir(char karakter[])
{
    int i = 0;
    int fark = 'a' - 'A';

    while (karakter[i] != '\0') {

        if (karakter[i] >= 'A' && karakter[i] <= 'Z') {
            karakter[i] += fark;
        }
        else if (karakter[i] >= 'a' && karakter[i] <= 'z') {
            karakter[i] -= fark;
        }
        cout << karakter[i];
        i++;
    }
    _getch();
}
int main()
{
    setlocale(LC_ALL, "Turkish");
    int islem;
    char karakter[20] = { " " };

    cout << "Lutfen bir karakter giriniz:" << endl;
    cin.getline(karakter, 20);

    cout << "1.Tamamen büyük yazdırma." << "2.Tamamen küçük yazdırma." << "3.Büyükse küçük, küçükse büyük yazdırma." << "4.Kelimenin ilk harifini büyük yazdırma." << "Hangi işlemi yaptırmak istiyorsunuz" << endl;
    cin >> islem;

    if (islem == 1) {
        buyukYazdir(karakter);
    }
    else if (islem == 2) {
        kucukYazdir(karakter);
    }
    else if (islem == 3) {
        tersiniYazdir(karakter);
    }
    else if (islem == 4) {
        ilkHarfBuyuk(karakter);
    }
}

// Cevap 7.
#include <iostream>  
#include<cstdlib>
#include <ctime>

using namespace std;
int main()
{
    char karakter = 'a';

    while (!(karakter >= 32 && karakter <= 47)) {

        int  i, m = 0, flag = 0;

        srand((unsigned)time(NULL));

        int random = rand();
        cout << random << endl;



        m = random / 2;
        for (i = 2; i <= m; i++)
        {
            if (random % i == 0)
            {
                cout << "Asal degildir" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "Asaldir." << endl;
        cin >> karakter;
    }
    system("PAUSE");
}

//Cevap 8.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    char str1[50];
    int i, l = 0;
    cout << "\n\n Karakterin uzunluğunu bulunuz:\n";
    cout << "---------------------------------\n";
    cout << "Karakteri giriniz: ";
    cin >> str1;
    for (i = 0; str1[i] != '\0'; i++) {
        l++;
    }
    cout << "Karakter şunları içerir. " << l << " Karakter sayısı." << endl;
    cout << "Karakter uzunluğu " << str1 << "'dir:" << l << endl;

    return 0;

}

//Cevap 9.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, const char* argv[])
{
    for (int i = 0; i < 20; i++) {
        int rastgele = rand() % 10;
        string kelime = "A";
        for (int j = 0; j < rastgele; j++)
        {
            char karakter;
            do {
                karakter = rand() % 57 + 65;
            } while (karakter > 90 && karakter < 97);
            kelime += karakter;
        }
        cout << kelime << endl;
    }
    system("PAUSE");
    return 0;
}

//Cevap 10.
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(int argc, const char* argv[])
{
    char asalMi[256] = { 0 };
    for (int i = 65; i < 123; i++) {
        if (i < 91 || i>96) {
            char asal = 1;
            for (int j = 2; j < i / 2; j++)
                if (i % j == 0)
                    asal = 0;
            asalMi[i] = asal;
        }
    }
    for (int i = 65; i < 123; i++) {
        for (int j = 65; j < 123; j++) {
            for (int k = 65; k < 123; k++) {
                if (asalMi[i] && asalMi[j] && asalMi[k]) {
                    cout << (char)i;
                    cout << (char)j;
                    cout << (char)k << endl;
                }
            }
        }
    }
    return 0;
}