#include <iostream>
#include <string>

using namespace std;

int n,m;

//data---------------------------------------------------------------------------------
struct Record{
    string nama;
    string nisn;
    float nilai;
    Record(string NISN, string NAMA, float NILAI){
        nama = NAMA;
        nisn = NISN;
        nilai = NILAI;
    }
    //Null constructor
    Record(){

    }
};

//output------------------------------------------------------------------------------
void printRecord(Record arrOfRecord[], int recordSize){
    for (int i = 0; i < recordSize; i++) {
        cout<< arrOfRecord[i].nisn << " " << arrOfRecord[i].nama << " " << arrOfRecord[i].nilai << "\n";
    }
    
}


//sorting function------------------------------------------------------------------
void insertionSort(Record arrofRecord[],int arrSize){
    int i, j, k;
    string c;
    Record key;  
    cout<<"Urutan yang bisa dipilih\n  1.Nama\n  2.NISN\n  3.Nilai\n   Urutkan dari : ";
    cin>>k;
    switch(k){
        case 1 :    for (i = 1; i < arrSize; i++) {  
                key = arrofRecord[i]; 
                 j = i - 1;  
  
                 while (j >= 0 && arrofRecord[j].nama > key.nama) {  
                  arrofRecord[j + 1] = arrofRecord[j];  
                   j = j - 1;  
                  }  
                    arrofRecord[j + 1] = key;
              } 
        break;
        case 2 :    for (i = 1; i < arrSize; i++) {  
                key = arrofRecord[i]; 
                 j = i - 1;  
  
                 while (j >= 0 && arrofRecord[j].nisn > key.nisn) {  
                  arrofRecord[j + 1] = arrofRecord[j];  
                   j = j - 1;  
                  }  
                    arrofRecord[j + 1] = key;
              } 
        break;
        case 3 :   for (i = 1; i < arrSize; i++) {  
                key = arrofRecord[i]; 
                 j = i - 1;  
  
                 while (j >= 0 && arrofRecord[j].nilai > key.nilai) {  
                  arrofRecord[j + 1] = arrofRecord[j];  
                   j = j - 1;  
                  }  
                    arrofRecord[j + 1] = key;
              } 
        break;
    }
}

void insertion(Record arrOfRecord[],int arrSize){
        cout<< "\nSORT\n";
        insertionSort(arrOfRecord, arrSize);
    printRecord(arrOfRecord, arrSize);
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(Record arr[], int arrSize){ //semua array pass by pointer / adress
    int k;
     cout<<"Urutan yang bisa dipilih\n  1.Nama\n  2.NISN\n  3.Nilai\n   Urutkan dari : ";
    cin>>k;
    switch(k){
        case 1 : for (int i = 0; i < arrSize-1; i++) {
                    int index = i;

                       for (int j = i+1; j < arrSize; j++) {
                          if (arr[j].nama < arr[index].nama) {
                         index = j;
                         }
                       }

                       if (index != i) {
                       swap(arr[i], arr[index]);
                  }
               }
        break;

        case 2 : for (int i = 0; i < arrSize-1; i++) {
                    int index = i;

                       for (int j = i+1; j < arrSize; j++) {
                          if (arr[j].nisn < arr[index].nisn) {
                         index = j;
                         }
                       }

                       if (index != i) {
                       swap(arr[i], arr[index]);
                  }
               }
        break;
        
        case 3 : for (int i = 0; i < arrSize-1; i++) {
                    int index = i;

                       for (int j = i+1; j < arrSize; j++) {
                          if (arr[j].nilai < arr[index].nilai) {
                         index = j;
                         }
                       }

                       if (index != i) {
                       swap(arr[i], arr[index]);
                  }
               }
        break;
        
    }
}

void selection(Record arrOfRecord[], int arrSize){
        cout<< "\nSORT\n";
        selectionSort(arrOfRecord, arrSize);
    printRecord(arrOfRecord, arrSize);
}

void bubbleSort(Record arr[], int n) {  
    int i, j, k;  
    cout<<"Urutan yang bisa dipilih\n  1.Nama\n  2.NISN\n  3.Nilai\n   Urutkan dari : ";
    cin>>k;
    switch(k){
        case 1 :for (i = 0; i < n-1; i++)      
                for (j = 0; j < n-i-1; j++)  
                if (arr[j].nama > arr[j+1].nama)  
                swap(arr[j], arr[j+1]);
        break;
        
        case 2 :for (i = 0; i < n-1; i++)      
                for (j = 0; j < n-i-1; j++)  
                if (arr[j].nisn > arr[j+1].nisn)  
                swap(arr[j], arr[j+1]);
        break;
        
        case 3 :for (i = 0; i < n-1; i++)      
                for (j = 0; j < n-i-1; j++)  
                if (arr[j].nilai > arr[j+1].nilai)  
                swap(arr[j], arr[j+1]);
        break;
    }
} 

void bubble(Record arrOfRecord[], int arrSize){
        cout<< "\nSORT\n";
        bubbleSort(arrOfRecord, arrSize);
    printRecord(arrOfRecord, arrSize);
}

void simpleSelectionSortNISN(Record arrofRecord[], int arrSize){
    int i,j;
    Record key;
    for (i = 1; i < arrSize; i++) {  
                key = arrofRecord[i]; 
                 j = i - 1;  
  
                 while (j >= 0 && arrofRecord[j].nisn > key.nisn) {  
                  arrofRecord[j + 1] = arrofRecord[j];  
                   j = j - 1;  
                  }  
                    arrofRecord[j + 1] = key;
              } 
}

void simpleSelectionSortNilai(Record arrofRecord[], int arrSize){
    int i,j;
    Record key;
    for (i = 1; i < arrSize; i++) {  
                key = arrofRecord[i]; 
                 j = i - 1;  
  
                 while (j >= 0 && arrofRecord[j].nilai > key.nilai) {  
                  arrofRecord[j + 1] = arrofRecord[j];  
                   j = j - 1;  
                  }  
                    arrofRecord[j + 1] = key;
              } 
}
//searching function------------------------------------------------------------------

int binarySearchNISN(Record arr[], int l, int r, string x) 
{ 
    if (r >= l) { 
        int mid = (l + r) / 2; 
 
        if (arr[mid].nisn == x) {
            return mid; 
            }
        else if (arr[mid].nisn > x) 
        return binarySearchNISN(arr, l, mid - 1, x); 
        else
        return binarySearchNISN(arr, mid + 1, r, x); 
    } 
  
} 

int binarySearchNilai(Record arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = (l + r) / 2; 
 
        if (arr[mid].nilai == x) {
            return mid; 
           }
        else if (arr[mid].nilai > x) 
        binarySearchNilai(arr, l, mid - 1, x); 
        else
        binarySearchNilai(arr, mid + 1, r, x); 
    } 
  
    return -1; 
} 

//Ubah function------------------------------------------------------------------

void perubahan(string Nisn,string Nama,int Nilai,Record arr[], int arrSize){
    arr[arrSize].nisn = Nisn;
    arr[arrSize].nama = Nama;
    arr[arrSize].nilai = Nilai;
}

//Main ea---------------------------------------------------------------------------------
int main(){
    Record records[7] = {
        Record("9960312699", "Handi Ramadhan", 90),
        Record("9963959682", "Rio", 55),
        Record("9950310962", "Ronaldo", 80),
        Record("9970272750", "Achmad", 60),
        Record("9970293945", "Alivia", 70),
        Record("9965653989", "Arief", 60),
        Record("9952382180", "Ari", 65)
    };
//deklarasi yg perlu
        int n = sizeof(records) / sizeof(records[0]); 
        int x, resultNISN, resultNilai,ubahNilai;
        string y, ubahNISN, ubahNama;
//lanjut program    
    cout<<"------------Data Awal------------\n\n";
    printRecord(records, 7);
    cout<<"\n\n 1.Sorting 2.Search 3.Ubah Data\n\n pilih program : ";
    cin>>n;
    switch(n){
        case 1 : goto sorting;
        break;
        case 2 : goto search;
        break;
        case 3 : goto ubah;
        break;
    }
    
    //Sorting-------------------------------------------
    sorting:
    cout<<"\n 1.Penyisipan (Insertion)\n 2.Seleksi(Selection)\n 3.Gelembung (Bubble)\npilih jenis sorting : ";
    cin>>m;
     switch(m){
        case 1 : insertion(records,7);
        break;
        case 2 : selection(records,7);
        break;
        case 3 : bubble(records,7);
        break;
    }
        return 0;
    //Ubah data----------------------------------------
    ubah:
    selectionSort(records,7);
        cout<<"Pencarian Nilai\n Data yang kamu ingin ubah (nilai) : ";
        cin>>x;
        resultNilai = binarySearchNilai(records, 0, n - 1, x); 
         (resultNilai == -1) ? cout << "\n\nData yang Kamu cari tidak ketemu :("
                             : cout << "\n\nData yang kamu cari : \n" << records[resultNilai].nisn << ", " << records[resultNilai].nama << ", " << records[resultNilai].nilai << "\n\n";
        cout<<"perubahan apa yang akan dilakukan?? \n (input dengan format [NISN] [Nama] [Nilai] )\n";
        cin>>ubahNISN>>ubahNama>>ubahNilai;
        perubahan(ubahNISN,ubahNama,ubahNilai,records,resultNilai);
        cout<<"\n\nhasil perubahan data tadi adalah : \n  "<<records[resultNilai].nisn << ", " << records[resultNilai].nama << ", " << records[resultNilai].nilai << "\n\n Keselruhan data terbaru adalah : \n";
        printRecord(records,7)
        return 0;
    //Searching----------------------------------------
    search: 
    selectionSort(records,7);
    cout<<"Pencarian NISN\n Data yang kamu cari : ";
        cin>>y;
        resultNISN = binarySearchNISN(records, 0, n - 1, y); 
        printRecord(records, 7);
         (resultNISN == -1) ? cout << "\n\nData yang Kamu cari tidak ketemu :("
                            : cout << "\n\nData yang kamu cari : \n" << records[resultNISN].nisn << ", " << records[resultNISN].nama << ", " << records[resultNISN].nilai << "\n"; 

    return 0;

}
