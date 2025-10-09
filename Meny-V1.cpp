#include <iostream>
#include <windows.h>

using namespace std;

    int main(){

    int choice;
    
    do{

    cout << "Välj mellan 1 till 6: ";

    cout << "1. Lägg till ett värde i listan " << '\n';
    cout << "2. Visa antal värden i listan " << '\n';
    cout << "3. Visa summan av alla värden i listan" << '\n';
    cout << "4. Visa medelvärdet av alla värden i listan " << '\n';
    cout << "5. Visa min- och maxvärde av alla värden i listan " << '\n';
    cout << "6. Visa standardavvikelsen av alla värden i listan " << '\n';
    cout << "7. Avsluta " << '\n';
    cout << "Val: ";
    cin >> choice;

    switch (choice){

    case 1: 
        cout << "1. Lägg till ett värde i listan: " << '\n';
        break;
    case 2: 
        cout << "2. Visa antal värden i listan: " << '\n';
        break;
    case 3: 
        cout << "3. Visa summan av alla värden i listan" << '\n';
        break;
    case 4: 
        cout << "4. Visa medelvärdet av alla värden i listan: " << '\n';
        break;
    case 5: 
        cout << "5. Visa min- och maxvärde av alla värden i listan: " << '\n';
        break;
    case 6: 
        cout << "6. Visa standardavvikelsen av alla värden i listan: " << '\n';
        break;
    case 7:
        cout << "7. Avsluta\n";
        break;
    default:
        cout << "Ogiltig inmatning, Välj mellan 1 och 7!" << '\n';
        break;
    }
    } while(choice != 7);

        return 0;
}