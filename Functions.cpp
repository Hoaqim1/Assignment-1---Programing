#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

/*Denna funktion beräknar och visar statistik som summan, minsta, största, medelvärdet, varians och standardavvikelser i en lista, dock så nekar den användaren om listan
inte har några värden. 
*/ 

void Add_Value(double list[], int &amount){
    if (amount < 10) {
        cout << "Skriv in ett värde: " << '\n';
        cin >> list[amount]; //tar input och lägger in det i listan
        amount++;

        } else { 
            cout << "Listan har redan 10 värden." << '\n';
        }

    }


void Show_Value(double list[], int amount){
        if (amount == 0){
            cout << "Listan har inga värden" << '\n';
            return;
        }

        //variabler för summa, minimum och maximum
        double sum = 0;
        double Minval = list[0];
        double Maxval = list[0];

        for(int i = 0; i < amount; i++){
            sum += list[i];
            if(list[i] < Minval) Minval = list[i];
            if(list[i] > Maxval) Maxval = list[i];
        }

        //tar summan av hela listan och delar med antal värden för att få medelvärdet
        double mdlv = sum /amount;
        //beräkna variansen(https://www.youtube.com/watch?v=fYblNUZZqjA), hade väldigt svårt att förstå så utgick från denna video.
        double var = 0;
        for(int i = 0; i < amount; i++){
            var += pow(list[i] - mdlv, 2);
        }
        var = var / amount; 

        double stdav = sqrt(var); //standardavvikelsen är roten ur variansen



        cout << "Summan av värdena i arrayen är: " << sum << '\n';
        cout << "Minsta värdet i arrayen är: " << Minval << '\n';
        cout << "Största värdet i arrayen är: " << Maxval << '\n';
        cout << "Medelvärdet av värdena i arrayen är: "  << mdlv << '\n';
        cout << "Variansen är: " << var << '\n';
        cout << "Standardavvikelsen är: " << stdav << '\n';

    }