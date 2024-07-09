#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Car {
protected:
    double Price;
    string Manufacturer;
    string Type;

public:
    Car(string Manufacturer, double Price, string Type)
        : Manufacturer(Manufacturer), Price(Price), Type(Type) {}

    string getManufacturer() const {
        return Manufacturer;
    }

    double getPrice() const {
        return Price;
    }

    string getType() const {
        return Type;
    }

    virtual void display() const {
        cout << "Manufacturer: " << Manufacturer << ", Price: " << Price << ", Type: " << Type;
    }
};

class Crossover : public Car {
private:
    string Model;
    short seats;
    string color;

public:
    Crossover(string Manufacturer, double Price, string Type, string Model, short seats, string color)
        : Car(Manufacturer, Price, Type), Model(Model), seats(seats), color(color) {}

    void display() const override {
        Car::display();
        cout << ", Model: " << Model << ", Seats: " << seats << ", Color: " << color << endl;
    }
};

class Pickup : public Car {
private:
    string Model;
    short seats;
    string color;

public:
    Pickup(string Manufacturer, double Price, string Type, string Model, short seats, string color)
        : Car(Manufacturer, Price, Type), Model(Model), seats(seats), color(color) {}

    void display() const override {
        Car::display();
        cout << ", Model: " << Model << ", Seats: " << seats << ", Color: " << color << endl;
    }
};

void displayAvailableCars(const vector<Car*>& cars) {
    cout << "Available cars:" << endl;
    for (const auto& car : cars) {
        car->display();
        cout << endl;
    }
}

void filterAndDisplayCars(const vector<Car*>& cars, const string& Type, const string& Manufacturer, double maxPrice) {
    for (const auto& car : cars) {
        if ((Type.empty() || car->getType() == Type) &&
            (Manufacturer.empty() || car->getManufacturer() == Manufacturer) &&
            (maxPrice == 0.0 || car->getPrice() <= maxPrice)) {
            car->display();
            cout << endl;
        }
    }
}

int main() {
    vector<Car*> cars;

    cars.push_back(new Crossover("Toyota", 25000, "Crossover", "RAV4", 5, "Red"));
    cars.push_back(new Pickup("Ford", 30000, "Pickup", "F-150", 5, "Blue"));
    cars.push_back(new Crossover("BMW", 40000, "Crossover", "X5", 5, "Black"));
    cars.push_back(new Pickup("Chevrolet", 35000, "Pickup", "Silverado", 5, "White"));

    displayAvailableCars(cars);

    string typeFilter;
    string manufacturerFilter;
    double maxPriceFilter = 0.0;

    cout << "Enter car type to filter (or leave empty for no filter): ";
    getline(cin, typeFilter);

    cout << "Enter manufacturer to filter (or leave empty for no filter): ";
    getline(cin, manufacturerFilter);

    cout << "Enter maximum price to filter (or leave empty for no filter): ";
    string maxPriceInput;
    getline(cin, maxPriceInput);
    if (!maxPriceInput.empty()) {
        maxPriceFilter = stod(maxPriceInput);
    }

    cout << "\nFiltered cars:" << endl;
    filterAndDisplayCars(cars, typeFilter, manufacturerFilter, maxPriceFilter);

    for (auto car : cars) {
        delete car;
    }

    return 0;
}

