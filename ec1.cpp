//ec1.cpp
//Shreya Gowda, CISP 400
//8/28/19

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
//declared variables
  int human_wins=0; //how many times human won
  int computer_wins=0; //how many times computer won
  int computer_choice=0; //computer's object choice
  int human_choice=0; //human's object choice
  int rounds=0; //number of rounds played
  enum Objects {NA, ROCK, PAPER, SCISSORS}; //number corresponding to object
  string object[4] = {"", "rock", "paper", "scissors"}; //string associated with object

  srand(time(0));

//Program Greeting
  cout<<"Welcome to Rock-Paper-Scissors! \n>You will be playing against the computer in a series of rounds. \n>In each round, you must randomly select from the 3 objects and TYPE THE CORRESPONDING NUMBER. The computer will do the same. \n>Depending on the object that you and the computer chose, you will either win, lose, or the round will be a draw. \n>The 3 objects are ROCK(1), PAPER(2), and SCISSORS(3). \n>The relationship between the objects is that: ROCK BEATS SCISSORS,  PAPER BEATS ROCK, and SCISSORS BEAT PAPER. If both you and the computer chose the same object, it is a draw. \n>If you chose to end the game, you may exit(4). In the end, the total number of wins from both players will be summed to determine the ultimate winner."<<endl;
  cout<<endl<<"press enter to play"<<endl;
  cin.get();

  while(human_choice!=4){
    cout<<"menu"<<endl;
    cout<<"(1) rock"<<endl;
    cout<<"(2) paper"<<endl;
    cout<<"(3) scissors"<<endl;
    cout<<"(4) exit"<<endl<<endl;

    cout<<"Enter:";
    cin>>human_choice;
    while(human_choice<1||human_choice>4){
      cout<<"Please type a valid command: ";
      cin>>human_choice;
    }

    //r=1, p=2, s=3
    if(human_choice!=4){
    computer_choice=rand()%3+1;
    rounds++;
    cout<<endl<<object[human_choice]<<" vs "<<object[computer_choice]<<endl;
    }
    if(human_choice==computer_choice){
      cout<<"It was a draw."<<endl<<endl;
    }
    if((human_choice==ROCK&&computer_choice==SCISSORS)|| (human_choice==PAPER&&computer_choice==ROCK)|| (human_choice==SCISSORS&&computer_choice==PAPER))
    {cout<<"You win!"<<endl<<endl; human_wins++;}
    if((human_choice==ROCK&&computer_choice==PAPER)|| (human_choice==PAPER&&computer_choice==SCISSORS)|| (human_choice==SCISSORS&&computer_choice==ROCK))
    {cout<<"Computer wins. Better luck next time."<<endl<<endl; computer_wins++;}

  }

  cout<<endl;
  cout<<"# of rounds: "<<rounds<<endl;
  cout<<"human wins: "<<human_wins<<endl;
  cout<<"computer wins: "<<computer_wins<<endl;
  if(human_wins>computer_wins){cout<<"You won!"<<endl;}
  else if(human_wins<computer_wins){cout<<"The computer won."<<endl;}
  else{cout<<"It's a draw."<<endl;}
  cout<<endl<<"Thank you for playing rock-paper-scissors!"<<endl;
}

