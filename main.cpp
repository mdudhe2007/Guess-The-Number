#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int random_num = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

 cout << R"(

 ██████╗ ██╗   ██╗███████╗███████╗███████╗
██╔════╝ ██║   ██║██╔════╝██╔════╝██╔════╝
██║  ███╗██║   ██║█████╗  ███████╗███████╗
██║   ██║██║   ██║██╔══╝  ╚════██║╚════██║
╚██████╔╝╚██████╔╝███████╗███████║███████║
 ╚═════╝  ╚═════╝ ╚══════╝╚══════╝╚══════╝

            ████████╗██╗  ██╗███████╗
            ╚══██╔══╝██║  ██║██╔════╝
               ██║   ███████║█████╗
               ██║   ██╔══██║██╔══╝
               ██║   ██║  ██║███████╗
               ╚═╝   ╚═╝  ╚═╝╚══════╝

███╗   ██╗██╗   ██╗███╗   ███╗██████╗ ███████╗██████╗
████╗  ██║██║   ██║████╗ ████║██╔══██╗██╔════╝██╔══██╗
██╔██╗ ██║██║   ██║██╔████╔██║██████╔╝█████╗  ██████╔╝
██║╚██╗██║██║   ██║██║╚██╔╝██║██╔══██╗██╔══╝  ██╔══██╗
██║ ╚████║╚██████╔╝██║ ╚═╝ ██║██████╔╝███████╗██║  ██║
╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝

)";

    cout << "I am thinking of a number between 1 and 100.\n\n";

    do {
        cout << "Enter your guess: ";

        if (!(cin >> userGuess)) {
            cout << "Please enter a valid number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        attempts++;

        if (userGuess > random_num)
            cout << "Too high! Try a lower number.\n\n";
        else if (userGuess < random_num)
            cout << "Too low! Try a higher number.\n\n";
        else {
            cout << "\n🎉 Congratulations! You guessed the correct number!\n";
            cout << "The number was " << random_num << ".\n";
            cout << "Attempts: " << attempts << "\n";
        }

    } while (userGuess != random_num);

    return 0;
}
