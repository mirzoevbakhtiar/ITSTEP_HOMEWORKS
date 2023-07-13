#include <iostream>
#include <string>
using namespace std;
struct processor
{
 string model;
 processor(const string& model) : model(model){}
};
struct mob {
 string model;
 mob (const string& model):model(model){}
};
struct ram {
 string model;
 int ramcount{}; // kol-vo plashek
 ram(const string& model, int count) : model(model), ramcount(count) {}
};
struct gpu {
 string model;
 gpu(const string& model) : model(model) {}
};

class Computer
{
private:
 processor processor;
 mob* motherboard; // Композиция лишь тут
 gpu gpu;
 ram ram;
 int HDD;
public:
 Computer(const string& processorModel, const string& motherboardModel,
  const string& ramModel, const string& gpuModel, int ramCount, int hdd)
  : processor(processorModel), ram(ramModel, ramCount), gpu(gpuModel), HDD(hdd) {
  motherboard = new mob(motherboardModel);
 };
 ~Computer()
 {
  delete motherboard;
 }
 friend ostream& operator<<(ostream& os, const Computer& computer)
 {
  os << "Processor: " << computer.processor.model << endl
   << "Motherboard model: " << computer.motherboard->model << endl
   << "Ram model: " << computer.ram.model << endl
   << "Ram storage: " << computer.ramcount << " GB" << endl
   << "Graphics Processing Unit: " << computer.gpu.model << endl
   << "HDD: " << computer.HDD << " GB" << endl;
  return os;
 }
};
int main()
{
 Computer comp("Intel Core i9", "Z490", "Kingstone", "RTX 3060", 8, 400);
 cout << comp;
 return 0;
}