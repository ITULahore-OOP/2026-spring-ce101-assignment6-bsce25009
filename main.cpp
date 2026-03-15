#include "Guild.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include <iostream>

using namespace std;

int main()
{
    string guildName;
    cout << "Enter Guild Name: ";
    getline(cin, guildName);

    Guild myGuild(guildName);

    int choice;

    do
    {
        cout << "\n===== Guild Management Menu ====="<<endl;
        cout << "1. Add Warrior"<<endl;
        cout << "2. Add Knight" << endl;
        cout << "3. Add Spellblade" << endl;
        cout << "4. Display Guild Members" << endl;
        cout << "5. Display Guild Statistics" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;
            int health, power, armor;

            cout << "Enter Warrior Name: ";
            cin >> name;
            cout << "Health: ";
            cin >> health;
            cout << "Power: ";
            cin >> power;
            cout << "Armor Rating: ";
            cin >> armor;

            Hero* w = new Warrior(name, health, power, armor);
            myGuild += w;

            cout << "Warrior added successfully!" << endl;
        }

        else if (choice == 2)
        {
            string name;
            int health, power, armor, charge;

            cout << "Enter Knight Name: ";
            cin >> name;
            cout << "Health: ";
            cin >> health;
            cout << "Power: ";
            cin >> power;
            cout << "Armor Rating: ";
            cin >> armor;
            cout << "Charge Bonus: ";
            cin >> charge;

            Hero* k = new Knight(name, health, power, armor, charge);
            myGuild += k;

            cout << "Knight added successfully!" << endl;
        }

        else if (choice == 3)
        {
            string name;
            int health, power, armor, spell;

            cout << "Enter Spellblade Name: ";
            cin >> name;
            cout << "Health: ";
            cin >> health;
            cout << "Power: ";
            cin >> power;
            cout << "Armor Rating: ";
            cin >> armor;
            cout << "Spell Power: ";
            cin >> spell;

            Hero* s = new Spellblade(name, health, power, armor, spell);
            myGuild += s;

            cout << "Spellblade added successfully!" << endl;
        }

        else if (choice == 4)
        {
            cout << "\n";
            cout << myGuild;
        }

        else if (choice == 5)
        {
            myGuild.displayGuildStats();
        }

        else if (choice == 6)
        {
            cout << "Exiting program..." << endl;
        }

        else
        {
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}