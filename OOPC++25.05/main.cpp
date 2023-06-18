#include <iostream>
#include <string>
using namespace std;

// Процессор
class Processor {
private:
    string model;

public:
    Processor(const string& model) : model(model) {}

    string getModel() const {
        return model;
    }
};

// Видеокарта
class GraphicsCard {
private:
    string model;

public:
    GraphicsCard(const string& model) : model(model) {}

    string getModel() const {
        return model;
    }
};

//  плата
class Motherboard {
private:
    string model;

public:
    Motherboard(const string& model) : model(model) {}

    string getModel() const {
        return model;
    }
};

// компухтер
class Computer {
private:
    Processor processor;
    GraphicsCard graphicsCard;
    Motherboard motherboard;

public:
    Computer(const Processor& processor, const GraphicsCard& graphicsCard, const Motherboard& motherboard)
            : processor(processor), graphicsCard(graphicsCard), motherboard(motherboard) {}

    void display() const { // для вывода
        cout << "Computer configuration:" <<endl;
        cout << "Processor: " << processor.getModel() <<endl;
        cout << "Graphics Card: " << graphicsCard.getModel() <<endl;
        cout << "Motherboard: " << motherboard.getModel() << endl;
    }
};

int main() {
    Processor processor("Inter core i5");
    GraphicsCard graphicsCard("NVIDIA GeForce GTX 1650");
    Motherboard motherboard("MSI GF 63");

    Computer computer(processor, graphicsCard, motherboard);
    computer.display();

    return 0;
}