
#include <iostream>
using namespace std;
#include "Flat.h"

int main()
{
    setlocale(LC_ALL, "ru");
    Flat flat1;
    int i;
    cout << "������� ���������� ������ - ";
    cin >> i;
    flat1.setFlat(i);
    flat1.printInfoFlat();
    /**while (flat1.getFlat() > 0)
    {

    }*/
    Rooms room1;
    room1.setRooms();
    room1.printInfoRooms();
   
}


