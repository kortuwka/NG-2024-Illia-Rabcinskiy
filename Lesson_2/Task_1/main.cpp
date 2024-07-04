#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Car {
protected:
    string manufacturer;
    float price;
    string type;

public:
    Car(const string& manufacturer, float price, const string& type)
        : manufacturer(manufacturer), price(price), type(type) {}

    string getManufacturer() const {
        return manufacturer;
    }

    void setManufacturer(const string& manufacturer) {
        this->manufacturer = manufacturer;
    }

    void displayInfo() const {
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Type: " << type << endl;
        cout << "Price: $" << price << endl;
    }
};

class Sedan : public Car {
private:
    string modelSeries;
    int seats;
    string color;

public:
    Sedan(const string& manufacturer, float price, const string& modelSeries,
          int seats, const string& color)
        : Car(manufacturer, price, "Sedan"), modelSeries(modelSeries),
          seats(seats), color(color) {}

    string getModelSeries() const {
        return modelSeries;
    }

    void setModelSeries(const string& modelSeries) {
        this->modelSeries = modelSeries;
    }

    int getSeats() const {
        return seats;
    }

    void setSeats(int seats) {
        this->seats = seats;
    }

    string getColor() const {
        return color;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    int displayInfo() const {
        Car::displayInfo();
        cout << "Model Series: " << modelSeries << endl;
        cout << "Seats: " << seats << endl;
        cout << "Color: " << color << endl;
    }
};

class AutoService {
private:
    vector<Car*> carsInStock;

public:
    void addCar(Car* car) {
        carsInStock.push_back(car);
    }


    void filterAndDisplay(const string& carType, const string& manufacturer, float maxPrice) {
        for (Car* car : carsInStock) {
            if ((carType.empty() || car->getManufacturer() == carType) &&
                (manufacturer.empty() || car->getManufacturer() == manufacturer) &&
                (maxPrice == 0 )) {
                car->displayInfo();
                cout << " " << endl;
            }
        }
    }
};

int main() {

    Sedan car1("Toyota", 25000, "Camry", 5, "Blue");
    Sedan car2("Ford", 30000, "Fusion", 5, "Red");
    Sedan car3("Honda", 28000, "Accord", 5, "Silver");

    AutoService service;

    service.addCar(&car1);
    service.addCar(&car2);
    service.addCar(&car3);

    cout << "Filtering Sedans with price <= $28000:" << endl;
    service.filterAndDisplay("Sedan", "", 28000);

    return 0;
}
