#include <iostream>
#include <cstdlib>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
	int numbOfCoords = 0;
    string userInputNumbOfCoords = "";
	cout << "enter the number of coordinates.\n>>";
	getline(cin, userInputNumbOfCoords);
	numbOfCoords = atoi(userInputNumbOfCoords.c_str());
	vector<double> coordinates;
	string inputString;
    const char *coordinateInput = NULL;
	for (int i = 0; i < numbOfCoords; i++)
	{
		
		cout << "please enter the coordinates for point " << i << " as  <x.x> <y.y>\n>>";

		getline(cin, inputString);
        char *pEnd;
        coordinateInput = inputString.c_str();

		if(coordinateInput != NULL)
		{
            cout << "in if: " << i << endl; 
            //believe in the user for sake of time
            coordinates.push_back(strtod(coordinateInput, &pEnd));
            coordinates.push_back(strtod(pEnd, NULL));
		}

		
	}
	//calculate distances between points
	for(int i = 0; i < (numbOfCoords * 2); i++)
    {


    }
	
	//make a thread for each pair, learn to use posix threads
	//find the slope
	//create largest circle possible, terminate if < 50% and move the circle either up or 		//down
	//if not possible anywhere move to the next furthest point
	//repeat until all points are exhausted
	//if no solution at the end rip no solution
	//if there is just one solution present it, if mutiple, present smallest in area
	//starting from the center move along until 
	//move circle along the diagonal in .01 increments 

	return 0;
}