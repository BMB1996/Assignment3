#pragma once
#include <string>
#include <queue>
#include <map>
#include <iostream>

using namespace std;

//Declaration of recursive palindrome function
bool is_palindrome(string testString, int currIndex = 0);

//Creates a template so that the function can work with any type of queue
template <class T>

//Creates a function move to rear that will take the first element of a queue and move it to the end
queue<T> MoveToRear(queue<T> myQueue)
{
	//Creates a variable to hold the information at the front of the queue, then pushes the temp value to the end and pops it from the front
	T temp = myQueue.front();
	myQueue.push(temp);
	myQueue.pop();

	return myQueue;
}

//Declaring map functions
void PrintMapData(map<string, string>);

void PrintStateCapital(map<string, string> targetMap);

