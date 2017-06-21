#include <iostream>
#include <stdio.h>      // exit(0);
#include <windows.h>    // Sleep();
#include <cstdlib>      // system ("cls");
#include <conio.h>      // menu=getch();

using namespace std;
// TW! - tymczasowe wylaczenie kodu w celu przyspieszenia prac
// deklaracja zmiennych

char menu;
float x[10]; // zmienne decyzyjne
float y[10]; // zmienne wynikowe
int paczki, palety, c;
string login, haslo, nazwa_towaru;

int main()
{
    // Ekran powitalny + wyjasnienie funkcji programu

/* TW!
    cout << "Witam w moim autorskim programie wzorowanym na programie firmy Insert - Subiekt_GT." << endl;
    cout << "Program stworzylem w celu utrwalenia wiedzy zdobytej na kursie Pana Miroslawa Zelenta z programowania w C++ [YT]." << endl;
    cout << "Narzedzie to ma symulowac proste funkcje obliczeniowe, w ktorych bedziemy mogli obliczyc m.in.:" << endl << endl;

    cout << "1. Wartosc zamowienia (Brutto i Netto) dla jednego asortymentu przy podaniu ceny i ilosci sprzedanych szt." << endl;
    cout << "2. Calkowite koszty transportu, ktore poniesiemy w zwiazku z wysylka towaru." << endl;
    cout << "3. Koszty zakupu towaru + wartosc podatku VAT." << endl;
    cout << "4. Marze w [%] oraz [PLN]." << endl;
    cout << "5. Podatek VAT, ktory nalezy odprowadzic." << endl << endl;

    cout << "Zapraszam do testowania!" << endl << endl;

    cout << "Marcin Kroszel" << endl;
    cout << "509-934-004" << endl;
    cout << "marcinkroszel@wp.pl" << endl << endl;

    cout << "Nacisnij ENTER aby przejsc dalej..." << endl << endl;


    getchar();
    system ("cls"); // czyszczenie ekranu

TW! */

    // symulator logowania do systemu
    /*
    cout << "Logowanie do programu" << endl;

    cout << "Login (admin): ";
    cin >> login;
    cout << "Haslo (qwerty): ";
    cin >> haslo;
    cout << endl;

        // petla while - ma za zadanie powtarzanie procedury wpisywania loginu i hasla w przypadku nieprawidlowych danych

        while ((login!="admin") || (haslo!="qwerty"))
        {
        system ("cls");
        cout << "Logowanie do programu"                 << endl;
        cout << "Login i haslo niepoprawne"                     << endl;
        cout << "Sprobuj ponownie"                     << endl  << endl;

        cout << "Login (admin): ";
        cin >> login;

        cout << "Haslo (qwerty): ";
        cin >> haslo;
        cout << endl;
        }

        // petla if - ma za zadanie zakonczyc petle w momencie gdy wprowadzone dane logowania sa poprawnie + wyswietlic menu

        if ((login=="admin") && (haslo=="qwerty"))

        {
        */
        /*
        system ("cls");
        cout << "Logowanie prawidlowe."                 << endl << endl;
        // TW! Sleep(1500);
        system ("cls");
        cout << "!!! UDALO SIE !!!"                     << endl;
        cout << "------------"                          << endl << endl;
        cout << "Witam w moim mini programie :)"        << endl;
        Sleep(2000);
        system ("cls");
        */
        cout << "Wprowadz podstawowe dane wyjsciowe"    << endl;
        cout << "potrzebne do dalszych obliczen:"       << endl << endl;

        cout << "Nazwa towaru (np. frezarka): ";
        cin >> nazwa_towaru;

        cout << "Cena sprzedazy [BRUTTO] = ";
        cin >> x[1];

        cout << "Ilosc zamowionego towaru [szt.] = ";
        cin >> y[1];
        cout << endl;

        cout << "MENU GLOWNE:"                                  << endl;
        cout << "1. Oblicz wartosc zamowienia"                  << endl;
        cout << "2. Oblicz koszty transportu"                   << endl;
        cout << "3. Oblicz koszty zakupu i podatek VAT"         << endl;
        cout << "4. Oblicz marze"                               << endl;
        cout << "5. Oblicz VAT ktory nalezy zaplacic"           << endl;
        cout << "6. EXIT"                               << endl << endl;

        // nawias od czesci z logowaniem }

        menu=getch();
//for(;;)
          //  {

    switch(menu)
        {
        case '1':
        {
            cout << "1. Oblicz wartosc zamowienia"       << endl << endl;

            cout << "Podsumowanie" << endl;
            cout << "------------" << endl;
            cout << "Wartosc zamowienia [BRUTTO] = " << x[1] * y[1] << endl;
            cout << "Wartosc zamowienia [NETTO] = " << (x[1] * y[1]) * 0.813 << endl;
            cout << "VAT [23%] = " << (x[1] * y[1]) * 0.187;
            getchar();
        }
        break;

        case '2':
        {
            cout << "2. Oblicz koszty transportu"       << endl << endl;
            cout << "Uzupelnij dane:"                   << endl << endl;
            cout << "Ile szt. towaru: [" << nazwa_towaru << "] wchodzi na 1 palete = ";
            cin >> c;

            palety = y[1] / c;
            cout << "Palety do wyslania = "  << palety << endl;
            paczki = y[1] - (palety*c);
            cout << "Paczki do wyslania = "  << paczki << endl;

            if ((palety>=1) && (paczki>=1))
            {
                cout << "Koszt [BRUTTO] wysylki jednej palety = ";
                cin >> x[3];
                cout << "Koszt [BRUTTO] wysylki jednej paczki = ";
                cin >> x[4];
            }

            else if ((palety>=1) && (paczki==0))
            {
                cout << "Koszt [BRUTTO] wysylki jednej palety = ";
                cin >> x[3];
            }

            else if ((palety==0) && (paczki>=1))
                {
                cout << "Koszt [BRUTTO] wysylki jednej paczki = ";
                cin >> x[4];
                }

            cout << endl;
            cout << "Podsumowanie"  << endl;
            cout << "------------" << endl;

            y[2] = x[3] * palety;
            cout << "Koszty transportu palet [BRUTTO] = " << y[2] << endl;

            y[3] = x[4] * paczki;
            cout << "Koszty transportu paczek [BRUTTO] = " << y[3] << endl;
            cout << "------------" << endl;
            cout << "SUMA [BRUTTO] = " << y[2] + y[3] << endl;
            cout << "SUMA [NETTO] = " << (y[2] + y[3])*0.813 << endl;
            cout << "VAT TRANSPORT [23%] = " << (y[2] + y[3]) * 0.187 << endl;
            getchar();
            }
            break;

        case '3':
        {
            cout << "3. Oblicz koszty zakupu i podatek VAT"       << endl << endl;
            cout << "Uzupelnij dane:"         << endl;

        }
        break;

        case '4':
        {
            cout << "4. Oblicz marze"       << endl << endl;
            cout << "Uzupelnij dane:"         << endl;

        }
        break;

        case '5':
        {
            cout << "Oblicz VAT ktory nalezy zaplacic"       << endl << endl;
            cout << "Uzupelnij dane:"         << endl;

        }
        break;

        case '6':
        {
            exit(0);
        }
        break;

        default: cout << "Nie ma takiej funkcji!";

        }

        getchar();
      //  }


    return 0;
}
