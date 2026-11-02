# OPP_-o-n-Th-nh-Duy-112947
Bai tap mon Lap trinh huong doi tuong
#include <iostream>
#include <string>
using namespace std;

class vehicle {
private:
    int vehicleID;
    string vehicleType;
    int entryTime;
    int parkingDuration;
    double parkingFee;
    bool isOccupied = false;

public:
    vehicle() {
        vehicleID = 0;
        vehicleType = "";
        entryTime = 0;
        parkingDuration = 0;
        parkingFee = 0;
        isOccupied = false;
    }

    vehicle(int id, string type, int time, int duration, double fee, bool occupied) {
        vehicleID = id;
        vehicleType = type;
        entryTime = time;
        parkingDuration = duration;
        parkingFee = fee;
        isOccupied = occupied;
    }

    // Getter
    int getvehicleID() {
        return vehicleID;
    }

    string getvehicleType() {
        return vehicleType;
    }

    int getentryTime() {
        return entryTime;
    }

    int getparkingDuration() {
        return parkingDuration;
    }

    double getparkingFee() {
        return parkingFee;
    }

    bool getisOccupied() {
        return isOccupied;
    }

    // Setter
    void setvehicleID(int id) {
        vehicleID = id;
    }

    void setvehicleType(string type) {
        vehicleType = type;
    }

    void setentryTime(int time) {
        entryTime = time;
    }

    void setparkingDuration(int duration) {
        parkingDuration = duration;
    }

    void setparkingFee(double fee) {
        parkingFee = fee;
    }

    void setisOccupied(bool occupied) {
        isOccupied = occupied;
    }

    // Tinh phi do xe
    void calculateFee() {
        double gia = 0;

        if (vehicleType == "Car" || vehicleType == "car") {
            gia = 6;
        }
        else if (vehicleType == "Motorcycle" || vehicleType == "motorcycle") {
            gia = 4;
        }
        else if (vehicleType == "Bicycle" || vehicleType == "bicycle") {
            gia = 2;
        }

        parkingFee = 0;

        for (int i = 1; i <= parkingDuration; i++) {
            int gio = entryTime + i - 1;

            if (i <= 2) {
                if ((gio >= 6 && gio < 10) ||
                    (gio >= 15 && gio < 19)) {
                    parkingFee += gia * 1.3;
                }
                else {
                    parkingFee += gia * 0.95;
                }
            }
            else {
                parkingFee += gia * 0.9;
            }
        }
    }

    // Hien thi thong tin xe
    void display() {
        cout << "\nMa xe: " << vehicleID;
        cout << "\nLoai xe: " << vehicleType;
        cout << "\nGio vao: " << entryTime;
        cout << "\nThoi gian do: " << parkingDuration;
        cout << "\nPhi do xe: " << parkingFee;
        cout << "\nTrang thai: " << isOccupied;
        cout << endl;
    }
};
