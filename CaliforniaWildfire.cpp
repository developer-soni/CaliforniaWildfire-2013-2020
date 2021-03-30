// California Wildfire.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
#include "FireInfo.h"


// Function prototypes
void menuMain();
void menuSortingList(vector<FireInfo>&, FireInfo&);

// This method prints out the main menu.
int main() {
	// This calls out the function of the main menu
	menuMain();
}

// This method prints out the sub menu.
void menuMain() {
	int option;
	ifstream file;
	FireInfo firesInfo;
    
	file.open("final_fires_copy.csv");

	vector<FireInfo> fires;

	firesInfo.createVec(file, fires);

	do {
		cout << "\n************************************************"
			<< "\n*             MENU-Displaying text              *"
			<< "\n* 1. Calling sortingList()                      *"
			<< "\n* 2. Calling SearchCounty()                     *"
			<< "\n* 3. Quit                                       *"
			<< "\n*************************************************";
		cout << "\nSelect an option (1, 2, or 3): ";
		cin >> option;

		switch (option) {
		case 1:
			cout << "Calling MenuSortingList()" << endl;
			menuSortingList(fires, firesInfo);
			break;
		case 2:
			cout << "Calling searchCounty()" << endl;
			firesInfo.searchCounty(file, fires);

			break;
		case 3:
			cout << "Quit" << endl;
			file.close();
			break;
		default:
			cout << "\nWRONG OPTION!\n" << endl;
		}
	} while (option != 3);
}

// This prints out the list of sorting list functions.
void menuSortingList(vector<FireInfo>& fires, FireInfo& firesInfo) {
	int option;

	do {
		cout << "\n*************************************************"
			<< "\n*             MENU-display sorting              *"
			<< "\n* 1. Print vector of fire                       *"
			<< "\n* 2. archive year                               *"
			<< "\n* 3. # of acres burned                          *"
			<< "\n* 4. # of people death(fatalities)              *"
			<< "\n* 5. # of people injuried                       *"
			<< "\n* 6. # of structures damaged                    *"
			<< "\n* 7. # of structures destroyed                  *"
			<< "\n* 8. County in alphabetical order               *"
			<< "\n* 9. Quit                                       *"
			<< "\n*************************************************";
		cout << "\nSelect an option (1, 2, 3, 4, 5, 6, 7, or 8): ";
		cin >> option;

		switch (option) { // These list of cases call out the firesInfo's function from constructor.
		case 1:
			cout << "Calling printVector()" << endl;
			firesInfo.printVector(fires);
			break;
		case 2:
			cout << "Calling archive year " << endl;
			firesInfo.sortByYear(fires);
			break;
		case 3:
			cout << "Calling # of acres burned" << endl;
			firesInfo.sortByAcresBurned(fires);
			break;
		case 4:
			cout << "Calling # of people death(fatalities) " << endl;
			firesInfo.sortByFatalities(fires);
			break;
		case 5:
			cout << "Calling # of people injuried " << endl;
			firesInfo.sortByInjuries(fires);
			break;
		case 6:
			cout << "Calling # of structures damaged " << endl;
			firesInfo.sortByDamaged(fires);
			break;
		case 7:
			cout << "Calling # of structures destroyed " << endl;
			firesInfo.sortByDestroyed(fires);
			break;
		case 8:
			cout << "Calling county in alphabetical order" << endl;
			firesInfo.sortByCounty(fires);
			break;
		case 9:
			cout << "Go back to main menu" << endl;
			break;
		default:
			cout << "\nWRONG OPTION!\n" << endl;
		}
	} while (option != 9); // Type 8 on console to go to the main menu.
}


 
