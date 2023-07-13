#include <iostream>
#include <string>
using namespace std;
class processor
{
public:
 string model;
};
class mob : public processor
{
public:

 string mobmodel;
};
class RAM : public mob
{
public:

 string rammodel;
    int GB{};
};
class GPU :public  RAM
{
public:

 string GPmodel;
};
class HDD :public  GPU
{
public:
    int GBH{};
};

int main() {
    HDD c1;
    c1.model = "Intel Core i7";
    c1.mobmodel = "GA-Z270XP-SLI";
    c1.rammodel = "Kingstone";
    c1.GB = 16;
    c1.GPmodel = "NVIDIA GeForce RTX 4090";
    c1.GBH = 300;
    cout << "Model: " << c1.model << endl;
    cout << "Motherboard model: " << c1.mobmodel << endl;
    cout << "RAM model: " << c1.rammodel << endl;
    cout << "RAM Size: " << c1.GB << "GB" << endl;
    cout << "GPU model: " << c1.GPmodel << endl;
    cout << "HDD Size: " << c1.GBH << "GB" << endl;
    return 0;
}