#include<iostream>
#include"elevator.cpp"
#include <stdlib.h>     /* srand, rand */

using namespace std;

int main(int argc, char const *argv[])
{

    int numberFloor = 1;
    int numberElevator = 1;
    int isPicking = 0;
    int direction = 0;
    int atFloor = 0;

    cout << "Number Floor: ";
    cin >> numberFloor;
    cout << "Number Elevator: ";
    cin >> numberElevator;


    Elevator allElevator[numberElevator];

    for(int i = 0; i < numberElevator; i++) {
    //setting Id
        allElevator[i].setId(i+1);
    }

    while(1) {

        //reading elevator
        for(int i = 0; i < numberElevator; i++) {
        //reading
            cout << "reading elevator id: " << allElevator[i].getId();

            int floor = 1;
            int status = 0;
            cout << "At Floor: ";
            cin >> floor;
            cout << "status: ";
            cin >> status;
        }


        isPicking = rand() % 1 + 1;

        if (isPicking) {
            atFloor = rand() % (numberFloor + 1);
            cout << "user calling at floor : " << atFloor << " with direction: ";
            cin >> direction;
        }

        if (isPicking) {
            //processing
            int pickOne = 0;
            int distance = numberFloor;
            bool isDone = false;

            cout << "doing process ...";
            for(int i = 0; i < numberElevator; i++) {
                if(allElevator[i].getStatus() == 0) {
                    allElevator[i].calling();
                    isDone = true;
                } else if(allElevator[i].getStatus() == direction) {
                    int tempDistance = abs(atFloor - allElevator[i].getFloor());
                    if(tempDistance < distance){
                        distance = tempDistance;
                        pickOne = i;
                    }
                }
                if(isDone) {
                    break;
                }
            }
            if(!isDone) {
                allElevator[pickOne].calling();
            }

        }


    }

    return 0;
}


