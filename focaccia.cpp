/**
 * focaccia.cpp
 *
 * <#Jialiang Wu#>
 * <#alfredwu@umich.edu#>
 *
 * EECS 183: Project 1
 * Fall 2023
 * 
 * Project UID: d435ced1b1ee1e06372665b53322301c67d2d4a0
 */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 0.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);



int main() {
    int people;
    cout << "How many people do you need to serve? ";
    cin >> people;
    cout << endl << endl;

	// Number of Facaccia Bread need prepared
	double numOfFocacciaBread; 

	// Number of flour bag to cook Facaccia Bread
	int numOfFlourInBag; 
	// 5 cups flour for one Facaccia Bread
	const double cupsOfFlour = 5.0; 
	// 20 cups in a 5 pound bag of flour
	const double cupsPerBagOfFlour = 20.0; 

	// Number of Yeast Package to cook Facaccia Bread
	int numOfYeastInPackage; 
	// 1.75 teaspoons yeast for one Facaccia Bread
	const double TeaspoonOfYeast = 1.75; 
	// 2.25 teaspoons of yeast per package
	const double teaspoonsPerPacket = 2.25; 

	// Number of Salt canister to cook Facaccia Bread
	int numOfSaltInCanister; 
	// grams of salt for one Facaccia Bread
	const double gramsOfSalt = 5 * 1.875; 
	// 30 grams of salt per canister
	const double gramsPerCanister = 30.0; 

	// number of olive oil bottle to cook Facaccia Bread
	int numOfOilInBottle; 
	// milliliters of olive oil for one Facaccia Bread
	double millilitersOfOil = 14.8 * 2; 
	// 500 milliliters of olive oil per bottle
	double millilitersPerBottle = 500.0; 

	// price of one bag of flour
	const double costOfPerFlourBag = 2.69; 
	// price of one package of yeast
	const double costOfYeastPackage = 0.40; 
	// price of one salt canister
	const double costOfSaltCanister = 0.49; 
	// price of one Olive Oil bottle
	const double costOfOilBottle = 6.39; 

	// total cost of buying ingredients.
	double totalCost; 

// Calculate the number of Focaccia Bread needed;
 //	Need to judge whether the number is greater than 1

	numOfFocacciaBread = static_cast<int>(ceil(people / 4.0));

	cout << "You need to make: "
		<< numOfFocacciaBread
		<< " "
		<< pluralize("loaf", "loaves", numOfFocacciaBread)
		<< " of focaccia"
		<< endl;

// Create a shopping list

	cout << "Shopping List for Focaccia Bread\n"
		<< "--------------------------------"
		<< endl;

	/*  Calculate number of each ingredient:
		bag of flour = 5 * number of Facaccia Bread / 20
		package of yeast = 1.75 * number of Facaccia Bread / 2.25
		canister of salt = 5 * 1.875 * number of Facaccia Bread / 30
		bottle of olive oil = 14.8 * 2 * number of Facaccia Bread / 500
	*/

	numOfFlourInBag = static_cast<int>(ceil(cupsOfFlour * numOfFocacciaBread / cupsPerBagOfFlour));
	numOfYeastInPackage = static_cast<int>(ceil(TeaspoonOfYeast * numOfFocacciaBread / teaspoonsPerPacket));
	numOfSaltInCanister = static_cast<int>(ceil(gramsOfSalt * numOfFocacciaBread / gramsPerCanister));
	numOfOilInBottle = static_cast<int>(ceil(millilitersOfOil * numOfFocacciaBread / millilitersPerBottle));

	cout << numOfFlourInBag
		<< " "
		<< pluralize("bag", "bags", numOfFlourInBag)
		<< " of flour"
		<< endl;

	cout << numOfYeastInPackage
		<< " "
		<< pluralize("package", "packages", numOfYeastInPackage)
		<< " of yeast"
		<< endl;

	cout << numOfSaltInCanister
		<< " "
		<< pluralize("canister", "canisters", numOfSaltInCanister)
		<< " of salt"
		<< endl;

	cout << numOfOilInBottle
		<< " "
		<< pluralize("bottle", "bottles", numOfOilInBottle)
		<< " of olive oil"
		<< endl;

	cout << endl;

	//  Calculate the total cost 
	totalCost = costOfPerFlourBag * numOfFlourInBag
		+ costOfYeastPackage * numOfYeastInPackage
		+ costOfSaltCanister * numOfSaltInCanister
		+ costOfOilBottle * numOfOilInBottle;

	//  Print the total cost

	cout << "Total expected cost of ingredients: $"
		<< totalCost
		<< endl;

	cout << endl;

	//  Print the greeting sentence

	cout << "Have a great Party!";


    return 0;
}

// ----------------------------------------------
// *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}
