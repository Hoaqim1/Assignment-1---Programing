#include <iostream>
#include <windows.h>
#include <cmath>
#include <algorithm>

using namespace std;

void Add_Value(double list[], int &amount, double &sum);
void Show_Value(double list[], int amount);
void Calc_Sum(double list[], int amount, double &sum);
void Calc_mdlv(double list[], int amount, double &mdlv);
void Calc_Min(double list[], int amount, double &MinVal);
void Calc_Max(double list[], int amount, double &MaxVal);
void Calc_Var(double list[], int amount, double &var);
void Calc_stdav(double list[], int amount, double &stdav);
void Sort_Func_Asc(double list[], int &amount);
void Sort_Func_Desc(double list[], int &amount);
void Search_Func(double list[], int amount);
void Menu(double list[], int &amount);


void Menu(double list[], int &amount){
    int choice;
    double sum = 0;
    double mdlv = 0;
    double MinVal = 0;
    double MaxVal = 0;
    double var = 0;
    double stdav = 0;

    do{

    cout << "Välj mellan 1 till 10 " << '\n';

    cout << "1. Lägg till ett värde i listan " << '\n';
    cout << "2. Visa antal värden i listan " << '\n';
    cout << "3. Visa summan av alla värden i listan" << '\n';
    cout << "4. Visa medelvärdet av alla värden i listan " << '\n';
    cout << "5. Visa min- och maxvärde av alla värden i listan " << '\n';
    cout << "6. Visa varians och standardavvikelsen av alla värden i listan " << '\n';
    cout << "7. Sortera listan stigande ordning" << '\n';
    cout << "8. Sortera listan fallande ordning" << '\n';
    cout << "9. Sök efter ett visst värde i listan " << '\n';
    cout << "10. Avsluta " << '\n';
    cout << "Val: ";
    cin >> choice;

    switch (choice){

    case 1: 
        Add_Value(list, amount, sum);
        break;
    case 2: 
        Show_Value(list, amount);
        cout << '\n';
        break;
    case 3: 
        Calc_Sum(list, amount, sum);
        cout << "Summan av alla värden i listan är: " << sum << '\n';
        break;
    case 4: 
        Calc_mdlv(list, amount, mdlv);
        cout << "Medelvärdet är: " << mdlv << '\n';
        break;
    case 5: 
        Calc_Min(list, amount, MinVal);
        Calc_Max(list, amount, MaxVal);
        cout << "Minsta värdet i listan är: " << MinVal << " och största värdet i listan är: " << MaxVal << '\n';
        break;
    case 6: 
        Calc_Var(list, amount, var);
        Calc_stdav(list, amount, stdav);
        cout << "Variansen är: " << var << " och standardavvikelsen är: " << stdav << '\n';
        break;
    case 7:
        Sort_Func_Asc(list, amount);
        cout << '\n';
        break;
    case 8:
        Sort_Func_Desc(list, amount);
        cout << '\n'; 
        break;
    case 9:
        Search_Func(list, amount);
        cout << '\n'; 
        break;
    case 10:
        cout << "Programmet Avslutas...";
        return;
    default:
        cout << "Ogiltig inmatning, Välj mellan 1 och 10!" << '\n';
        break;
    }
    } while(choice != 10);

}
