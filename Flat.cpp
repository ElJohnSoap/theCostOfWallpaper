#include "Flat.h"

Flat::Flat()
{
	numberOfRooms = 1;
}

Flat::Flat(int i)
{
	numberOfRooms = i;
}

bool Flat::checkingTheInputFlat(int i)
{
	if (i<=0)
		return false;
	return true;
}

int Flat::getFlat()
{
	return numberOfRooms;
}

void Flat::setFlat(int i)
{
	while (!checkingTheInputFlat(i))
	{
		cout << "Комнат не может быть 0 или меньше.\n";
		cout << "Введите количество комнат - ";
		cin >> i;
	}
	numberOfRooms = i;
}

void Flat::printInfoFlat()
{
	cout << "\nКоличество комнат - " << numberOfRooms << endl;
}

Rooms::Rooms()
{
	title = "NoName";
	length = 0;
	width = 0;
	height = 0;
	gluingTheCeiling = false;
}
Rooms::Rooms(string title, double length, double width, double height, bool gluingTheCeiling)
{
	this->title = title;
	this->length = length;
	this->width = width;
	this->height = height;
	this->gluingTheCeiling = gluingTheCeiling;
}

bool Rooms::checkingTheInputRooms(double i)
{
	{
		if (i < 0)
			return false;
		return true;
	}
}

void Rooms::messageWithTheWrongSize()
{
	cout << "Размер не может быть меньше 0.\n";
	cout << "Введите размер - ";
}


void Rooms::setTitle(string i)
{
	title = i;
}

void Rooms::setLength(double i)
{
	while (!checkingTheInputRooms(i))
	{
		messageWithTheWrongSize();
		cin >> i;
	}
	length = i;
}
void Rooms::setWidth(double i)
{
	while (!checkingTheInputRooms(i))
	{
		messageWithTheWrongSize();
		cin >> i;
	}
	width = i;
}
void Rooms::setHeight(double i)
{
	while (!checkingTheInputRooms(i))
	{
		messageWithTheWrongSize();
		cin >> i;
	}
	width = i;
}

void Rooms::setGluingTheCeiling(double i)
{
	while (i != 0 && i != 1)
	{
		cout << "0 - не клеить потолок : 1 - клеить потолок";
		cin >> i;
	}
	gluingTheCeiling = i;
}
void Rooms::setTheAreaOfAllWalls()
{
	theAreaOfAllWalls = calculateTheAreaOfAllWalls();
}
void Rooms::setRooms()
{
	string s;
	cout << "Введите название комнаты :";
	cin >> s;
	setTitle(s);
	double i;
	cout << "Введите длину комнаты :";
	cin >> i;
	setLength(i);
	cout << "Введите ширину комнаты :";
	cin >> i;
	setWidth(i);
	cout << "Введите высоту комнаты :";
	cin >> i;
	setHeight(i);
	cout << "Клеить потолок - ";
	cin >> i;
	setGluingTheCeiling(i);
}

string Rooms::getTitle()
{
	return title;
}
double Rooms::getLength()
{
	return length;
}
double Rooms::getWidth()
{
	return width;
}
double Rooms :: getHeight()
{
	return height;
}
bool Rooms::getGluingTheCeiling()
{
	return gluingTheCeiling;
}
string Rooms::booleanToMessage()
{
	string s;
	if (getGluingTheCeiling())
	{
		s = "Клеить";
	}
	else 
	{
		s = "Не клеить";
	}
	return s;
}
double Rooms::getTheAreaOfAllWalls()
{
	return theAreaOfAllWalls;
}

void Rooms::printInfoRooms()
{
	cout << "Название: " << getTitle() << endl;
	cout << "Длина: " << getLength() << endl;
	cout << "Ширина: " << getWidth() << endl;
	cout << "Высота: " << getHeight() << endl;
	cout << "Клеить потолок: " << booleanToMessage() << endl;
}
