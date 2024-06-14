#include <iostream>
#include <ctime>


char getUserChoice();
char getComputerChoice();
void winner(char user, char computer);

int userPoints = 0;
int compPoints = 0;
int n;

int main(){

    srand(time(0));
    char user, computer;
    std::cout << "****** ROCK PAPER SCISSORS GAME *******\n";
    std::cout << "Enter the winning score: ";
    std::cin >> n;
    do{
        user = getUserChoice();
    computer = getComputerChoice();
    winner(user, computer);}while(userPoints <n && compPoints < n); //user and computer arguments used in this function should be something
                                                                    //in the main function. 
    if(userPoints == n){
        std::cout << "***CONGO! You won this game.***";
    }
    else{
        std::cout << "***BETTER LUCK NEXT TIME! You lose this game.***";
    }
                           

    return 0;
}

char getUserChoice(){
    char user;

    do{
        std::cout << "Choose 'r' or 'R' for ROCK\nChoose 'p' or 'P' for PAPER\nChoose 's' or 'S' for SCISSORS\n";
        std::cin >> user;
    }while(user != 'r'&& user !='R'&& user !='s'&& user !='S'&&user !='p'&&user !='P');
        
    switch(user){
        case 'r': case 'R': 
            std::cout << "You chose ROCK\n";
            break;
        case 's': case 'S': 
            std::cout << "You chose SCISSORS\n";
            break;
        case 'p': case 'P':
            std::cout << "You chose PAPER\n";
            break;
    }
    return user; // Return used so that the function gives some output...
}

char getComputerChoice(){
    char computer;
    int num = rand()%3 +1;
    switch(num){
        case 1: computer = 'R';
                std::cout << "Computer chose ROCK\n";
                break;
        case 2: computer = 'P';
                std::cout << "Computer chose PAPER\n";
                break;
        case 3: computer = 'S';
                std::cout << "Computer chose SCISSORS\n";
                break;
    }

    return computer;
}

void winner(char user, char computer){
    switch(user){
            case 'r': case 'R':
                if(computer == 'R'){
                    std::cout << "It is a Tie!\n";
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                else if(computer == 'P'){
                    std::cout << "You Lose!\n";
                    compPoints++;
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                else {
                    std::cout << "You Won!\n";
                    userPoints++;
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                break;
            case 'S': case 's':
                if(computer == 'R'){
                    std::cout << "You Lose!\n";
                    compPoints++;
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                else if(computer == 'P'){
                    std::cout << "You Win!\n";
                    userPoints++;
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                else {
                    std::cout << "It is a Tie!\n";
                }
                break;
            case 'p': case 'P':
                if(computer == 'R'){
                    std::cout << "You Win!\n";
                    userPoints++;
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                else if(computer == 'P'){
                    std::cout << "It is a Tie!\n";
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                else {
                    std::cout << "You Lose!\n";
                    compPoints++;
                    std:: cout << "Your score: " << userPoints << " Comp score: " << compPoints << "\n";
                }
                break;
        }


}