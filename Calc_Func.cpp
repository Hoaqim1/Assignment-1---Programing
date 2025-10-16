#include <iostream>
#include <windows.h>
#include <cmath>
#include <algorithm>
using namespace std;

/*Denna funktion beräknar och visar statistik som summan, minsta, största, medelvärdet, varians och standardavvikelser i en lista, dock så nekar den användaren om listan
inte har några värden. 
*/ 

//Här är funktionen för att lägga till värden
void Add_Value(double list[], int &amount, double &sum){
    if (amount < 10) {
        cout << "Skriv in ett värde, maximal mängd värden är 10: " << '\n';
        cin >> list[amount]; //tar input och lägger in det i listan
        amount++;

        } else { 
            cout << "Listan har redan 10 värden." << '\n';
        }
    }

//Visar värdet och säger även om listan inte har några värden
void Show_Value(double list[], int amount){
        if (amount == 0){
            cout << "Listan har inga värden" << '\n';
            return;
    }
    cout << "Värdena i listan: " << '\n';
    for (int i = 0; i < amount; i++){
        cout << list[i] << " ";
    }
}
void Calc_Sum(double list[], int amount, double &sum){ 
        sum = 0;
        for(int i = 0; i < amount; i++){
            sum += list[i];
        }
}
void Calc_mdlv(double list[], int amount, double &mdlv){
    double sum;
    Calc_Sum(list, amount, sum);
    mdlv = sum / amount;
    }

void Calc_Min(double list[], int amount, double &MinVal){
        MinVal = list[0];
        for(int i = 1; i < amount; i++){
            if(list[i] < MinVal) MinVal = list[i];
    }
}
void Calc_Max(double list[], int amount, double &MaxVal){
        MaxVal = list[0];
        for(int i = 1; i < amount; i++){
        if(list[i] > MaxVal) MaxVal = list[i];
        }
}     

/*beräkna variansen
(https://www.youtube.com/watch?v=fYblNUZZqjA)
(https://www.geeksforgeeks.org/dsa/program-for-variance-and-standard-deviation-of-an-array)
hade väldigt svårt att förstå så utgick från denna video och sidan under.
 */
void Calc_Var(double list[], int amount, double &var){
    double mdlv;
    Calc_mdlv(list, amount, mdlv);
    var = 0;
        for(int i = 0; i < amount; i++){
            var += pow(list[i] - mdlv, 2);
        }
        var = var / amount; 
}
void Calc_stdav(double list[], int amount, double &stdav){
    //standardavvikelsen är roten ur variansen
    double var;
    Calc_Var(list, amount, var);
    stdav = sqrt(var);
}
void Sort_Func_Asc(double list[], int &amount){
    sort (list, list + amount);

    for(int i = 0; i < amount; i++){
        cout << list[i] << " ";
        
    }
}
void Sort_Func_Desc(double list[], int &amount){
    sort (list, list + amount, greater<double>());

    for(int i = 0; i < amount; i++){
        cout << list[i] << " ";
        
    }
}
void Search_Func(double list[], int amount){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
    double search;
    cout << "Sök efter ett värde: ";
    cin >> search;

    bool find = false;
    for (int i = 0; i < amount; i++) {
        if (list[i] == search) {
            cout << "Värdet " << search << " finns i listan" << '\n';
            find = true;
        }
    }

}
