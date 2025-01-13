#include<iostream>

using namespace std;

class Guesser{
   // public:
    int guessedNum;
    public:
    int takeguesserinput(){
        int x;
        cout<<"Give the number for the guesser : "<<endl;
        cin>>x;
        guessedNum =x;
        return guessedNum;
    }

};
class Player{
    int PlayerNum;
    public:
    int takePlayerinput(){
        int p;
        cin>>p;
        PlayerNum=p;
        return PlayerNum;
    }
};
class Umpire{
    public:
    int g;
    int P1num;
    int P2num;
    int P3num;
    void GettheNumberfromGuesser(){
        Guesser  g1;
        g = g1.takeguesserinput();
    }
    void GettheNumberfromPlayer(){
        Player p1;
        Player p2;
        Player p3;
        cout<<"give the number for the player 1: "<<endl;
        P1num = p1.takePlayerinput();
        cout<<"give the number for the player 2: "<<endl;
        P2num = p2.takePlayerinput();
        cout<<"give the number for the player 3: "<<endl;
        P3num = p3.takePlayerinput();

    }
    void PrintTheResult(){
        if(g==P1num){
            //p1 won what about p2 and p3
            if(g==P2num){
                //p1 and p2 won what about p3
                if(g==P3num){
                    cout<<"all player won the game"<<endl;
                }else{
                    cout<<"player1 and player2 has won the game"<<endl;

                }
            }else{
                //p1 -> won p2-> lost what about p3
                if(g==P3num){
                    cout<<"player 1 and player 3 has won the game"<<endl;

                }else{
                    cout<<"player1 has won the game "<<endl;
                }
            }
        }else if(g==P2num){
            //p1 ->lost p2->won what about p3
            if(P3num==g)
                //p1 has lost p2 and p3 ->won
                cout<<"the player2 and player3 has won the game "<<endl;    
            else
                cout<<"the player 2 has won the game"<<endl;
        }else if(g==P3num){
            //p1 and p3 lost ,p3 ->won
            cout<<"the Player 3 has won the game "<<endl;
        }else{
            cout<<"all the player has lost the game "<<endl;
        }
    }
};
int main(){
    cout<<"         Lets start the Game          "<<endl;
    //create a umpire object
    Umpire u;
    u.GettheNumberfromGuesser();
    u.GettheNumberfromPlayer();
    u.PrintTheResult();
    cout << "      End Game       "<<endl;
    return 0;
}
