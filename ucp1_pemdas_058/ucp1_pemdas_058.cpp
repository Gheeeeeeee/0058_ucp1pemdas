//1. int nHargaBarang, char pilihan, string NamaPenjual
//2. void display(){
// cout << " contoh" << endl;
// }
// int main (){
// display();
// }
//3.do{
//input();
//display();
//cout << "Apahah ingin membeli lagi? ";
//cin >> pilihan;
//    }while (pilihan == 'y' || pilihan == 'Y');
//
//4.if (NilaiUjian > 75){
// status = "LULUS";
// }
// else{
//  status = "TIDAK LULUS" 
// }
//5.struct mahasiswa {
//string nim;
//string nama;
//detailalamat alamat;
//int umur;

#include <iostream>
using namespace std;

string NamaKota, Status;
int sensor1, sensor2, sensor3, total;

void input() {

    
    cout << " Masukkan NamaKota :" ;
    cin >> NamaKota;
    cout << " tingkat polutan di hari pertama :";
    cin >> sensor1;
    cout << " tingkat polutan di hari kedua :";
    cin >> sensor2;
    cout << " tingkat polutan di hari ketiga :";
    cin >> sensor3;
}




void display() {
    int RerataHarian;
    string Status;
    RerataHarian = (sensor1 + sensor2 + sensor3) / 3;
    cout << "Rata - Rata Harian : " << RerataHarian << endl;
    if (RerataHarian <= 75 || sensor1 <= 45 || sensor2 <= 45 || sensor3 <= 45)
    {
        Status = "SEHAT";
    }
    else {
        Status = " TIDAK SEHAT ";
    }
 
    cout << "kondisi :" << Status << endl;
    
   
    
}

int main()

{
  
    char pilihan;

    do 
    {
        input();
        display();

        cout << " apakah ingin mengulang penghitungan polutan lagi? " << endl;
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');
}

