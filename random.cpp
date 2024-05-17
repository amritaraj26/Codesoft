#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    
    cout<<"\n\t\t\t HELLO! Welcome to  Number Guessing Game!"<<endl;
    cout<<"you have to  guess a number between 1 and 100. you will have limited choices based on the level you choose.Good luck! "<<endl;
    while(true){
        cout<<"\n Enter the difficulty level: \n"<<endl;
        cout<<"1 for easy!\t";
        cout<<"2 for medium !\t";
        cout<<"3 fordifficult !\t";
        cout<<"0 for ending the game !\n"<<endl;

        int difficultychoice;
        cout<<"Enter the number:";
        cin>>difficultychoice;
        srand(time(0));
        int secretNumber = 1+ (rand()%100);
        int playerchoice;
        if(difficultychoice==1){
            cout<<"\n you have 10 choices for finding the secret number between 1 and 100.";
            int choiceLeft=10;
            for(int i=1;i<=10;i++){
                cout<<"\n\n Enter the number:";
                cin>>playerchoice;
                if(playerchoice==secretNumber){
                    cout<<"Well played ! Congrate! you won,"<<playerchoice<<" is the secret number"<<endl;
                    cout<<"\t\t\t Thanks for playing... "<<endl;
                    cout<<"play the game again with us ! \n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope,"<<playerchoice<<"is not the right number"<<endl;
            
            if(playerchoice>secretNumber){
                cout<<"The secret number is smaller than the number you have choosen"<<endl;
            }
            else{
             cout<<"The secret number is greater than the number you have choosen"<<endl;   
            }
            choiceLeft--;
            cout<< choiceLeft <<" choiceLeft."<<endl;
            if(choiceLeft==0){
                cout<<"you couldn't find the secret number ,it was"<<secretNumber<<",you lose!!\n\n";
                cout<<"play the game again to Win!!\n\n";
            }
                    
                }
            }

        }
        else if(difficultychoice==2){
            cout<<"\n you have 7 choices for finding the secret number between 1 and 100.";
            int choiceLeft=7;
            for(int i=1;i<=7;i++){
                cout<<"\n\n Enter the number:";
                cin>>playerchoice;
                if(playerchoice==secretNumber){
                    cout<<"Well played !you won,"<<playerchoice<<" is the secret number"<<endl;
                    cout<<"\t\t\t Thanks for playing... "<<endl;
                    cout<<"play the game again with us ! \n\n"<<endl;
                    break;
                }
                else{
                    cout<<"Nope,"<<playerchoice<<"is not the right number"<<endl;
            
            if(playerchoice>secretNumber){
                cout<<"The secret number is smaller than the number you have choosen"<<endl;
            }
            else{
             cout<<"The secret number is greater than the number you have choosen"<<endl;   
            }
            choiceLeft--;
            cout<< choiceLeft <<" choiceLeft."<<endl;
            if(choiceLeft==0){
                cout<<"you couldn't find the secret number ,it was"<<secretNumber<<",you lose!!\n\n";
                cout<<"play the game again to Win!!\n\n";
            }
                    
                }
            }

        
        }
        else if(difficultychoice==3){
            cout<<"\n you have 5 choices for finding the secret number between 1 and 100.";
            int choiceLeft=5;
            for(int i=1;i<=5;i++){
                cout<<"\n\n Enter the number:";
                cin>>playerchoice;
                if(playerchoice==secretNumber){
                    cout<<"Well played !you won,"<<playerchoice<<" is the secret number"<<endl;
                    cout<<"\t\t\t Thanks for playing... "<<endl;
                    cout<<"play the game again with us ! \n\n"<<endl;
                    break;
                }
                else{
                    cout<<"No It is wrong,"<<playerchoice<<" not the right number"<<endl;
            
            if(playerchoice>secretNumber){
                cout<<"The secret number is smaller than the number you have choosen"<<endl;
            }
            else{
             cout<<"The secret number is greater than the number you have choosen"<<endl;   
            }
            choiceLeft--;
            cout<< choiceLeft <<" choiceLeft."<<endl;
            if(choiceLeft==0){
                cout<<"you couldn't find the secret number ,it was"<<secretNumber<<",you lose!!\n\n";
                cout<<"play the game again to Win!!\n\n";
            }
                    
                }
            }

        
        }
        else if(difficultychoice==0){
            exit(0);
        }
        else{
            cout<<" You Enter Wrong choice, pleaseEnter a valid choice to play the game!(0,1,2)"<<endl;
            }
        
    }

    return 0;
}