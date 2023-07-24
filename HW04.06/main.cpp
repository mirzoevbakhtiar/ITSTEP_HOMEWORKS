#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class MyVector {
private:
    T* data{};
    size_t size{};
    size_t capacity{};
public:
    MyVector(size_t initial_size) {
        this->capacity = initial_size * 2;
        this->data = new T[capacity]{};
    }

    MyVector(initializer_list<T> list) {
        this->size = list.size();
        this->capacity = list.size() * 2;
        this->data = new T[capacity]{};

        size_t i = 0;
        for (const T* it = list.begin(); it != list.end(); it++, i++) {
            this->data[i] = *it;
        }
    }

    size_t getSize() const {
        return this->size;
    }

    friend ostream& operator<<(ostream& out, const MyVector& v) {
        for (size_t i = 0; i < v.size; i++) {
            out << v.data[i] << ' ';
        }
        return out;
    }

    T& operator[](size_t index) {
        return this->data[index];
    }

    void append(T value) {
        if (this->size == this->capacity) {
            this->capacity *= 2;

            T* new_data = new T[this->capacity]{};

            for (size_t i = 0; i < this->size; i++) {
                new_data[i] = this->data[i];
            }

            delete[] this->data;
            this->data = new_data;
        }

        this->data[this->size] = value;
        this->size++;
    }

    void pop() {
        if (this->size > 0) {
            this->data[this->size - 1] = T{};
            this->size--;
        }
    }

    T* begin() {
        return this->data;
    }

    T* end() {
        return this->data + this->size;
    }

    bool empty() {
        for (size_t i = 0; i < this->size; i++) {
            if (this->data[i] != T{}) {
                return false;
            }
        }
        return true;
    }

    void clear() {
        for (size_t i = 0; i < this->size; i++) {
            this->data[i] = T{};
        }
        this->size = 0;
    }

    void insert(size_t index, T value) {
        if (index > this->size) {
            return;
        }

        if (this->size == this->capacity) {
            this->capacity *= 2;
            T* new_data = new T[this->capacity]{};

            for (size_t i = 0; i < index; i++) {
                new_data[i] = this->data[i];
            }
            new_data[index] = value;

            for (size_t i = index + 1; i <= this->size; i++) {
                new_data[i] = this->data[i - 1];
            }

            delete[] this->data;
            this->data = new_data;
            this->size++;
        }
        else {
            for (size_t i = this->size; i > index; i--) {
                this->data[i] = this->data[i - 1];
            }
            this->data[index] = value;
            this->size++;
        }
    }

    ~MyVector() {
        delete[] data;
    }
};


int main() {
    MyVector<int> myVector{ 1, 2, 3, 4, 5 };
    cout << "Array: " << myVector << endl;

    myVector.append(9);
    cout << "Add in the end of the array: " << myVector << endl;

    myVector.pop();
    cout << "Last element deleted: " << myVector << endl;

    cout << "Array size: " << myVector.getSize() << endl;
    cout << "Is the array empty? " << (myVector.empty() ? "Yes" : "No") << endl;

    cout << "First element of the array: " << *myVector.begin() << endl;
    cout << "Last element of the array: " << *(myVector.end() - 1) << endl;

    int element = myVector[2];
    cout << "Get element at index 2: " << element << endl;

    myVector.insert(2, 10);
    cout << "Insert at index 2: " << myVector << endl;

    myVector.clear();
    cout << "Cleared array: " << myVector << endl;

    return 0;
}
