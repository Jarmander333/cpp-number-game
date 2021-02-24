#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

    int number, guess, null;

    srand (time(NULL));

    number = rand() % 1000 + 1;

    std::cout << "Guess the number between 1-1000!";

    Guess:

    std::cin >> guess;

    if (guess > number) {
        std::cout << "The number is lower! \n\n";
        goto Guess;
    } else if (guess < number) {
        std::cout << "The number is higher! \n\n";
        goto Guess;
    } else if (guess == number){
        std::cout << "You got it right!  The number was " << number << "!";
        std::cout << "Press any key, and then Enter to exit";
        std::cin >> null;
        return 0;
    } else {
        std::cout << "That is not a number.  Enter a number \n\n";
        goto Guess;

    }
}
