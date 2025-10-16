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
    //kollar först att listan inte har mer än 10 värden
    if (amount >= 10) { 
        cout << "Listan har redan 10 värden!" << '\n';
        return;
        }
    bool CorrVal = false;
    double inp;
    //Kollar så att koden inte är 10 eller mer och kollar efter ogiltig inmatning
    while (amount < 10 && !CorrVal) {
        cout << "Skriv in ett värde, maximal mängd värden är 10: " << '\n';
        if (cin >> inp) { 
            list[amount] = inp; //tar input och lägger in det i listan
            amount++;
            CorrVal = true;
            cout << "Värdet har lagts in i listan!" << '\n';
        } else {
            cout << "Ogiltigt värde, använd bara tal och decimaltal!" << '\n';
            cin.clear();
            cin.ignore(100, '\n');
        }
    }

}

//Visar värdet och säger även om listan inte har några värden
void Show_Value(double list[], int amount){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
    
    for (int i = 0; i < amount; i++){
        cout << list[i] << " ";
    }
}
//Räknar ut summan av värden i listan
void Calc_Sum(double list[], int amount, double &sum){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
        sum = 0;
        for(int i = 0; i < amount; i++){
            sum += list[i];
        }
}
//Räknar ut medelvärdet av värden i listan
void Calc_mdlv(double list[], int amount, double &mdlv){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
    double sum;
    Calc_Sum(list, amount, sum);
    mdlv = sum / amount;
    }
//Räknar ut minimum värde i listan
void Calc_Min(double list[], int amount, double &MinVal){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
        MinVal = list[0];
        for(int i = 1; i < amount; i++){
            if(list[i] < MinVal) MinVal = list[i];
    }
}
//Räknar ut maximalt värde i listan
void Calc_Max(double list[], int amount, double &MaxVal){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
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
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
    double mdlv;
    Calc_mdlv(list, amount, mdlv);
    var = 0;
        for(int i = 0; i < amount; i++){
            var += pow(list[i] - mdlv, 2);
        }
        var = var / amount; 
}
void Calc_stdav(double list[], int amount, double &stdav){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
    //standardavvikelsen är roten ur variansen
    double var;
    Calc_Var(list, amount, var);
    stdav = sqrt(var);
}
//Sorterar listan i fallande ordning
void Sort_Func_Asc(double list[], int &amount){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
    sort (list, list + amount);

    for(int i = 0; i < amount; i++){
        cout << list[i] << " ";
        
    }
}
//Sorterar listan i stigande ordning
void Sort_Func_Desc(double list[], int &amount){
    if (amount == 0) {
        cout << "Listan har inga värden" << '\n';
        return;
    }
    sort (list, list + amount, greater<double>());

    for(int i = 0; i < amount; i++){
        cout << list[i] << " ";
        
    }
}
//Funktion för att söka efter ett visst värde
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
