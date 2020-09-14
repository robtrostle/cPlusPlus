//Write a program that utilizes a map and iterates through it. 
//Created by Robert Trostle - CIT245
//Created on 7/20/20
#pragma warning(disable 4996)
#include<string>
#include<cstdlib>
#include <iostream>
#include <iterator> 
#include <map>
using namespace std;

void find(const map<string, string>& peopleFile, const string& name);

int main()
{
	// empty map containers
	map<string, string> peopleFile;
	map<string, string> reversePeopleFile;

	peopleFile["Paul Brown"] = "123456790";
	peopleFile["Mary Smith"] = "123456791";
	peopleFile["John Smith"] = "123456789";
	peopleFile["Lisa Brown"] = "123456792";

	reversePeopleFile["123456790"] = "Paul Brown";
	reversePeopleFile["123456791"] = "Mary Smith";
	reversePeopleFile["123456789"] = "John Smith";
	reversePeopleFile["123456792"] = "Lisa Brown";

    auto itr = peopleFile.begin();

	//iterating through reverse people file
	cout << "Iterating through list..." << endl;
	for (itr = reversePeopleFile.begin(); itr != reversePeopleFile.end(); ++itr) {
		cout << itr->second <<": "
			<< itr->first
			<<'\n';
	}
	cout << endl;
	// using find() to search for 
	// "itr" has address of key value pair. 
	 find(peopleFile,"John Brown");
	 find(peopleFile, "Paul Brown");

	system("pause");
	return 0;
}
void find(const map<string, string>& peopleFile, const string& name)
{
	auto itr = peopleFile.find(name);
	if (itr == peopleFile.end())
		cout << name << " not found"<<endl;
	else
		cout <<  itr->first << " found " << itr->second<<endl;
	cout << endl;
}
