//LEARNING TO WORK WITH FILES


#include <iostream>
#include <fstream> // File-stream. Needed to use files.
using namespace std;

int main() {

	ofstream outputFile;

	outputFile.open("demofile.txt");
	cout << "Now writing data to the file. \n";

	outputFile << "Nintendo Switch";
	outputFile << "Playstation 4";
	outputFile << "PC";

	outputFile.close();
	cout << "DONE!" << endl;

	system("pause");
	return 0;
}

/*
fstream 
=====
ifstream -- Input file stream

ofstream -- Output file stream



*/