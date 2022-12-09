#include "Assignment3.h"

//Recursive function that tests characters up to the middle of the target word for equivilency
//if the string makes it to the middle of the string, the word is a palindrome.
bool is_palindrome(string testString, int currIndex)
{
	//base case testing for an empty string or one past the middle of the word
	if ((testString == "") || currIndex == testString.length() / 2 + 1) {
		return true;
	}
	//Test case for anywhere other than the middle of the word
	if (testString.at(currIndex) == testString.at(testString.length() - currIndex - 1)) {
		return is_palindrome(testString, ++currIndex);
	}
	//returns false if at any point the 2 letters being compared are not equivalent.
	else {
		return false;
	}
}

void PrintMapData(map<string, string> mapData)
{
	//Creating the iterator for the map so that I can iterate through the map structure
	map<string, string>::iterator itr = mapData.begin();

	//Printing the states and the capitals of each to the screen
	for (itr; itr != mapData.end(); ++itr) 
	{
		cout << "State:" << itr->first << ", Capital:" << itr->second << "\n";
	}
}

void PrintStateCapital(map<string, string> targetMap)
{
	//Getting input from the user to select the state that we will be finding the capital for
	string targetState;
	cout << "Please enter a state to find the capital: ";
	cin >> targetState;
	if (targetMap[targetState] == "")
	{
		cout << "There is no information on the capital of this state.\n";
	}
	else 
	{
		cout << "The capital of " << targetState << " is " << targetMap[targetState] << "\n";
	}
}
