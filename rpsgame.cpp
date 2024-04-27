#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {

    int playerScore = 0;
    int opponentScore = 0;
    string player = "";
    string opponent = "";
    string options[] = {"rock","paper","scissor"};

    srand( (unsigned int) time(NULL));
   

    while(true) {
        cout << "choose between rock , paper or scissor : ";
        getline(cin,player);

        if(player != "rock"  && player != "paper" && player != "scissor" ) {
             break;
        }
       
        opponent = options[rand() % 3];

        cout << "Opponent select " << opponent << endl;

        if(player == opponent) {
            playerScore++;
            opponentScore++;
        }

        if(player == "rock") {
            if(opponent == "scissor")  playerScore++;
            else if (opponent == "paper") opponentScore++;
        }    

        if(player == "paper") {
            if(opponent == "scissor")  opponentScore++;
            else if (opponent == "rock") playerScore++;
        }

        if(player == "scissor") {
            if(opponent == "rock")  opponentScore++;
            else if (opponent == "paper") playerScore++;
        }

        cout << "PlayerScore " << playerScore <<endl;
        cout << "OpponentScore " << opponentScore << endl;
    }

    if(playerScore == opponentScore) {
        cout << "Player " << playerScore << " Opponent " << opponentScore << endl;
        cout << "match ties";
    } else if (playerScore > opponentScore) {
        cout << "Player " << playerScore << " Opponent " << opponentScore << endl;
        cout << "player win";
    } else {
        cout << "opponent win";
    }

    return 0;

    }