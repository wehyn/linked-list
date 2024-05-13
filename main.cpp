#include <iostream>
#include "data.h"
#include <cctype>   
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

    int main() {
        LinkedList list;
        int choice, position, data;

        do {
            cout << "\nLIST OPERATIONS:\n";
            cout << "1. Insert at beginning\n";
            cout << "2. Insert at end\n";
            cout << "3. Insert at position\n";
            cout << "4. Remove at position\n";
            cout << "5. Search\n";
            cout << "6. Display list\n";
            cout << "7. Get size\n";
            cout << "8. Check if list is empty\n";
            cout << "9. Check if list is full\n";
            cout << "0. Exit\n";

            string s_choice;
         
            do {
                cout << "\nEnter your choice: ";
                getline(cin, s_choice);

                if (s_choice.length() != 1 || !all_of(s_choice.begin(), s_choice.end(), ::isdigit)) {
                    cout << "\x1b[31m\nInvalid Book ID! Please enter a 6-digit integer.\x1b[0m" << endl;
                    cin.clear();
                }
            } while (s_choice.length() != 1 || !all_of(s_choice.begin(), s_choice.end(), ::isdigit));

            choice = stoi(s_choice);

            switch (choice) {
            case 1:
                cout << "Enter data to be inserted at beginning: ";
                cin >> data;
                list.insertAtBeginning(data);
                break;

            case 2:
                cout << "Enter data to be inserted at end: ";
                cin >> data;
                list.insert(data);
                break;

            case 3:
                cout << "Enter data to be inserted: ";
                cin >> data;
                cout << "Enter position to insert data: ";
                cin >> position;
                list.insertAfter(data, position);
                break;

            case 4:
                cout << "Enter position of data to be removed: ";
                cin >> position;
                list.removeAt(position);
                break;

            case 5:
                cout << "Enter data to search: ";
                cin >> data;
                if (list.search(data))
                    cout << "Element found in the list\n";
                else
                    cout << "Element not found in the list\n";
                break;

            case 6:
                cout << "Elements in the list are: ";
                list.printList();
                break;

            case 7:
                cout << "Size of the list is: " << list.getSize() << endl;
                break;

            case 8:
                if (list.isEmpty())
                    cout << "List is empty\n";
                else
                    cout << "List is not empty\n";
                break;

            case 9:
                if (list.isFull())
                    cout << "List is full\n";
                else
                    cout << "List is not full\n";
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice, please try again\n";
                break;
            }
        } while (choice != 0);

        return 0;
    }
