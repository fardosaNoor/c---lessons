#include <iostream>
using namespace std;

//ask the user how many floors the hotel has
//aloop should then itirate once for each floor .
//each itiration ask the user for the number of rooms on the floor and how many of them are occupied 
//percentage = number of rooms occupied by the number of rooms
//skip thirteenth floor

int main ()
{
    int floors, rooms; 
    double occupiedRooms, unoccupiedRooms, occupied_percentage, totalRooms = 0, totalOccupiedRooms = 0;;

    cout << "How many floors are there in the hotel?\n";
    cin >> floors;

    while (floors < 1 )
    {
        cout << "Invalid number! \n";
        cout << "How many floors are there in the hotel?\n";
        cin >> floors;
    }

    for (unsigned int i = 1; i <= floors; i++)
    {   
        if (i != 13)
        {
            cout << "How many rooms on the " << i <<"\tfloor\n";
            cin >> rooms;

            while (rooms < 1)
            {
                cout << "Invalid number! \n";
                cout << "How many rooms on the " << i <<"\tfloor\n";
                cin >> rooms;
            }

            totalRooms = totalRooms + rooms;


            if (rooms > 0)
            {
                cout << "How many rooms are occupied \n";
                cin >> occupiedRooms;

                cout << "How many rooms are unoccupied \n";
                cin >> unoccupiedRooms;
                
                if (occupiedRooms + unoccupiedRooms != rooms )
                {
                    cout << "occupied rooms + unccupied rooms should be equal to totalrooms\n";
                    cout << "How many rooms are occupied \n";
                    cin >> occupiedRooms;

                    cout << "How many rooms are unoccupied \n";
                    cin >> unoccupiedRooms;
                }
            }
            
        }
        
        totalOccupiedRooms = totalOccupiedRooms + occupiedRooms;
    }

    occupied_percentage = (totalOccupiedRooms / totalRooms) * 100;
    cout << "The percentage the occupied rooms: " << occupied_percentage << "%" <<endl;

    return 0;
}