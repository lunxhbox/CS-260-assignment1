#include <iostream>
#include <map>

int main() {
    std::map<char, int> marbles;

    // User input for adding marbles to the bag
    std::cout << "Enter the quantity for each marble (R G B Y C): ";
    for (const char& color : {'R', 'G', 'B', 'Y', 'C'}) {
        int quantity;
        std::cin >> quantity;
        marbles[color] = quantity;
    }

    // Display marbles in the bag
    std::cout << "\nMarbles in the bag:\n";
    for (const auto& pair : marbles) {
        std::cout << pair.first << " = " << pair.second << "\n";
    }

    // User input for removing marbles from the bag
    char choice;
    std::cout << "\nEnter the marble you want to take out: ";
    std::cin >> choice;

    // Check if the chosen marble is in the bag
    if (marbles.find(choice) != marbles.end() && marbles[choice] > 0) {
        marbles[choice]--;
        std::cout << "You took out a " << choice << " marble.\n";
    } else {
        std::cout << "There are no " << choice << " marbles in the bag.\n";
    }

    // Display marbles in the bag after removal
    std::cout << "\nMarbles in the bag:\n";
    for (const auto& pair : marbles) {
        std::cout << pair.first << " = " << pair.second << "\n";
    }

    return 0;
}
