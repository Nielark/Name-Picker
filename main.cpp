#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

using namespace std;

void menu();
void addNames();
void deleteName();
void displayNames();
void spinNames();
void randomizedNames();
void deleteAnimation();
void clean();

int i, numNames = 0;
string nameArray[100];

int main()
{
    int choice;
    system("color 0A");

    choice:
    while(choice != 0){
        menu();
        cout << "\t\t\t\t\t\t\t>> Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                addNames();
                clean();
                break;

            case 2:
                deleteName();
                clean();
                break;

            case 3:
                displayNames();
                clean();
                break;

            case 4:
                spinNames();
                clean();
                break;

            case 0:
                return 0;

            default:
                cout << "\t\t\t\t\t\t\tInvalid Input.\n\n";
                clean();
                goto choice;
        }
    }
}

void menu(){
    cout << "\n\n\n\n";
    cout << "\t\t\t\t\t\t\tN A M E  P I C K E R\n\n";
    cout << "\t\t\t\t\t\t\t[1] - A D D  N A M E\n";
    cout << "\t\t\t\t\t\t\t[2] - D E L E T E  N A M E\n";
    cout << "\t\t\t\t\t\t\t[3] - S H O W  L I S T E D  N A M E S\n";
    cout << "\t\t\t\t\t\t\t[4] - S P I N  T H E  N A M E\n";
    cout << "\t\t\t\t\t\t\t[0] - E X I T\n\n";
}

void addNames(){
    string name;

    while(name != "0"){
        cout << "\t\t\t\t\t\t\t" << numNames + 1 << ") Enter the name: ";
        cin >> name;
        nameArray[numNames] = name;
        numNames++;
    }

    numNames--;
}

void deleteName(){
    string delName, delNameHold;
    int pos = -1;

    if(numNames != 0){
        cout << "\t\t\t\t\t\t\t>> Enter the name you want to delete: ";
        cin >> delName;

        for(i = 0; i < numNames; i++){
            if(nameArray[i] == delName){
                pos = i;
                break;
            }
        }

        if(pos != -1){
            delNameHold = nameArray[pos];

            for(i = pos; i < (numNames - 1); i++){
                nameArray[i] = nameArray[i + 1];
            }

            numNames--;
            deleteAnimation();
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << delNameHold << " has been deleted\n";
        }
        else{
            cout << "\t\t\t\t\t\t\tName not found.\n";
        }
    }
    else{
        cout << "\t\t\t\t\t\t\tNothing to delete.\n";
    }
}

void displayNames(){
    if(numNames != 0){
        cout << "\t\t\t\t\t\t\tLISTED NAMES\n";
        for(i = 0; i < numNames; i++){
            cout << "\t\t\t\t\t\t\t" << i + 1 << ") " << nameArray[i] << endl;
        }
        cout << endl;
    }
    else{
        cout << "\t\t\t\t\t\t\tNothing to display.\n";
    }
}

void spinNames(){
    int pos;
    srand(time(NULL));

    if(numNames != 0){
        int randNum = 0 + (rand() % numNames);

        randomizedNames();

        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << nameArray[randNum] << endl;

        for(i = 0; i < numNames; i++){
            if(nameArray[i] == nameArray[randNum]){
                pos = i;
                break;
            }
        }

        for(i = pos; i < (numNames - 1); i++){
            nameArray[i] = nameArray[i + 1];
        }

        numNames--;
        cout << endl;
    }
    else{
        cout << "\t\t\t\t\t\t\tNo names to spin.\n";
    }
}

void randomizedNames(){
    int x = 0;

    while(x != 10){
        for(i = 0; i < numNames; i++){
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t" << nameArray[i];
            Sleep(100);
            system("CLS");
        }

        x++;
        i = 0;
    }
}

void deleteAnimation(){
    for(i = 0; i < 2; i++){
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tDeleting.\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tdEleting..\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tdeLeting...\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tdelEting.\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tdeleTing..\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tdeletIng...\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tdeletiNg.\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tdeletinG..\b\b\b\b\b\b\b\b\b\b\b";
        Sleep(500);
        system("CLS");
    }
}

void clean(){
    system("PAUSE");
    system("CLS");
}
