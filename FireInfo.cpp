#include "FireInfo.h"

// This is a default constructor
FireInfo::FireInfo() {
    acresBurned = 0;
    year = 0;
    county = "None";
    fatalities = 0;
    injuries = 0;
    structDamaged = 0;
    structDestroyed = 0;
    name = "None";
}

// This is a reference of the constructor.
FireInfo::FireInfo(int acresBurned, int year, string county,
    int fatalities, int injuries, int structDamaged,
    int structDestroyed, string name) {
    this->acresBurned = acresBurned;
    this->year = year;
    this->county = county;
    this->fatalities = fatalities;
    this->injuries = injuries;
    this->structDamaged = structDamaged;
    this->structDestroyed = structDestroyed;
    this->name = name;
}

// These are the list of get method and set method from the private members.
int FireInfo::getAcresBurned() const
{
    return acresBurned;
}

void FireInfo::setAcresBurned(int acresBurned)
{
    this->acresBurned = acresBurned;
}

int FireInfo::getYear() const
{
    return year;
}

void FireInfo::setYear(int year)
{
    this->year = year;
}

string FireInfo::getCounty() const
{
    return county;
}

void FireInfo::setCounty(string county)
{
    this->county = county;
}

int FireInfo::getFatalities() const
{
    return fatalities;
}


void FireInfo::setFatalities(int fatalities)
{
    this->fatalities = fatalities;
}

int FireInfo::getInjuries() const
{
    return injuries;
}

void FireInfo::setInjuries(int injuries)
{
    this->injuries = injuries;
}

int FireInfo::getStructDamaged() const
{
    return structDamaged;
}

void FireInfo::setStructDamaged(int structDamaged)
{
    this->structDamaged = structDamaged;
}

int FireInfo::getStructDestroyed() const
{
    return structDestroyed;
}

void FireInfo::setStructDestroyed(int structDestroyed)
{
    this->structDestroyed = structDestroyed;
}

string FireInfo::getName() const
{
    return name;
}

void FireInfo::setName(string name)
{
    this->name = name;
}

void FireInfo::sortByYear(const vector<FireInfo>& fires)
{
	vector<FireInfo> tempFires;
	tempFires.push_back(fires.at(0));
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).year == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).year >= tempFires.at(0).year) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).year < tempFires.at(u).year) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

// This is sorted by county in alphabetica order from A to Z.
void FireInfo::sortByCounty(const vector<FireInfo>& fires)
{
	vector<FireInfo> tempFires;
	int j = 0;
	int k;
	int key;
	FireInfo temp;
	tempFires = fires;
	
		for (unsigned int i = 0; i < fires.size(); i++) {
			temp = tempFires.at(i);
			j = i - 1;
			while (j >= 0 && tempFires[j].county.substr(0,5) > temp.county.substr(0, 5)) {
				tempFires[j + 1] = tempFires[j];
				j--;
			}
			tempFires[j + 1] = temp;

		}


	printVector(tempFires);
}

// These are the list of sort method
// This method orders fatalities in ascendent
void FireInfo::sortByFatalities(const vector<FireInfo>& fires)
{

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).fatalities == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).fatalities >= tempFires.at(0).fatalities) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).fatalities < tempFires.at(u).fatalities) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

// This method orders injuries in ascendent
void FireInfo::sortByInjuries(const vector<FireInfo>& fires)
{

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).injuries == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).injuries >= tempFires.at(0).injuries) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).injuries < tempFires.at(u).injuries) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

// This method orders damage in ascendent
void FireInfo::sortByDamaged(const vector<FireInfo>& fires)
{

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).structDamaged == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).structDamaged >= tempFires.at(0).structDamaged) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).structDamaged < tempFires.at(u).structDamaged) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

// This method orders destroy in ascendent
void FireInfo::sortByDestroyed(const vector<FireInfo>& fires)
{

	vector<FireInfo> tempFires;
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).structDestroyed == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).structDestroyed >= tempFires.at(0).structDestroyed) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).structDestroyed < tempFires.at(u).structDestroyed) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}

void FireInfo::sortByAcresBurned(const vector<FireInfo>& fires)
{
	vector<FireInfo> tempFires;
	tempFires.resize(1);

	//tempFires.push_back(fires.at(0));
	for (unsigned int i = 0; i < fires.size(); i++) {
		if (fires.at(i).acresBurned == 0) {
			tempFires.push_back(fires.at(i));
		}
		else if (fires.at(i).acresBurned >= tempFires.at(0).acresBurned) {
			tempFires.insert(tempFires.begin(), fires.at(i));
		}
		else {
			int u = 1;
			while (fires.at(i).acresBurned < tempFires.at(u).acresBurned) {
				u++;
			}
			tempFires.insert(tempFires.begin() + u, fires.at(i));
		}
	}
	printVector(tempFires);
}



// This prints out a column and row of data
void FireInfo::printVector(const vector<FireInfo>& tempFires)
{
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
	cout << endl;
	cout << "acresBurned" << "\t|";
	cout << "year" << "\t|\t";
	cout << "county  \t|";
	cout << "fatalities" << "\t|";
	cout << "     injuries " << "\t|";
	cout << "  buildings   \t|";
	cout << "  buildings \t|  ";
	cout << " type of fire" << endl;
	cout << "\t\t|\t|\t\t\t|\t\t|\t\t|   damaged\t|  destroyed\t|\t" << endl;
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
	for (unsigned int i = 0; i < tempFires.size(); i++) {
		cout << tempFires.at(i).acresBurned << "\t\t|";
		cout << tempFires.at(i).year << "\t|\t";
		// This makes county to have 16 elements. 
		cout << tempFires.at(i).county;
		for (int j = 0; j < 16; j++) {
			if (j > tempFires.at(i).county.size()) {
				cout << " ";
			}
		}
		cout << "|\t";
		cout << tempFires.at(i).fatalities << "\t|\t";
		cout << tempFires.at(i).injuries << "\t|\t";
		cout << tempFires.at(i).structDamaged << "\t|\t";
		cout << tempFires.at(i).structDestroyed << "\t|\t";
		cout << tempFires.at(i).name << endl;
	}
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
}

// This creates a vec to hold fire information.
void FireInfo::createVec(ifstream& file, vector<FireInfo>& fires)
{

	//Creates a vector of struct FireInfo items
	//@param is the csv file from which we will read and the vector of FireInfo

	if (!file.is_open()) {
		cout << "Could not open file numFile.txt." << endl;
		cout << 1; // 1 indicates error

	}

	string acresBurned, year, county, fatalities, injuries, structDamaged, structDestroyed, name;
	int ab, yr, fa, in, sdm, sdy;//Abbreviated from the strings above. strings must be converted to ints
	int i;
	FireInfo fireItem;


	while (file.good()) {
		//Reads in all values as string
		//Conversion from string to int done through stringstream
		//Columns seperated by delimeter ',' , rows separated by delimeter '\n'
		getline(file, acresBurned, ',');
		ab = strToInt(acresBurned);
		getline(file, year, ',');
		yr = strToInt(year);
		getline(file, county, ',');
		// These reads the entire line of each row and column
		getline(file, fatalities, ',');
		fa = strToInt(fatalities);
		getline(file, injuries, ',');
		in = strToInt(injuries);
		getline(file, structDamaged, ',');
		sdm = strToInt(structDamaged);
		getline(file, structDestroyed, ',');
		sdy = strToInt(structDestroyed);
		getline(file, name, '\n');

		fireItem.acresBurned = ab;
		fireItem.year = yr;
		fireItem.county = county;
		fireItem.fatalities = fa;
		fireItem.injuries = in;
		fireItem.structDamaged = sdm;
		fireItem.structDestroyed = sdy;
		fireItem.name = name;

		fires.push_back(fireItem);

	}
}

// This method converts from string to integer.
int FireInfo::strToInt(string s)
{
	//Turns the given string into an int
	//@param string read in from the file
	//@return is the int converted from @param
	int x;
	stringstream sti(s);
	sti >> x;
	return x;
}

// This searches a county name to display a list of them. 
void FireInfo::searchCounty(ifstream& files, const vector<FireInfo> fires)
{
	string name;
	string option;
	int i = 0;
	int stop = 0;

	// I need cin.ignore() to make getline(cin, name) to work.
	// This checks for unncessary typing.

	cout << "Do you want to see the list of county for search?" << endl;
	cout << "Type yes if you want to see or anything to leave this option." << endl;

	cin >> option;

	if (option == "yes") {
		listOfCounty();
	}

	cin.ignore();
	cout << "\nWhat county are you searching for?";
	cout << " Example:Los Angeles, Riverside, San Diego, Orange, etc..." << endl;


	getline(cin, name);



	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
	cout << endl;
	cout << "acresBurned" << "\t|";
	cout << "year" << "\t|\t";
	cout << "county  \t|";
	cout << "fatalities" << "\t|";
	cout << "     injuries " << "\t|";
	cout << "  buildings   \t|";
	cout << "  buildings \t|  ";
	cout << " type of fire" << endl;
	cout << "\t\t|\t|\t\t\t|\t\t|\t\t|   damaged\t|  destroyed\t|\t" << endl;
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;
	for (unsigned int i = 0; i < fires.size(); i++) {



		if (name == fires.at(i).county) {
			stop = 1;
			cout << fires.at(i).acresBurned << "\t\t|";
			cout << fires.at(i).year << "\t|\t";
			// This makes county to have 16 elements. 
			cout << fires.at(i).county;
			for (int j = 0; j < 16; j++) {
				if (j > fires.at(i).county.size()) {
					cout << " ";
				}
			}
			cout << "|\t";
			cout << fires.at(i).fatalities << "\t|\t";
			cout << fires.at(i).injuries << "\t|\t";
			cout << fires.at(i).structDamaged << "\t|\t";
			cout << fires.at(i).structDestroyed << "\t|\t";
			cout << fires.at(i).name << endl;
		}

		if (stop == 0 && i == fires.size() - 1) {
			cout << "\nYou typed the incorrect county name." << endl;
			cout << "Go back using the menu to search your county." << endl;
		}

	}
	cout << "____________________________________________";
	cout << "____________________________________________";
	cout << "__________________________________________________" << endl;




	cout << "The list had shown " << stop << endl;
	cout << endl;
}

// This method shows all the county in California. 
void FireInfo::listOfCounty()
{
	cout << "Alameda\nAlpine\nAmador\nButte\nCalaveras\nColusa"
		<< "Contra Costa\nDel Norte\nEl Dorado\nFresno\nGlenn\nHumboldt"
		<< "\nImperial\nInyo\nKern\nKings\nLake\nLassen\nLos Angeles\nMadera"
		<< "\nMarin\nMariposa\nMendocino\nMerced\nModoc\nMono\nMonterey"
		<< "\nNapa\nNevada\nOrange\nPlacer\nPlumas\nRiverside\nSacramento"
		<< "\nSan Benito\nSan Bernardino\nSan Diego\nSan Francisco\nSan Joaquin"
		<< "\nSan Luis Obispo\nSan Mateo\nSanta Barbara\nSanta Clara\nSanta Cruz\nShasta"
		<< "\nSierra\nSiskiyou\nSolano\nSonoma\nStanislaus\nSutter\nTehama\nTrinity"
		<< "\nTulare\nTuolumne\nVentura\nYolo\nYuba " << endl;
}
