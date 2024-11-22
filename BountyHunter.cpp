#include <iostream>
#include <string>
#include "Tree.h"

using namespace std;

void printArt()
{

cout << " ######\n";                              
cout << " #     #  ####  #    # #    # ##### #   #  #     # #    # #     # #####\n";
cout << " #     # #    # #    # ##   #   #    # #   #     # #    # ##    #   # \n";
cout << " ######  #    # #    # # #  #   #     #    #     # #    # # #   #   #\n";  
cout << " #     # #    # #    # #  # #   #     #    ####### #    # #  #  #   #\n"; 
cout << " #     # #    # #    # #   ##   #     #    #     # #    # #   # #   #\n";
cout << " ######   ####   ####  #    #   #     #    #     # ###### #    #    #\n"; 
                                        
}

void displayMenu() {
    cout << "\n\n\nWelcome Bounty Hunter! \nWould you Like to get started?\n\n";
    cout << "1. Add Bounty\n";
    cout << "2. Display Bounties\n";
    cout << "3. Search for Bounty\n";
    cout << "4. Exit\n";
    cout << "\nChoose an option: ";
}

int main() {
    Tree bountyTree; // Create a new tree to hold bounties
    int choice;

    do {
        printArt();
        displayMenu(); // Display the menu
        cin >> choice;

        switch (choice) {               //Add Bounty
            case 1: {
                string name;
                int age;
                string eyeColor;
                string build;
                string city; 
                string bodyMark;

                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Eye Color: ";
                cin >> eyeColor;
                cout << "Enter Build: ";
                cin >> build;
                cout << "Enter any Body Mark: ";
                cin >> bodyMark;
                cout << "Enter City: ";
                cin >> city;
                

                // Create a new bounty and insert it into the tree
                Bounty newBounty(name, age, eyeColor, build, bodyMark, city);
                bountyTree.insert(newBounty);
                cout << "Bounty added!" << endl;
                break;
            }
            case 2:                            //Display Bounties
                cout << "Displaying all bounties:\n";
                bountyTree.displayInOrder(); // Display all bounties in-order
                break;
            
            case 3: {                           //Search for Bounty
                string name;
                cout << "Enter Name to Search: ";
                cin >> name;

                // Search for the bounty
                TreeNode* result = bountyTree.search(name);
                if (result) {
                    cout << "Bounty found: " << result->data << endl; // Display found bounty
                } else {
                    cout << "Bounty not found." << endl; // Handle not found case
                }
                break;
            }

            case 4:
                cout << "Thank You for choosing Bounty Hunt! " << endl;
                cout << "Have a nice day!!!!" << endl;
                break;            
                
             default:
                cout << "Invalid option. Please try again." << endl; // Handle invalid option
                break;
        }
    } while (choice != 4); // Loop until the user chooses to exit

    return 0; // Exit the program
}














/*
#include <iostream>
#include "Tree.h"
#include "Bounty.h"

using namespace std;

void printArt()
{

cout << " ######\n";                              
cout << " #     #  ####  #    # #    # ##### #   #  #     # #    # #     # #####\n";
cout << " #     # #    # #    # ##   #   #    # #   #     # #    # ##    #   # \n";
cout << " ######  #    # #    # # #  #   #     #    #     # #    # # #   #   #\n";  
cout << " #     # #    # #    # #  # #   #     #    ####### #    # #  #  #   #\n"; 
cout << " #     # #    # #    # #   ##   #     #    #     # #    # #   # #   #\n";
cout << " ######   ####   ####  #    #   #     #    #     # ###### #    #    #\n"; 
                                           
}

void displayMenu() {
    cout << "1. Add Bounty\n";
    cout << "2. Display Bounties\n";
    cout << "3. Search for Bounty\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    Tree bountyTree; // Create a new tree to hold bounties
    int choice;

    do {
        displayMenu(); // Display the menu
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                int age;
                string eyeColor;
                string build;
                string city; 
                string bodyMark;
                //should add if they are a high threat level
                //Wanted level(int 1-5(no unit)) or Bounty amount (How much money to reward for capture of criminal float $1.00-$1,000,000.00) to sort from 

                cout << "Enter Name: ";
                cin >> name;
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Eye Color: ";
                cin >> eyeColor;
                cout << "Enter Build: ";
                cin >> build;
                cout << "Enter any Body Mark: ";
                cin >> bodyMark;
                cout << "Enter City: ";
                cin >> city;

                // Create a new bounty and insert it into the tree
                Bounty newBounty(name, age, eyeColor, build,bodyMark,city);
                bountyTree.insert(newBounty);
                cout << "Bounty added!" << endl;
                break;
            }
            case 2:
                cout << "Displaying all bounties:\n";
                bountyTree.displayInOrder(); // Display all bounties in-order
                break;
            case 3: {
                string name;
                cout << "Enter Name to Search: ";
                cin >> name;

                // Search for the bounty
                TreeNode* result = bountyTree.search(name);
                if (result) {
                    cout << "Bounty found: " << result->data << endl; // Display found bounty
                } else {
                    cout << "Bounty not found." << endl; // Handle not found case
                }
                break;
            }
            case 4:
                cout << "Thank You for playing Bounty Hunt! " << endl;
                cout << "Have a nice day!!!!" << endl;
                break;            
                
            default:
                cout << "Invalid option. Please try again." << endl; // Handle invalid option
                break;
        }
    } while (choice != 4); // Loop until the user chooses to exit

    return 0; // Exit the program
}
*/