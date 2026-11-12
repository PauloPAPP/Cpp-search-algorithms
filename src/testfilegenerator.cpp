#include <iostream>
#include <random>
#include <fstream>
#include "myheaders.h"
using namespace std;

void testFileGenerator() {
	ofstream outFile("../'Input Text'/test.txt");
	int numInputs = 0;
	cin >> numInputs;
	// 1. Obtain a random seed from hardware
	    random_device rd;

	    // 2. Seed the Mersenne Twister engine
	    mt19937 gen(rd());

	    // 3. Define the inclusive range (e.g., 1 to 100)
	    uniform_int_distribution<int> dist(1, 10000);
		
		for (int i = 0; i < numInputs; ++i) {
		        outFile << dist(gen) << " ";
				
		    }
	
	}