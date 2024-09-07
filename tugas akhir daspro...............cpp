/*
NIM      :432022611033
NAME     :MUCH.DEF PUTRA SGHOLIHIN
FAKULTAS : SAINT AND TEKNOLOGI
PRODI    : TEKNIK INFORMATIKA
*/

#include<iostream>
using namespace std;

void display(){
	system("cls");
}

void pembuka(){//penambahan fungsi pembuka void artinya kosong
	cout<<"|                   ASSALAMUALAIKUM,WELCOM MY laundry             |"<<endl;
	cout<<"|                 jl Ruhui Rahayu I Nomor 10 sepinggan            |"<<endl;
}
void program1();//penambahan fungsi program
void kembalian
(int x, int y){//penambahan fungsi kembali
int z;//z=kembalian x= byar y= jumlah 
z=x-y;
cout<<"kembali :Rp. "<<z<<endl;
}
void penutup(){//penambahan fungsi kembali
	cout<<"|                             THANK YOU FOR ME                      |"<<endl; 
};

int main(){
	//variabel fungsi utama tipe data
	system("cls");
    display();
	char pil;
	int i=0 ;
	string username,password;
	system("cls");
	
	cout<<" _____________________________________________________"<<endl;
	cout<<"|                     EXTRALAUNDRY                    |"<<endl;
	cout<<"|_____________________________________________________|"<<endl;
	cout<<"|                  halo selamat datang                |"<<endl;
	cout<<"|       di extra laundry kepuasan anda adalah         |"<<endl;
	cout<<"|                  tanggung jawam kami!               |"<<endl;
    cout<<"|_____________________________________________________|"<<endl;
    cout<<endl;

//perinta memasukkan username cuma 3 kali yha pengulangan
for(i=0;i<=2;i++){
	cout<<"   USERNAME     :";cin>>username;
	cout<<"......................................................."<<endl;
	cout<<"   PASSWORD     :";cin>>password;
	cout<<"......................................................."<<endl;
	cout<<endl;
     
//perintah selesai lanjut ke program masukkan username dan paswor masukkan salah //seleksi
      if(username=="defputra"&&password=="asik"){
	  
cout<<" ___________________________________________________________ "<<endl;
cout<<"|                       anda berhasil masuk                 |"<<endl;
cout<<"|___________________________________________________________|"<<endl;
cout<<endl;

//pemanggilan funsi program
program1();

return 0;
        }
        //tampilkan jika username yang di masukkan salah
         else{
         	cout<<"|       maaf user & password salah                          |"<<endl;
         	cout<<"|      mohon masukkan dengan benar                          |"<<endl;
		    }
	        }//perintah yang mucul kalau salah 3 kali cuy
	cout<<"          gak bisa masuk udah 3 kali pulang ajh      "<<endl;
	cout<<"                  username & password salah          "<<endl;
	
}
void program1(){
	system("cls");
     const double diskon1=0.05;//konstanta diskon 1
	 const double diskon2=0.1;//konstanta diskon2
	 //variabel vungsi program tipe data char int string double
	 char nma_pel[30],kode,tambah,kembali,ulang;                   //nama pelanggan 30
	 int berat,harga[7]={12000,8000,7000,5000,4000,3000,2500}, j=0, byr, total,jumlah,bayar,kurang;
	 string jenis,tambahanlay; 
	 double jum_diskon;
	 
	 cout<<" _____________________________________________________________"<<endl;
	 pembuka();//pemanggilan fungsi pembuka
	 cout<<"|_____________________________________________________________|"<<endl;
	 //perulangan kalo pelanggan nambah lagi
	 system("cls");
	 do{
	 	system("cls");
	 	cout<<"---------------------------------------------------------------"<<endl;
	 	cout<<"|                   daftar isi jenis  layanan                  |"<<endl;
	 	cout<<"|--------------------------------------------------------------|"<<endl;
	 	cout<<"| kode. |             jenis layanan   |         harga          |"<<endl;
	 	cout<<"---------------------------------------------------------------|"<<endl;
	 	cout<<"| 1     |  extra cuci+wangi  (1hari)  |      Rp.12000          |"<<endl;
	 	cout<<"| 2     | madium cuci+wangi  (3 hari  |      Rp.8000           |"<<endl;
	 	cout<<"| 3     |   extra kering     (1hari)  |      Rp.7000           |"<<endl;
	 	cout<<"| 4     |extra kering madium (2hari)  |      Rp.5000           |"<<endl;
	 	cout<<"| 5     |       karpet                |      Rp.4000           |"<<endl;
	 	cout<<"| 6     |       korden                |      Rp.3000           |"<<endl;
	 	cout<<"| 7     |        jas                  |      Rp.2500           |"<<endl;
	 	cout<<"|--------------------------------------------------------------|"<<endl;
	 	cout<<endl;
	 	cout<<"|--------------------------------------------------------------|"<<endl;
	 	cout<<"|             masukkan data                                    |"<<endl;
	 	cout<<"|*NOTE: jika berat pakaian lebih dari 5kg diskon 5%            |"<<endl;
	 	cout<<"|       jika lebih dari 10kg diskon 10%                        |"<<endl;
	 	cout<<"|       jika tambhan layanan antar jemput tambahan 5k          |"<<endl;
	 	cout<<"|--------------------------------------------------------------|"<<endl;
	 	 //memasukkan data
	 	cout<<"nama pelanggan :";cin>>nma_pel;
	 	cout<<"pilih kode jenis layanan (1/2/3/4/5/6/7):";cin>>kode;
	 	cout<<"berat pakaian(kg)/satuan(pcs) :";cin>>berat;
	 	cout<<"apa anda tambahan layanan atar jemput(y/n):";cin>>tambah;
	 	cout<<endl;
	 	
	 	cout<<"_______________________________________________________________"<<endl;
	 	cout<<"                             nota kamu                         "<<endl;
	 	cout<<"                   kepuasan anda tanggung jawab kami           "<<endl;
	 	cout<<"_______________________________________________________________"<<endl; 
	 	//percabangan untuk menentukan layanan
	 	switch(kode){
	 		case'1':
	 			jenis="extra cuci+wangi(1hari)";
	 			break;
	 		case'2':
	 			jenis="madium+wangi(3hari)";
	 			j=1;//pemberian nilai atau harga
	 			break;
	 		case'3':
	 			jenis="extra kering";
	 			j=2;
	 			break;
	 		case'4':
	 			jenis="extra kering madium(2hari)";
	 			j=3;
	 			break;
	 		case'5':
	 			jenis="karpet";
	 			j=4;
	 			break;
	 		case'6':
	 			jenis="korden";
	 			j=5;
	 			break;
	 		case'7':
	 			jenis="jas";
	 			j=6;
	 			break;
	 	    default:
	 	    	// jika tdk ada nmr yg di masukkan
	 	    	cout<<"jenis layanan"<<kode<<"tidak ada!"<<endl;
	 	    	
		 }
		if(tambah=='y'){
		tambahanlay="tambah antar jemput Rp.5000";
		byr=5000;
		}else{
		tambahanlay="tidak ada tambahan layanan ";
		byr=0;
		}
		//menghitung total harga
	    total=(berat*harga[j])+byr;
	    
	    //perinta seleksi /percabangan diskon
	    if(berat>=5){
	    	jum_diskon=total*diskon1;//jika berat lebih 5kg
		}else if(berat>=10){
			jum_diskon=total*diskon2;//jika lebih dari 10 kg
		}else{
			//jika berat yg di masukkan kurang dari 5 tdk ada di daftar
			jum_diskon=total*0;
		}
		//penghitungan biaya
		jumlah=total-jum_diskon;
		system("cls");
	    
	cout<<"nama pelanggan                :   "<<nma_pel<<endl;
	cout<<"kode layanan                  :   "<<kode<<endl;
	cout<<"jenis layanan                 :   "<<jenis<<endl;
	cout<<"tambahan layanan              :   "<<tambahanlay<<endl;
	cout<<"berat pakaian/satuan          :   "<<berat<<"kg/pcs"<<endl;
	cout<<"harga                         :   "<<"Rp."<<harga[j]<<endl;//memangil dan menampilkan array harga
	cout<<"total harga sebelum diskon    :   "<<"RP"<<harga[j]<<" * "<<berat<<" Kg/pcs + "<<byr<<" = Rp."<<total<<endl;
	cout<<"diskon                        :   "<<"Rp."<<jum_diskon<<endl;
	cout<<"jumlah biaya setelah diskon   :   "<<"Rp."<<total<<" - "<<jum_diskon<<" = Rp."<<jumlah<<endl;
	cout<<endl;
	cout<<"|-------------------------anda belanja anda beramal--------------------------------------------|"<<endl;
	cout<<" saldo tunai yang di bayar     :Rp. ";cin>>bayar;
	cout<<endl;
	
	//perulangan jika saldo kurang dari biaya
	while(bayar<jumlah){
		cout<<"maaf kurang,silakan isi lagi      :Rp.";cin>>kurang;
		bayar+=kurang;
	};
	   //pemanggilan fungsi kembali
	   kembalian(bayar,jumlah);
	  cout<<endl;
	 
	//ulang jika pelanggan ingin menambah
	ulang:
		cout<<"apakah ada tambahan! [y/n] : ";cin>>kembali;
	 }	while(kembali=='y'||kembali=='y');
	 cout<<endl;
	 penutup();
}
