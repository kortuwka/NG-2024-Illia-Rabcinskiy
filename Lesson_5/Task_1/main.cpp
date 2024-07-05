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

    void setManufacturer(const string& Manufacturer) {
        this->Manufacturer = Manufacturer;
    }

    double getPrice() const {
        return Price;
    }

    void setPrice(double Price) {
        this->Price = Price;
    }

    string getType() const {
        return Type;
    }

    void setType(const string& Type) {
        this->Type = Type;
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

    string getModel() const {
        return Model;
    }

    void setModel(const string& Model) {
        this->Model = Model;
    }

    short getSeats() const {
        return seats;
    }

    void setSeats(short seats) {
        this->seats = seats;
    }

    string getColor() const {
        return color;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    void info() {
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

    string getModel() const {
        return Model;
    }

    void setModel(const string& Model) {
        this->Model = Model;
    }

    short getSeats() const {
        return seats;
    }

    void setSeats(short seats) {
        this->seats = seats;
    }

    string getColor() const {
        return color;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    void info(){
        Car::display();
        cout << ", Model: " << Model << ", Seats: " << seats << ", Color: " << color << endl;
    }
};

void filterAndDisplayCars(const vector<Car*>& cars, const string& Type, const string& Manufacturer, double maxPrice) {
    for (const auto& car : cars) {
        if ((Type.empty() || car->getType() == Type) &&
            (Manufacturer.empty() || car->getManufacturer() == Manufacturer) &&
            (maxPrice == 0.0 || car->getPrice() <= maxPrice)) {
            car->display();
        }
    }
}

int main() {
    vector<Car*> cars;

    cars.push_back(new Crossover("Toyota", 25000, "Crossover", "RAV4", 5, "Red"));
    cars.push_back(new Pickup("Ford", 30000, "Pickup", "F-150", 5, "Blue"));
    cars.push_back(new Crossover("BMW", 40000, "Crossover", "X5", 5, "Black"));
    cars.push_back(new Pickup("Chevrolet", 35000, "Pickup", "Silverado", 5, "White"));

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

    filterAndDisplayCars(cars, typeFilter, manufacturerFilter, maxPriceFilter);

    for (auto car : cars) {
        delete car;
    }

    return 0;
}
