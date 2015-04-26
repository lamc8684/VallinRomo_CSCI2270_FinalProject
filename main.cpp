#include <iostream>
using namespace std;

void displayMenu(){
    cout<<"======Main Menu======\n";
    cout<<"1. Build Probability Tree\n";
    cout<<"2. Flip Coin\n";
    cout<<"3. Calculate Probabilities\n";
    cout<<"4. Reset Tree\n";
    cout<<"5. Count Total Probabilities\n";
    cout<<"6. Show Previous Flip Outcomes\n";
    cout<<"7. Redo Flip\n";
    cout<<"8. Show Number Of Flips\n";
    cout<<"9. Force Flip\n";
    cout<<"10. Compares Odd\n";
    cout<<"11. Quit\n";
}

int main()
{
    char input;

    while(getline(cin,input)){
        if(input == "1"){
            int num;
            cout<<"How many tosses do you want to make?\n";
            getline(cin, num)
            Tree DadTree = new Tree(num); //I don-t know if this is the correct way to inititallize the tree
            displayMenu();
        }
        if(input == "2"){
            displayMenu();
        }
        if(input == "3"){
            displayMenu();
        }
        if(input == "4"){
            displayMenu();
        }
        if(input == "5"){
            displayMenu();
        }
        if(input == "6"){
            displayMenu();
        }
        if(input == "7"){
            displayMenu();
        }
        if(input == "8"){
            displayMenu();
        }
        if(input == "9"){
            displayMenu();
        }
        if(input == "10"){
            displayMenu();
        }
        if(input == "11"){
            break;
        }
    }
    cout<<"Goodbye!\n";
    return 0;

}
