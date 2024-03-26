#include<iostream>
#include<vector>


class ParkingSpot{

    bool isEmpty();
    void occupy();
    void vacateParkingSpot();
    ParkingType getType();

};

class ParkingSpotManager{

    vector<ParkingSpot> parkings;
    ParkingSpot findParkingSpot(parkingSpotStrategy ps){
        return ps.findParkingSpot(parkings);
    }

    bool ParkVehicle(vehicle v , ticket t , parkingSpotStrategy ps){

    }

};
 class parkingSpotStrategy{

    virtual ParkingSpot findParkingSpot(vector<ParkingSpot> spots) = 0 ;

 };

  class DefaultParkingSpotStrategy : public parkingSpotStrategy{

    ParkingSpot findParkingSpot(vector<ParkingSpot> &spots) override{

    }

  };


    enum ParkingType{

        TwoWheeler,
        ThreeWheeler,
        FourWheeler
    };


class TwoWheelerParkingSpot{

    bool isOcuupied;
    int noOffloor;
    int price;

    // @override
    bool isEmpty(){}

    void occupy(){}

    void vacateParkingSpot(){}

    ParkingType getType(){

        return TwoWheeler;
    }
    

};


class Ticket{

    int floorNo;
    int price;
    String name;
    long entry_time;
    long exit_time;
    Vehicle vehicle;
    ParkingSpot spot;


};


class Vehicle {

    string vehicle_no;
    VehicleType vehicleType;
};

class Entrance {

    ParkingSpotManager ps_manage;
    

    void bookSpotAndGiveTicket(vehicle v);

}


class ExitGate{

    Ticket ticket;

    void payPrice();

    void vacateParking();

};














