//#include <iostream>
//#include <string>
//
//class Overcoat {
//private:
//    string type;
//
//public:
//    Overcoat(const string& type) : type(type) {}
//
//    bool operator==(const Overcoat& other) const {
//        return type == other.type;
//    }
//
//    Overcoat& operator=(const Overcoat& other) {
//        if (this != &other) {
//            type = other.type;
//        }
//        return *this;
//    }
//
//    bool operator<(const Overcoat& other) const {
//        return type < other.type;
//    }
//};
//int main() {
//
//
//
//
//
//
//
//
//}
#include <iostream>
#include <string>
using  namespace std;
class Flat {
private:
    double area;
    double price;

public:
    // дефолт
    Flat() : area(0.0), price(0.0) {}

    //  с параметрами
    Flat(double area, double price) : area(area), price(price) {}

    // Перегруженный оператор ==
    bool operator==(const Flat& other) const {
        return (area == other.area);
    }

    // Перегруженный оператор =
    Flat& operator=(const Flat& other) {
        if (this != &other) {
            area = other.area;
            price = other.price;
        }
        return *this;
    }

    // Перегруженный оператор >
    bool operator>(const Flat& other) const {
        return (price > other.price);
    }

    //вывод информации о квартире
    void printInfo() const {
        cout << "Area: " << area << " square meters" << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
     //объекты класса Flat
    Flat flat1(75.0, 150000.0);
    Flat flat2(90.0, 180000.0);

    // Проверка на равенство площадей
    if (flat1 == flat2) {
        cout << "The flats have the same area." << endl;
    }
    else {
        cout << "The flats have different areas." << endl;
    }

    // Присваиваем один объект другому
    flat1 = flat2;

    // Вывод информации о квартирах после сравнения
    cout << "Flat 1 after assignment: " << endl;
    flat1.printInfo();

    cout << "Flat 2: " << endl;
    flat2.printInfo();

    // Сравнение двух квартир по цене
    if (flat1 > flat2) {
        cout << "Flat 1 is more expensive." << endl;
    }
    else {
        cout << "Flat 2 is more expensive." << endl;
    }

    return 0;
}