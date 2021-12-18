#include<iostream>

using namespace std;

class Elevator{
    private:
        int id;
        int floor;
        int status;
    public:
        Elevator(){

        }
        void setId(int id) {
            this->id = id;
        }

        int getId() {
            return this->id;
        }
        void setStatusAndFloor(int status, int floor){
            this->floor = floor;
        }

        int getFloor() {
            return this->floor;
        }

        int getStatus() {
            return this->status;
        }

        void calling(){

            cout << "\ncalling elevator " << this->id;
        }

};
