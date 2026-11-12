#include <iostream>
#include <random>
#include <fstream>
#include "myheaders.h"
using namespace std;

void testFileGenerator() {
	int numInputs = 0;
	cin >> numInputs;
	std::random_device rd;
	    std::mt19937 gen(rd());
	    std::uniform_int_distribution<int> dist(1, 100);

	    // 2. Open a file for writing (creates it if it doesn't exist)
	    std::ofstream outFile("../'Input Text'/test.txt");

	    // 3. Verify the file opened properly
	    if (!outFile) {
	        std::cerr << "Error opening file for writing.\n";
	        return 1;
	    }

	    // 4. Generate 50 numbers and write one per line
	    for (int i = 0; i < numInputs; ++i) {
	        outFile << dist(gen) << "\n";
	    }

	    // 5. Close the file (also happens automatically when outFile goes out of scope)
	    outFile.close();
	    std::cout << "Done! Numbers saved to random_numbers.txt\n";
		outfile.close();
	
	}