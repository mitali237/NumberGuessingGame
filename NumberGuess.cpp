#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int) time(NULL));
    int number= (rand() % 100) + 1;
    int guess=0;
    do{
        cout << "Enter the Guess of range (1-100):"<< endl;
        cin >> guess;
        if(guess>number){
            cout << "TOO HIGH!" << endl;
        }
        else if(guess<number){
            cout << "TOO LOW!" << endl;
        }
        else{
            cout<<"YOU GUESSED IT RIGHT!" << endl;
        }
    }
    while(guess!=number);
    return 0;
}