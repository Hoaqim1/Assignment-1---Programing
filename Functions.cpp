#include <iostream>
#include <windows.h>
using namespace std;

/*Denna funktion beräknar och visar statistik som summan, minsta, största och medelvärdet i en lista, dock så nekar den användaren om listan
inte har några värden. Måste lägga in varians och standaravvikelser. WIP
*/ 

void Add_Value(int list[], int &amount){
    if (amount < 10) {
        cout << "Skriv in ett värde(heltal): " << '\n';
        cin >> list[amount]; //tar input och lägger in det i listan
        amount++;

        } else { 
            cout << "Listan har redan 10 värden." << '\n';
        }

    }


void Show_Value(int list[], int amount){
        if (amount == 0){
            cout << "Listan har inga värden" << '\n';
            return;
        }

        int sum = 0;
        int Minval = list[0];
        int Maxval = list[0];

        for(int i = 0; i < amount; i++){
            sum += list[i];
            if(list[i] < Minval) Minval = list[i];
            if(list[i] > Maxval) Maxval = list[i];
        }

        cout << "Summan av värdena i arrayen är: " << sum << '\n';
        cout << "Minsta värdet i arrayen är: " << Minval << '\n';
        cout << "Största värdet i arrayen är: " << Maxval << '\n';
        cout << "Medelvärdet av värdena i arrayen är: " << int(sum) / amount << '\n';

    }