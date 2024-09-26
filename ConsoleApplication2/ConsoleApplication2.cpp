#include <iostream>

using namespace std;



//1-ci
//int* createArray(int size) {
//    int* array = new int[size];
//    for (int i = 0; i < size; ++i) {
//        array[i] = 0;
//    }
//
//    return array;
//}
//void deleteArray(int* array) {
//    delete[] array;
//}





//2-ci
//int* createRandomArray(int size) {
//    int* array = new int[size];
//    srand((time(0)));
//    for (int i = 0; i < size; ++i) 
//    {
//        array[i] = rand() % 100;
//    }
//    return array;
//}
//void deleteArray(int* array) {
//    delete[] array;
//}




//3-cu
//void printArray(int* array, int size) {
//    cout << "Massivin elementleri: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//}





//4-cu
//void deleteArray(int* array) {
//    delete[] array; 
//}






//5-ci
//int* addElement(int* array, int& size, int newElement) 
//{
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < size; ++i) {
//        newArray[i] = array[i];
//    }
//    newArray[size] = newElement;
//    delete[] array;
//    size++;
//    return newArray;
//}



//6-ci
//int* insertElement(int* array, int& size, int index, int newElement) {
//    if (index < 0 || index > size)
//    {
//        cout << "Xeta, sehf indeks" << endl;
//        return array;
//    }
//    int* newArray = new int[size + 1];
//    for (int i = 0; i < index; ++i) 
//    {
//        newArray[i] = array[i];
//    }
//    newArray[index] = newElement;
//    for (int i = index; i < size; ++i) 
//    {
//        newArray[i + 1] = array[i];
//    }
//    delete[] array;
//    size++;
//    return newArray;
//}






//7-ci
//int* deleteElement(int* array, int& size, int index) {
//    if (index < 0 || index >= size) {
//        cout << "xeta yanlis indeks" << endl;
//        return array;
//    }
//    int* newArray = new int[size - 1];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    for (int i = index + 1; i < size; ++i) {
//        newArray[i - 1] = array[i];
//    }
//    delete[] array;
//    --size;
//    return newArray;
//}






//8-ci
//int* addBlock(int* array, int& size, int* block, int blockSize) {
//    int* newArray = new int[size + blockSize];
//    for (int i = 0; i < size; ++i) {
//        newArray[i] = array[i];
//    }
//    for (int i = 0; i < blockSize; ++i) {
//        newArray[size + i] = block[i];
//    }
//    delete[] array;
//    size += blockSize;
//
//    return newArray;
//}





//10-cu
//int* deleteBlock(int* array, int& size, int index, int blockSize) {
//    if (index < 0 || index >= size || index + blockSize > size) {
//        cout << "Xeta, ya indeks yada blok sefdi" << endl;
//        return array;
//    }
//    int* newArray = new int[size - blockSize];
//    for (int i = 0; i < index; ++i) {
//        newArray[i] = array[i];
//    }
//    for (int i = index + blockSize; i < size; ++i) {
//        newArray[i - blockSize] = array[i];
//    }
//    delete[] array;
//    size -= blockSize;
//    return newArray;
//}



int main()
{
    //1-ci
    //int size;
    //cout << "Massivin uzunlugunu yazin: ";
    //cin >> size;
    //int* myArray = createArray(size);
    //cout << "Massivin elementleri: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << myArray[i] << " ";
    //}
    //cout << endl;
    //deleteArray(myArray);




    //2-ci
    //int size;
    //cout << "Massivin uzunlugunu yazin: ";
    //cin >> size;
    //int* myArray = createRandomArray(size);
    //cout << "massivin elementleri: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << myArray[i] << " ";
    //}
    //cout << endl;
    //deleteArray(myArray);
    //return 0;





    //3-cu
    //int size;
    //cout << "Massivin uzunlugunu daxil edin: ";
    //cin >> size;
    //int* myArray = new int[size];
    //srand((time(0)));
    //for (int i = 0; i < size; ++i) 
    //{
    //    myArray[i] = rand() % 100;
    //}
    //printArray(myArray, size);
    //delete[] myArray;
    //return 0;




    //4-cu
    //int size;
    //cout << "masssivin uzunlugunu daxil edin: ";
    //cin >> size;
    //int* myArray = new int[size];
    //srand((time(0)));
    //for (int i = 0; i < size; ++i) 
    //{
    //    myArray[i] = rand() % 100;
    //}
    //cout << "massivin elementleri: ";
    //for (int i = 0; i < size; ++i) 
    //{
    //    cout << myArray[i] << " ";
    //}
    //cout << endl;
    //deleteArray(myArray);






    //5-ci
    //int size = 0;
    //int* myArray = nullptr;
    //for (int i = 0; i < 5; ++i) 
    //{
    //    int newElement;
    //    cout << "elave olunacaq elementi yazin: ";
    //    cin >> newElement;
    //    myArray = addElement(myArray, size, newElement);
    //}
    //cout << "Massiv elementleri: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << myArray[i] << " ";
    //}
    //cout << endl;
    //delete[] myArray;





    //6-ci
    //int size;
    //cout << "Massivin uzunlugunu yazin: ";
    //cin >> size;
    //int* myArray = new int[size];
    //cout << "massivin elementlerini yazin:\n";
    //for (int i = 0; i < size; ++i) {
    //    cin >> myArray[i];
    //}
    //int index, newElement;
    //cout << "elave olunacaq massivin indeksini yazin: ";
    //cin >> index;
    //cout << "elave olunacaq elementi yazin: ";
    //cin >> newElement;
    //myArray = insertElement(myArray, size, index, newElement);
    //cout << "alinan massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << myArray[i] << " ";
    //}
    //cout << endl;
    //delete[] myArray;
    //return 0;




    //7-ci
    //int size;
    //cout << "massivin uzunluqu: ";
    //cin >> size;
    //int* myArray = new int[size];
    //cout << "massivin elementleri:\n";
    //for (int i = 0; i < size; ++i) {
    //    cin >> myArray[i];
    //}
    //int index;
    //cout << "silinecek elementin indeksi: ";
    //cin >> index;
    //myArray = deleteElement(myArray, size, index);
    //cout << "alinan massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << myArray[i] << " ";
    //}
    //cout << endl;
    //delete[] myArray;



    //8-ci
    //int size;
    //cout << "massivin uzunluqu: ";
    //cin >> size;
    //int* myArray = new int[size];
    //cout << "massivin elementleri:\n";
    //for (int i = 0; i < size; ++i) {
    //    cin >> myArray[i];
    //}
    //int blockSize;
    //cout << "elave olunan blokun uzunlugu: ";
    //cin >> blockSize;
    //int* block = new int[blockSize];
    //cout << "blok elementleri:\n";
    //for (int i = 0; i < blockSize; ++i) {
    //    cin >> block[i];
    //}
    //myArray = addBlock(myArray, size, block, blockSize);
    //cout << "alinan massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << myArray[i] << " ";
    //}
    //cout << endl;
    //delete[] myArray;
    //delete[] block;



    //10-cu
    //int size;
    //cout << "massivin uzunlugu: ";
    //cin >> size;
    //int* myarray = new int[size];
    //cout << "massivin elementleri:\n";
    //for (int i = 0; i < size; ++i) {
    //    cin >> myarray[i];
    //}
    //int index, blocksize;
    //cout << "silinecek blok ucun baslanqic indeks yazin: ";
    //cin >> index;
    //cout << "silinecek blok uzunlugunu daxil edin: ";
    //cin >> blocksize;
    //myarray = deleteblock(myarray, size, index, blocksize);
    //cout << "alinan massiv: ";
    //for (int i = 0; i < size; ++i) {
    //    cout << myarray[i] << " ";
    //}
    //cout << endl;
    //delete[] myarray;
    //return 0;
}

