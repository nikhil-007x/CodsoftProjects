#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int trials=5;
int user_guess;
int lowerrange;
int upperrange;
int random_num;

// Function prototypes
void showing_menu();
void random_num_generate();
void guess_the_number();
void restarting_game();

void guess_the_number(){

    cout<<"\t\t\t"<<" GUESS THE NUMBER -----> ";
    cin>>user_guess;
    --trials;
    if(trials==0){
        restarting_game();
    }

}

void restarting_game(){

    cout<<"\t\t\t    ######### GAME OVER #########"<<endl;
    int re_choice;
    cout<<"\t\t\t     FOR RESTARTING THE GAME PRESS ( 1 ) IF NOT THEN PRESS ( 0 ):"<<endl;
    cin>>re_choice;
    if(re_choice==1){
        trials=5;
        showing_menu();
    }
    else{
        cout<<"\t ###################3################################### GAME COMPLETEED ##################################################";
    }


}

void random_num_generate(){

    srand(time(0));
    random_num = lowerrange+(rand()%(upperrange-lowerrange+1));
    guess_the_number();

    while(trials!=0){

        if(user_guess==random_num){

            cout<<"||  \t\t\t\t\t\t\t\t\t\t\t\t\t   ||"<<endl;
            cout<<"\t\t\t\t ############ CONGRATULATION YOU HAVE WON !!! #############"<<endl;
            cout<<"||  \t\t\t\t\t\t\t\t\t\t\t\t\t   ||"<<endl;

            trials=0;
            restarting_game();
        }

        else if(user_guess<random_num){
            cout<<"\t\t ************** YOUR GUESSED NUMBER IS LOWER THAN THE RANDOM NUMBER***************  ";
            cout<<"\t\t\t TOTAL TRAILS = "<<trials<<endl<<endl;
            guess_the_number();
        }

        else if(user_guess>random_num){
            cout<<"\t\t ************** YOUR GUESSED NUMBER IS GREATER THAN THE RANDOM NUMBER***************  ";
            cout<<"\t\t\t TOTAL TRIALS = "<<trials<<endl<<endl;
            guess_the_number();
        }
    }
}

void showing_menu(){

    cout<<"\n\n";
    cout<<"------------------------------------------->||| NUMBER GUESSING GAME |||<-----------------------------------------------"<<endl<<endl;
    cout<<"\t\t"<<" YOU HAVE TOTAL 5 GUESSES "<<endl<<endl;
    cout<<"\t\t"<<"Enter Start Range For Number Guessing ---> ";
    cin>>lowerrange;
    cout<<"\t\t"<<"Enter End Range For Number Guessing -----> ";
    cin>>upperrange;
    cout<<"\n";
    random_num_generate();

}



int main(){

        showing_menu();

}
