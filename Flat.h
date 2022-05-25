#pragma once
#include <iostream>
using namespace std;

class Flat
{
private:

	int numberOfRooms;
	bool checkingTheInputFlat(int i);

public:
	Flat();
	Flat(int i);	
	void setFlat(int i);
	int getFlat();
	void printInfoFlat();
};

class Rooms
{	
private:
	string title;
	double length;
	double width;
	double height;
	double theAreaOfAllWalls;
	bool gluingTheCeiling;
	bool checkingTheInputRooms(double i);
	void messageWithTheWrongSize();
	double calculateTheAreaOfAllWalls()
	{
		theAreaOfAllWalls = (length * height) * 2 + (width * height) * 2;
		return theAreaOfAllWalls;
	}


public:
	Rooms ();
	Rooms (string title, double length, double width, double height, bool gluingTheCeiling);
	void setTitle(string i);
	void setLength(double i);
	void setWidth(double i);
	void setHeight(double i);
	void setGluingTheCeiling(double i);
	void setTheAreaOfAllWalls();

	void setRooms();
	string getTitle();
	double getLength();
	double getWidth();
	double getHeight();
	bool getGluingTheCeiling();
	double getTheAreaOfAllWalls();
	string booleanToMessage();
	int getRooms();
	void printInfoRooms();
};
