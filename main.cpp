#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"\t\t\t\t\t\tWelcome to Casino Number Guessing Game\n";
    cout<<"-------- Choose Difficulty Level -------\n";
    cout<<" 1. Easy \n 2. Medium \n 3. Hard\n 0. Exit\n";
    int level;
    cin>>level;

    // get random number
    srand(time(0));
    int comp = (rand() % (100-1)+1);

    // Deciding moves on the basis of Difficulty level
    int moves;
    if(level==1){
        moves = 10;
        cout<<"You have 10 choices to guess the number\n";
    } 
    else if(level==2){
        moves = 7;
        cout<<"You have 7 choices to guess the number\n";
    }
    else if(level==3){
        moves = 5;
        cout<<"You have 5 choices to guess the number\n";
    }   
    else{               
        cout<<"Exiting Game"; 
        return 0;
    }

    // Taking input from user
    int inp;
    while(moves){
        cin>>inp;
        if(inp==comp){          
            cout<<"Well Played!, You Won\n"; 
            cout<<"Thanks for Playing\n";
            break;
        }
        else if(inp>comp){
           cout<<"Oops!, You've guessed a greater number\n";
           if(!(moves-1)) cout<<"Out of moves\nBetter luck next time\n";
           else cout<<moves-1<<" Moves left\n";
        }
        else{
            cout<<"Oops!, You've guessed a lesser number\n";
            if(!(moves-1)) cout<<"Out of moves\nBetter luck next time\n";
            else cout<<moves-1<<" Moves left\n";
        }
        moves--;
    }

    return 0;
}