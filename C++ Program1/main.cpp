// Thomas Martinez
// Entering gallons and miles then averaging them out

#include <iostream>
#include <string>

using namespace std;

int main() {

	// Giving names to variables 
	double gallonUsed, milesDriven, sumOfGalMil, sumOfAll;
	int counter;

	// Setting counter and sumOfAll to 0 (This is so we can give these variables increments)
	counter = 0;
	sumOfAll = 0;

	// Setting up do while loop so we can get the the inputs from the user 
	do {

		cout << "\nEnter the gallon used  (-1 to end): ";
		cin >> gallonUsed;

		// If Else statement so we can loop the questions or end the program
		if (gallonUsed > -1) {
			cout << "\nEnter the miles driven: ";
			cin >> milesDriven;
			sumOfGalMil = milesDriven / gallonUsed;
			cout << "\nThe Miles / Gallon for this tank was " << sumOfGalMil << '\n';
			sumOfAll += sumOfGalMil;
			counter++;
		}
		else
			cout << "\nThe overall average Miles / Gallon was " << sumOfAll / counter << '\n';
		// This keeps the loop going until the user chooses -1
	} while (gallonUsed != -1);

	system("pause");

	return 0;
}