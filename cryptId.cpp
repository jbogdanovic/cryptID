#include <iostream>
#include <string>
#include <regex>
#include <fstream>


using namespace std;

int main()
{
	
	int identified = 0;
	string hash;
	string id;
	string rgx;
	
	ifstream inFile;
	inFile.open("C:\\Users\\tlang\\Documents\\Codes\\expressions.dat");
	
	if(!inFile)
	{
		cout << "Unable to open file" << endl;
		exit(1);
	}
	cout << "Enter Hash: ";
	cin >> hash;	
	
	cout << "Possible hashing algorithms used:" << endl;
	
	while(inFile >> id)
	{
		inFile >> rgx;
		
		if(regex_match(hash, (regex)rgx))
		{
			cout << "- " << id << endl;
			identified = 1;
		}
	}
	inFile.close();
	
	if(!identified)
		cout << "Unable to identify" << endl;
	
	return 0;
}