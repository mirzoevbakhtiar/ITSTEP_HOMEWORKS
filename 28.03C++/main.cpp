//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//// proverka
//bool isPrime(int num) {
//    if (num <= 1) return false;
//    for (int i = 2; i <= sqrt(num); i++) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//// Udalenie
//int* removePrimes(const int* arr, size_t size, size_t& newSize) {
//    newSize = 0;
//    for (size_t i = 0; i < size; i++) {
//        if (!isPrime(arr[i])) {
//            newSize++;
//        }
//    }
//
//    int* newArr = new int[newSize];
//    size_t index = 0;
//    for (size_t i = 0; i < size; i++) {
//        if (!isPrime(arr[i])) {
//            newArr[index] = arr[i];
//            index++;
//        }
//    }
//
//    return newArr;
//}
//
//int main() {
//    int arr[] = { 2, 3, 7, 10, 8, 5 };
//    size_t size = sizeof(arr) / sizeof(arr[0]);
//
//    size_t newSize;
//    int* resultArr = removePrimes(arr, size, newSize);
//
//    cout << "Original: ";
//    for (size_t i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Bez prostix chisel: ";
//    for (size_t i = 0; i < newSize; i++) {
//        cout << resultArr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] resultArr;
//    return 0;
//}
//////////////////////////////////////

#include <iostream>

using namespace std;

// Функция для распределения элементов массива по положительным, отрицательным и нулевым массивам
void splitArray(const int* arr, size_t size, int*& positiveArr, size_t& positiveSize,
                int*& negativeArr, size_t& negativeSize, int*& zeroArr, size_t& zeroSize) {
    positiveSize = 0;
    negativeSize = 0;
    zeroSize = 0;

    for (size_t i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveSize++;
        } else if (arr[i] < 0) {
            negativeSize++;
        } else {
            zeroSize++;
        }
    }

    positiveArr = new int[positiveSize];
    negativeArr = new int[negativeSize];
    zeroArr = new int[zeroSize];

    size_t positiveIndex = 0;
    size_t negativeIndex = 0;
    size_t zeroIndex = 0;

    for (size_t i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveArr[positiveIndex] = arr[i];
            positiveIndex++;
        } else if (arr[i] < 0) {
            negativeArr[negativeIndex] = arr[i];
            negativeIndex++;
        } else {
            zeroArr[zeroIndex] = arr[i];
            zeroIndex++;
        }
    }
}

int main() {
    int arr[] = { 2, -3, 7, 0, -8, 5 };
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int* positiveArr;
    size_t positiveSize;
    int* negativeArr;
    size_t negativeSize;
    int* zeroArr;
    size_t zeroSize;

    splitArray(arr, size, positiveArr, positiveSize, negativeArr, negativeSize, zeroArr, zeroSize);

    cout << "Original Array: ";
    for (size_t i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    cout << "+: ";
    for (size_t i = 0; i < positiveSize; i++) {
        cout << positiveArr[i] << " ";
    }


    cout << "-: ";
    for (size_t i = 0; i < negativeSize; i++) {
        cout << negativeArr[i] << " ";
    }


    cout << "0: ";
    for (size_t i = 0; i < zeroSize; i++) {
        cout << zeroArr[i] << " ";
    }
    cout << endl;

    delete[] positiveArr;
    delete[] negativeArr;
    delete[] zeroArr;
    return 0;
}
