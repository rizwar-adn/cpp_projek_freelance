#include <iostream>
#include <string.h>
using namespace std;
int tabungan;

void perkenalan(){

	int umur;
	string nama,asal_sekolah,askot;
	cout << "Aplikasi Perkenalan Diri" << endl;
	cout << "========================" << endl;
	cout << "Masukkan Nama Anda : ";
	cin >> nama;

	cout << "Masukkan Asal Sekolah : ";
	cin >> asal_sekolah;

	cout << "Masukkan Asal Kota : ";
	cin >> askot;

	cout << "Masukkan Umur : ";
	cin >> umur;
	cout << endl;
	cout << "Output : " << endl;
	cout << "======================" << endl;
	cout << "Nama : " << nama << endl;
	cout << "Asal Sekolah : " << asal_sekolah << endl;
	cout << "Asal Kota : " << askot << endl;
	cout << "Umur : " << umur << endl;
	cout << "Halo " << nama << " Selamat Datang!!" << endl;
}

void sebut_nama(){

	string nama;
	cout << "Aplikasi Sebut Nama" << endl;
	cout << "======================" << endl;
	cout << "Masukkan Nama Kamu : ";
	cin >> nama;

	cout << "Halo " << nama << " Selamat Datang!!" << endl;
}

void pass(){

	string pass;
	cout << "Aplikasi Password Sekolah Sederhana" << endl;
	cout << "===================================" << endl;
	cout << "Masukkan Password Anda : ";
	cin >> pass;

	if(pass == "pesatku"){
		cout << "Password Anda Benar!!" << endl;
		cout << "Selamat Datang!!" << endl;
	}else{
		cout << "Password Anda Salah" << endl;
	}
}

void rumus_pp(){

	int pil,luas,panjang,lebar,keliling;
	cout << "Aplikasi Rumus Persegi Panjang" << endl;
	cout << "===============================" << endl;
	cout << "1. Rumus Luas" << endl;
	cout << "2. Rumus Keliling" << endl;
	cout << "Pilih Pilihan Anda : ";
	cin >> pil;

	if(pil == 1){
		system("cls");
		cout << "Rumus Luas Persegi Panjang" << endl;
		cout << "Masukkan Nilai Panjang : ";
		cin >> panjang;
		cout << "Masukkan Nilai Lebar : ";
		cin >> lebar;

		luas = panjang * lebar;
		cout << "Hasil : " << luas << endl;
	}else if(pil == 2){
		system("cls");
		cout << "Rumus Keliling Persegi Panjang" << endl;
		cout << "Masukkan Nilai Panjang : ";
		cin >> panjang;
		cout << "Masukkan Nilai Lebar : ";
		cin >> lebar;

		keliling = 2*(panjang+lebar);
		cout << "Hasil : " << keliling << endl;
	}else{
		cout << "Pilihan Anda Tidak Tersedia" << endl;
	}
}

void snmptn(){

	int jd,pas[10],pts[10],hitung[10];
	string nama[10],japres[10],lomba[10],ket[10];
	cout << "Aplikasi Kelulusan SNMPTN" << endl;
	cout << "==========================" << endl;
	cout << "Masukkan Jumlah Data : ";
	cin >> jd;

	if(jd <= 10){

		for(int i=0;i<jd;i++){
		cout << endl;
		cout << "Data Ke " << i+1 << endl;

		cout << "Masukkan Nama Siswa/Siswi : ";
		cin >> nama[i];

		cout << "Masukkan Nilai PTS : ";
		cin >> pts[i];

		cout << "Masukkan Nilai PAS : ";
		cin >> pas[i];

		cout << "Apakah siswa/siswi Mempunyai Japres? (y/t): ";
		cin >> japres[i];
		if(japres[i] == "y"){

		cout << "Japres Dibidang Lomba apa? : ";
		cin >> lomba[i];
		hitung[i] = pts[i]+pas[i] + 20;
		}else if(japres[i] == "t"){
		hitung[i] = pts[i]+pas[i];
		lomba[i] = "Tidak Ada";
		}else{
			cout << "Pilihan Anda Tidak Tersedia!!" << endl;
		}

		if((hitung[i] >= 155)&&(hitung[i] <= 200)){
			ket[i] = "Lulus";
		}else{
			ket[i] = "Tidak Lulus";
		}
	}

	cout << "Output : " << endl;

	for(int i=0;i<jd;i++){
		cout << endl;
		cout << "Data Ke " << i+1 << endl;
		cout << "Nama : " << nama[i] << endl;
		cout << "Nilai PTS : " << pts[i] << endl;
		cout << "Nilai PAS : " << pas[i] << endl;
		cout << "Total Nilai : " << hitung[i] << endl;
		cout << "Japres : " << lomba[i] << endl;
		cout << "Keterangam  : " << ket[i] << endl;
	}
	}else{
		cout << "Program Tidak Tersedia!!" << endl;
	}

}

void grade(){

	int nilai;
	char grade;
	cout << "Aplikasi Grade Nilai" << endl;
	cout << "=========================" << endl;
	cout << "Masukkan Nilai Anda : ";
	cin >> nilai;

	if((nilai >= 90)&&(nilai<= 100)){
		grade = 'A';
	}else if((nilai >= 80)&&(nilai < 90)){
		grade = 'B';
	}else if((nilai >= 70)&&(nilai < 80)){
		grade = 'C';
	}else if((nilai >= 60)&&(nilai < 70)){
		grade = 'D';
	}else{
		cout << "Pilihan Anda Tidak Tersedia" << endl;
	}

	cout << "Grade Anda : " << grade << endl;
}

void kalender(){

	int bulan[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int bulwal[12],tangwal[12],tangtuj[12];
    int hitung[12],bultuj[12],hitungtgl[12],hitungbln[12];

	cout << "Aplikasi Kalender" << endl;

	for(int i = 0;i < 1;i++){
    cout << "Masukkan Bulan awal : ";
    cin >> bulwal[i];
    cout << "Masukkan Tanggal Awal : ";
    cin >> tangwal[i];
    cout << "Masukkan Tanggal Tambah : ";
    cin >> tangtuj[i];

    hitung[i] = tangwal[i] + tangtuj[i];
    if((hitung[i] > 30)&&(hitung[i] <= 60)){
    hitungtgl[i] = hitung[i] - 30;
    hitungbln[i] = bulwal[i] + 1;
    cout << "Tanggal Selanjutnya : " << hitungtgl[i] << endl;
    cout << "Bulan Selanjutnya : " << hitungbln[i] << endl;
    }else if((hitung[i] > 60)&&(hitung[i] <= 90)){
    hitungtgl[i] = hitung[i] - 30;
    hitungbln[i] = bulwal[i] + 2;
    cout << "Tanggal Selanjutnya : " << hitungtgl[i] << endl;
    cout << "Bulan Selanjutnya : " << hitungbln[i] << endl;
    }else{
    cout << "Tanggal Selanjutnya : " << hitung[i] << endl;
    cout << "Bulan Saat Ini : " << bulwal[i] << endl;
	}
	}
}

void tabung(){

	int pil,phi,tinggi,jari,hitung;

	cout << "APLIKASI MENGHITUNG VOLUME TABUNG" << endl;
	cout << "===========================" << endl;
	cout << "1. Phi = 22/7" << endl;
	cout << "2. Phi = 3,14" << endl;

	cout << "Pilih Pilihan Phi : ";
	cin >> pil;

	if(pil <= 2){

		if(pil == 1){
		cout << endl;
		phi = 22/7;

		cout << "Masukkan Tinggi Tabung : ";
		cin >> tinggi;

		cout << "Masukkan Jari-Jari Alas : ";
		cin >> jari;

		hitung = phi*jari*jari*tinggi;

		cout << "Volume Tabung : " << hitung << endl;

	}else if(pil == 2){
		float phi;
		cout << endl;
		phi = 3.14;

		cout << "Masukkan Tinggi Tabung : ";
		cin >> tinggi;

		cout << "Masukkan Jari-Jari Alas : ";
		cin >> jari;

		hitung = phi*jari*jari*tinggi;

		cout << "Volume Tabung : " << hitung << endl;

	}


	}else{

		cout << "Pilihan Anda Tidak Tersedia!!" << endl;
	}

}

void rata_rata(){

	int array[10],jd,hitung;

	cout << "APLIKASI MENGHITUNG RATA-RATA" << endl;
	cout << "==============================" << endl;
	cout << "Masukkan Jumlah Data : ";
	cin >> jd;

	if(jd <= 10){

		for(int i = 0;i < jd;i++){

		cout << endl;
		cout << "Variable Ke " << i+1 << endl;
		cout << "Masukkan Variable Array : ";
		cin >> array[i];
		hitung += array[i] / jd;
	}
	cout << "Rata Rata : " << hitung << endl;

	}else{

		cout << "Pilihan Anda Tidak Tersedia!!" << endl;
	}
}

void tt(){

	int norek,hitung,nominal;

	cout << "TARIK TUNAI" << endl;
	cout << "===========" << endl;
	cout << "Masukkan No Rekening Anda : ";
	cin >> norek;

	cout << "Masukkan Nominal Yang Ingin ditarik tunai : ";
	cin >> nominal;

	hitung = tabungan - nominal;
	cout << "Sisa Saldo Anda : " << hitung << endl;

}

void transfer(){

	int norek_anda,norek_tujuan,nominal,hitung;
	string melanjutkan_transaksi,notif;

	cout << "TRANSFER" << endl;
	cout << "========" << endl;
	cout << "Masukkan No Rekening Anda : ";
	cin >> norek_anda;

	cout << "Masukkan No Rek Tujuan : ";
	cin >> norek_tujuan;

	cout << "Apakah Anda Yakin Ingin Melanjutkan Transaksi (ya/y) (tidak/t) : ";
	cin >> melanjutkan_transaksi;

	if(melanjutkan_transaksi == "ya" && "y"){

		cout << "Masukkan Jumlah Nominal Yang Ingin di Transfer : ";
		cin >> nominal;
 		hitung = tabungan - nominal;
		notif = "Transaksi Berhasil";

		cout << "Notif : " << notif << endl;
		cout << "Sisa Saldo Anda : " << hitung << endl;
	}else if(melanjutkan_transaksi == "tidak" || "t"){

		hitung = tabungan;
		notif = "Transaksi Dibatalkan";
		cout << "Notif : " << notif << endl;
	cout << "Sisa Saldo Anda : " << hitung << endl;
	}else{

		cout << "Pilihan Anda Tidak Tersedia" << endl;
	}

}

void ct(){

		cout << "Cek Tabungan" << endl;
		cout << "========================" << endl;
		cout << "Saldo Tabungan Anda : " << tabungan << endl;

	}

void atm(){

	int pil;
	cout << "Masukkan Saldo Tabungan Anda : ";
	cin >> tabungan;

	system("cls");
	menu:

	cout << "APLIKASI ATM" << endl;
	cout << "==============" << endl;
	cout << "1. Cek Tabungan" << endl;
	cout << "2. Transfer" << endl;
	cout << "3. Tarik Tunai" << endl;
	cout << "4. EXIT" << endl;

	cout << "Pilih Pilihan Anda : ";
	cin >> pil;

	if(pil <= 4){

		switch(pil){
		case 1:
			system("cls");
			ct();
			goto menu;
		break;
		case 2:
			system("cls");
			transfer();
			goto menu;
		break;
		case 3:
			system("cls");
			tt();
			goto menu;
		break;
		case 4:
			int main();
		break;
		default:
			cout << "Pilihan Anda Tidak Tersedia" << endl;
	}

	}else{

	cout << "Pilihan Anda Tidak Tersedia" << endl;
	}
}

void parkir(){

	int pil,jampar,jampar_motor,jampar_mobil,tambahan,hitung;

	cout << "APLIKASI PERHITUNGAN PARKIR" << endl;
	cout << "=============================" << endl;
	cout << "1. Motor" << endl;
	cout << "2. Mobil" << endl;

	cout << "Masukkan Pilihan Anda : ";
	cin >> pil;

	if(pil <= 2){

	if(pil == 1){
		system("cls");

		cout << "MOTOR" << endl;
		cout << "Harga Parkir 2000 2 Jam pertama (Tambahan + 500)" << endl;
		cout << "Masukkan Total Jam Parkir : ";
		cin >> jampar;

		tambahan = 500;

		hitung = (tambahan * jampar) + 1000 ;

		cout << "Total Bayar : " << hitung << endl;

	}else if(pil == 2){

		system("cls");

		cout << "MOBIL" << endl;
		cout << "Harga Parkir 4000 2 Jam pertama (Tambahan + 1000)" << endl;
		cout << "Masukkan Total Jam Parkir : ";
		cin >> jampar;

		tambahan = 1000;

		hitung = (tambahan * jampar) + 2000 ;

		cout << "Total Bayar : " << hitung << endl;

	}

	}else{

	cout << "Pilihan Anda Tidak Tersedia!!" << endl;

	}

}

void ulangan(){

	int jd,i,uas[36],uts[36],ukk[36],total[36];
	string nama[36],lulus_tidaklulus[36];

	cout << "APLIKASI DATA ULANGAN SEKOLAH" << endl;
	cout << "==============================" << endl;

	cout << "Masukkan Jumlah Data : ";
	cin >> jd;

	for(i = 0;i < jd;i++){
		cout << endl;

		cout << "Data Ke " << i+1 << endl;

		cout << "Masukkan Nama Siswa : ";
		cin >> nama[i];

		cout << "Masukkan Nilai Ulangan UAS : ";
		cin >> uas[i];

		cout << "Masukkan Nilai Ulangan UTS : ";
		cin >> uts[i];

		cout << "Masukkan Nilai Ulangan UKK : ";
		cin >> ukk[i];

		total[i] = uas[i] + uts[i] + ukk[i];

		if((total[i] >= 225) && (total[i] <= 300)){

			lulus_tidaklulus[i] = "Lulus";

		}else if(total[i] < 225){

			lulus_tidaklulus[i] = "Tidak Lulus";

		}else{

			lulus_tidaklulus[i] = "Pilihan Anda Tidak Tersedia!!";
		}

	}
	cout << endl;
	cout << "OUTPUT" << endl;
	cout << "=============================" << endl;

	for(i = 0;i < jd;i++){
		cout << endl;

		cout << "Data Ke " << i+1 << endl;
		cout << "Nama : " << nama[i] << endl;
		cout << "Nilai UAS : " << uas[i] << endl;
		cout << "Nilai UTS : " << uts[i] << endl;
		cout << "Nilai UKK : " << ukk[i] << endl;
		cout << "Total Nilai : " << total[i] << endl;
		cout << "Keterangan : " << lulus_tidaklulus[i] << endl;
	}
	cout << endl;
}

void poli(){

	int x,hitung;

	cout << "APLIKASI POLINOMIAL MATEMATIKA SEDERHANA" << endl;
	cout << "f(x) = x2 + 7x2 - 4x + 3" << endl;
	cout << "Masukkan Nilai x : ";
	cin >> x;

	hitung = (x*x*x) + (7*(x*x)) - (4*x) + 3;

	cout << "Hasil : " << hitung << endl;

}

void kalkulator(){

	int pil,angka1,angka2,hitung;

	cout << "APLIKASI KALKULATOR SEDERHANA 2 ANGKA" << endl;
	cout << "1. Pertambahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "5. Modulus" << endl;

	cout << "Pilih Pilihan Anda : ";
	cin >> pil;

	if(pil == 1){
		system("cls");

		cout << "PERTAMBAHAN" << endl;
		cout << "Masukkan Angka Ke 1 : ";
		cin >> angka1;

		cout << "Masukkan Angka Ke 2 : ";
		cin >> angka2;

		hitung = angka1 + angka2;

		cout << "Hasil : " << hitung << endl;

	}else if(pil == 2){
		system("cls");

		cout << "PENGURANGAN" << endl;
		cout << "Masukkan Angka Ke 1 : ";
		cin >> angka1;

		cout << "Masukkan Angka Ke 2 : ";
		cin >> angka2;

		hitung = angka1 - angka2;

		cout << "Hasil : " << hitung << endl;

	}else if(pil == 3){
		system("cls");

		cout << "PERKALIAN" << endl;
		cout << "Masukkan Angka Ke 1 : ";
		cin >> angka1;

		cout << "Masukkan Angka Ke 2 : ";
		cin >> angka2;

		hitung = angka1 * angka2;

		cout << "Hasil : " << hitung << endl;

	}else if(pil == 4){
		system("cls");

		cout << "PEMBAGIAN" << endl;
		cout << "Masukkan Angka Ke 1 : ";
		cin >> angka1;

		cout << "Masukkan Angka Ke 2 : ";
		cin >> angka2;

		hitung = angka1 / angka2;

		cout << "Hasil : " << hitung << endl;

	}else if(pil == 5){
		system("cls");

		cout << "MODULUS" << endl;
		cout << "Masukkan Angka Ke 1 : ";
		cin >> angka1;

		cout << "Masukkan Angka Ke 2 : ";
		cin >> angka2;

		hitung = angka1 % angka2;

		cout << "Hasil : " << hitung << endl;

	}else{

		cout << "Pilihan Anda Tidak Tersedia!!" << endl;

	}

}

void jw(){

	int pil,s,t,v;
	//s = jarak,t = waktu tempuh(jam),v = kecepatan(km/jam)

	cout << "APLIKASI RUMUS JARAK/WAKTU" << endl;
	cout << "============================" << endl;
	cout << "1. Rumus Jarak" << endl;
	cout << "2. Rumus Waktu" << endl;

	cout << "Masukkan Pilihan Anda : ";
	cin >> pil;

	if(pil == 1){
		system("cls");

		cout << "RUMUS JARAK" << endl;
		cout << "Masukkan Waktu Tempuh : ";
		cin >> t;

		cout << "Masukkan Kecepatan : ";
		cin >> v;
		cout << endl;

		s = t * v;
		cout << "Hasil : " << s << endl;

	}else if(pil == 2){
		system("cls");

		cout << "RUMUS WAKTU" << endl;
		cout << "Masukkan Jarak : ";
		cin >> s;

		cout << "Masukkan Kecepatan : ";
		cin >> v;
		cout << endl;

		t = s * v;
		cout << "Hasil : " << t << endl;

	}else{

		cout << "Pilihan Anda Tidak Tersedia!!" << endl;
	}

}

void operator_aritmatika(){

	cout << "APLIKASI OPERATOR ARITMATIKA" << endl;
	cout << "==============================" << endl;

	int banding;
	int angka = 10;
	angka += 10;
	int kurang = angka - 20;
	kurang += 20;
	kurang -=10;
	kurang += 10;

	int modulus = kurang % 3;

	banding = kurang == 20 && modulus == 2;
	cout << modulus << endl;
	cout << banding << endl;
}

void kasir(){

	int jd,i,angbar[5],jumlah[5],harga[5],hitung[5],subto,uang,kembalian;
	string nambar[5];

	cout << "APLIKASI KASIR BELANJA" << endl;
	cout << "=======================" << endl;
	cout << "1. Telur" << endl;
	cout << "2. Ayam" << endl;
	cout << "3. Kecap" << endl;
	cout << "4. Minyak" << endl;
	cout << "5. Beras" << endl;

	cout << "Masukkan Jumlah Data : ";
	cin >> jd;

	if(jd <= 5){

		for(i = 0;i < jd;i++){
		cout << endl;

		cout << "Data Ke " << i+1 << endl;
		cout << "Masukkan (Angka) Barang : ";
		cin >> angbar[i];

		cout << "Masukkan Jumlah Nya : ";
		cin >> jumlah[i];

		if(angbar[i] == 1){

			nambar[i] = "Telur";
			harga[i] = 2500;
			hitung[i] = harga[i] * jumlah[i];

		}else if(angbar[i] == 2){

			nambar[i] = "Ayam";
			harga[i] = 9500;
			hitung[i] = harga[i] * jumlah[i];
		}else if(angbar[i] == 3){

			nambar[i] = "Kecap";
			harga[i] = 5000;
			hitung[i] = harga[i] * jumlah[i];
		}else if(angbar[i] == 4){

			nambar[i] = "Minyak";
			harga[i] = 7500;
			hitung[i] = harga[i] * jumlah[i];
		}else if(angbar[i] == 5){

			nambar[i] = "Beras";
			harga[i] = 8000;
			hitung[i] = harga[i] * jumlah[i];
		}

	}
	cout << endl;
	cout << "OUTPUT : " << endl;
	cout << "==============================" << endl;
	cout << endl;

	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "No		Nama Barang		Harga		Jumlah		Total" << endl;
	for(i = 0;i < jd;i++){

		cout << endl;
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << i+1 <<"		"<< nambar[i] <<"			"<< harga[i] <<"		"<< jumlah[i] <<"		"<< hitung[i] << endl;

		subto += hitung[i];

	}

	cout << "Subtotal : " << subto << endl;
	cout << "Masukkan Jumlah Uang Anda : ";
	cin >> uang;

	kembalian = uang - subto;
	cout << "Kembalian : " << kembalian << endl;

	}else{

	cout << "Pilihan Anda Tidak Tersedia!!" << endl;

	}

}

void kamus(){

	int jd,i,angkbar[10];
	string koskot_inggris[10],koskot_indo[10];

	cout << "APLIKASI KAMUS SEDERHANA" << endl;
	cout << "========================" << endl;
	cout << "1. Buku" << endl;
	cout << "2. Tas" << endl;
	cout << "3. Kasur" << endl;
	cout << "4. Pensil" << endl;
	cout << "5. Penghapus" << endl;

	cout << "Masukkan Jumlah Data : ";
	cin >> jd;

	for(i = 0;i < jd;i++){
		cout << endl;

		cout << "Data Ke " << i+1 << endl;
		cout << "Masukkan (Angka) Barang : ";
		cin >> angkbar[i];

		if(angkbar[i] == 1){
			koskot_inggris[i] = "Book";
			koskot_indo[i] = "Buku";
		}else if(angkbar[i] == 2){
			koskot_inggris[i] = "Bag";
			koskot_indo[i] = "Tas";
		}else if(angkbar[i] == 3){
			koskot_inggris[i] = "Bed";
			koskot_indo[i] = "Kasur";
		}else if(angkbar[i] == 4){
			koskot_inggris[i] = "Pencil";
			koskot_indo[i] = "Pensil";
		}else if(angkbar[i] == 5){
			koskot_inggris[i] = "Eraser";
			koskot_indo[i] = "Penghapus";
		}else{
			cout << "Pilihan Anda Tidak Tersedia!!" << endl;
		}
	}
	cout << "OUTPUT :" << endl;
	cout << "============================================" << endl;

	for(i = 0;i < jd;i++){
		cout << endl;

		cout << "Data Ke " << i+1 << endl;
		cout << "Kosa Kata Indonesia : " << koskot_indo[i] << endl;
		cout << "Kosa Kata Inggris : " << koskot_inggris[i] << endl;

	}
}

void bb_ideal(){

	int pil,tb,hitung;

	cout << "APLIKASI MENGHITUNG BB IDEAL" << endl;
	cout << "=============================" << endl;
	cout << "1. PRIA" << endl;
	cout << "2. WANITA" << endl;

	cout << "Masukkan Pilihan Anda : ";
	cin >> pil;

	if(pil == 1){
		cout << endl;
		cout << "PRIA" << endl;
		cout << "Masukkan Tinggi Badan Anda(cm) : ";
		cin >> tb;

		hitung = (tb - 100) - (tb - 100) * 10/100;
		cout << "Berat Badan Ideal Anda (Pria) : " << hitung << endl;
	}else if(pil == 2){
		cout << endl;
		cout << "WANITA" << endl;
		cout << "Masukkan Tinggi Badan Anda(cm) : ";
		cin >> tb;

		hitung = (tb - 100) - (tb - 100) * 15/100;
		cout << "Berat Badan Ideal Anda (Wanita) : " << hitung << endl;
	}else{
		cout << "Pilihan Anda Tidak Tersedia" << endl;
	}

}

void menu(){

	int pil;

	awal:
	cout << "TAMPILAN MENU APLIKASI PORTFOLIO" << endl;
	cout << "=======================" << endl;
	cout << "1. Menghitung Rumus BB Ideal" << endl;
	cout << "2. Kamus Sederhana" << endl;
	cout << "3. Array Kasir Belanja" << endl;
	cout << "4. Operator Aritmatika" << endl;
	cout << "5. Rumus Kecepatan/Waktu" << endl;
	cout << "6. Program Kalkulator" << endl;
	cout << "7. Polinomial MTK" << endl;
	cout << "8. Data Ujian Sekolah" << endl;
	cout << "9. Program Perhitungan Parkir" << endl;
	cout << "10. Program ATM" << endl;
	cout << "11. Program Menghitung Rata-Rata" << endl;
	cout << "12. Program Menghitung Volume Tabung" << endl;
	cout << "13. Program Kalender" << endl;
	cout << "14. Program Grade Nilai Sekolah" << endl;
	cout << "15. Program Kelulusan SNMPTN" << endl;
	cout << "16. Program Rumus Persegi Panjang" << endl;
	cout << "17. Program Password Sederhana" << endl;
	cout << "18. Program Sebut Nama" << endl;
	cout << "19. Program Perkenalan" << endl;
	cout << "Masukkan Pilihan Anda : ";
	cin >> pil;

	if(pil <= 19){

		switch(pil){
		case 1:
			system("cls");
			bb_ideal();
			goto awal;
		break;
		case 2:
			system("cls");
			kamus();
			goto awal;
		break;
		case 3:
			system("cls");
			kasir();
			goto awal;
		break;
		case 4:
			system("cls");
			operator_aritmatika();
			goto awal;
		break;
		case 5:
			system("cls");
			jw();
			goto awal;
		break;
		case 6:
			system("cls");
			kalkulator();
			goto awal;
		break;
		case 7:
			system("cls");
			poli();
			goto awal;
		break;
		case 8:
			system("cls");
			ulangan();
			goto awal;
		break;
		case 9:
			system("cls");
			parkir();
			goto awal;
		break;
		case 10:
			system("cls");
			atm();
			goto awal;
		break;
		case 11:
			system("cls");
			rata_rata();
			goto awal;
		break;
		case 12:
			system("cls");
			tabung();
			goto awal;
		case 13:
			system("cls");
			kalender();
			goto awal;
		case 14:
			system("cls");
			grade();
			goto awal;
		case 15:
			system("cls");
			snmptn();
			goto awal;
		case 16:
			system("cls");
			rumus_pp();
			goto awal;
		case 17:
			system("cls");
			pass();
			goto awal;
		case 18:
			system("cls");
			sebut_nama();
			goto awal;
		case 19:
			system("cls");
			perkenalan();
			goto awal;
		default:
			cout << "Pilihan Anda Tidak Tersedia!!" << endl;
	}

	}else{

	cout << "Pilihan Anda Tidak Tersedia" << endl;

	}

}

int main(){
int pass,password = 3030,i = 0;

do{
	cout << "Masukkan Password Anda : ";
	cin >> pass;

	if(pass == password){
		menu();
		system("cls");
	}
	i++;
}while(i < 3);

cout << "Anda Kami Blokir!!!" << endl;

return 0;
}
