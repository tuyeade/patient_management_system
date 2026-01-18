#include <iostream>
#include "../include/login.h"      // Login functions
#include "../include/patient.h"    // Patient management functions
#include "../include/routine.h"    // Daily routine functions

using namespace std;
int main() {
    // 1. Call login first
    if (!login())  // If login fails, exit program
        return 0;

    // 2. Menu loop
    int choice;
    do {
        cout << "\n===== PATIENT MANAGEMENT SYSTEM =====\n";
        cout << "1. Patient Menu\n";
        cout << "2. Daily Routine Menu\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // 3. Call functions based on user choice
        if (choice == 1)
            patientMenu();   // Function in patient.cpp
        else if (choice == 2)
            routineMenu();   // Function in routine.cpp
        else if (choice == 3)
            cout << "Exiting program. Goodbye!\n";
        else
            cout << "Invalid choice! Try again.\n";

    } while (choice != 3);  // Repeat until user exits

    return 0;
}
