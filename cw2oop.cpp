#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int capacity;
    int size;
public:

    DynamicArray(int cap) : capacity(cap), size(0) {
        arr = new int[capacity];
    }

    ~DynamicArray() {
        delete[] arr;
    }

    void add(int value) {
        int* newArr = new int[capacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        arr[size++] = value;
    }

    void removeLast() {
        if (size > 0) {
            size--;
        }
        else {
            std::cout << "empty" << std::endl;
        }
    }

    void print() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getSize() const {
        return size;
    }
};





int main()
{
    DynamicArray dynamicArray(2);
    dynamicArray.add(1);
    dynamicArray.add(2);
    dynamicArray.add(3);
    dynamicArray.add(4);
    //dynamicArray.removeLast();
    dynamicArray.print();
    cout << "size:" << dynamicArray.getSize() << endl;
}
