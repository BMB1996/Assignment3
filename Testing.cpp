#include <iostream>
#include "Assignment3.h"

using namespace std;

int main() {
	//Test for Queue function FrontToRear
	queue<int> newQueue;

	//filling the queue with numbers 1-9
	for (int i = 1; i < 10; i++) 
	{
		newQueue.push(i);
	}

	//iterating through the queue and outputting the values to show that the function MoveToRear does as it is supposed to
	for (int i = 0; i < newQueue.size(); i++) 
	{
		cout << newQueue.front() << " " << newQueue.size() << "\n";
		newQueue = MoveToRear(newQueue);
	}
	cout << "\n";

	//Test for is_palindrome function
	string testString = "racecar";
	string testString2 = "noble";

	//Testing 2 strings, one that is a palindrome and one that isn't
	if (is_palindrome(testString)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	if (is_palindrome(testString2)) {
		cout << "true\n";
	}
	else {
		cout << "false\n";
	}
	cout << "\n";

	//Test for map section of the assignment
	map<string, string> stateDataMap;

	//Filling the map with data
	stateDataMap.insert({ "Nebraska", "Lincoln" });
	stateDataMap.insert({ "New York", "Albany" });
	stateDataMap.insert({ "Ohio", "Columbus" });
	stateDataMap.insert({ "California", "Sacramento" });
	stateDataMap.insert({ "Massachusets", "Boston" });
	stateDataMap.insert({ "Texas", "Austin" });

	//test of the function PrintMapData
	PrintMapData(stateDataMap);
	cout << "\n";

	//Changing the capital of California to Los Angeles
	stateDataMap["California"] = "Los Angeles";

	//Testing the function PrintStateCapital
	PrintStateCapital(stateDataMap);
	PrintStateCapital(stateDataMap);

	return 1;
}