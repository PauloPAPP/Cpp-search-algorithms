//Kenneth Stettler Joshua Heyel Paulo Piedade
// Lab 5 ECE-2161-001
//creating a function in which generates an array that is of whichever size the user likes
	//which allows greater variance in what is possible
#include <iostream>
#include <random>
#include <fstream>
#include "myheaders.h"
using namespace std;

void testFileGenerator() {
	long numInputs = 0;
	cout << "Enter the size number Array you would like to sort." << endl;
	cin >> numInputs;
	std::random_device rd;
	    std::mt19937 gen(rd());
	    std::uniform_int_distribution<int> dist(-MAXSIZE, MAXSIZE);

	    // 2. Open a file for writing (creates it if it doesn't exist)
	    std::ofstream outFile("random_numbers.txt");

	    // 3. Verify the file opened properly
	    if (!outFile) {
	        std::cerr << "Error opening file for writing.\n";

	    }

	    // 4. Generate 50 numbers and write one per line
	    for (int i = 0; i < numInputs; ++i) {
	        outFile << dist(gen) << "\n";
	    }

	    // 5. Close the file (also happens automatically when outFile goes out of scope)
	    outFile.close();
	    std::cout << "Done! Numbers saved to random_numbers.txt\n";
	

	}
