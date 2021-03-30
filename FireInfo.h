
#ifndef FIREINFOH
#define FIREINFOH

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
class FireInfo{

private:
	int acresBurned;
	int year;
	string county;
	int fatalities;
	int injuries;
	int structDamaged;
	int structDestroyed;
	string name;
public:
    FireInfo();
    FireInfo(int acresBurned, int year, string county,
    int fatalities, int injuries,int structDamaged,
    int structDestroyed, string name);

    int getAcresBurned() const;
    void setAcresBurned(int acresBurned);

    int getYear() const;
    void setYear(int year);

    string getCounty() const;
    void setCounty(string county);

    int getFatalities() const;
    void setFatalities(int fatalities);

    int getInjuries() const;
    void setInjuries(int injuries);

    int getStructDamaged() const;
    void setStructDamaged(int structDamaged);

    int getStructDestroyed() const;
    void setStructDestroyed(int structDestroyed);

    string getName() const;
    void setName(string name);

    // Search County function prototype
    void searchCounty(ifstream&, const vector<FireInfo>);
    void listOfCounty();

    // Sorting function prototypes
    void sortByFatalities(const vector<FireInfo>&);
    void sortByInjuries(const vector<FireInfo>&);
    void sortByDamaged(const vector<FireInfo>&);
    void sortByDestroyed(const vector<FireInfo>&);
    void sortByAcresBurned(const vector<FireInfo>&);
    void sortByYear(const vector<FireInfo>&);
    void sortByCounty(const vector<FireInfo>&);
    void printVector(const vector<FireInfo>&);

    void createVec(ifstream&, vector<FireInfo>&);
    int strToInt(string);

};

#endif
