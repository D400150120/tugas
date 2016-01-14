#include <stdio.h>
#include <time.h>
#include <string.h>
/*
time()  : untuk mendapatkan informasi jumlah detik sejak tahun 1/11970
localtime() : untuk meubah informasi jumlah detik menjadi informasi kalender (hari tanggal, bulan, tahun JAM:MENIT:DETIK) saat ini.
strftime():  mencetak data kalender sesuai format
*/


void tampilkan_kalender() {

	 time_t DETIK;
	 struct tm *info;
     char buffer[80];
	 char hari_eng[10];
	 char hari1[10];
	 char bulan_eng[20];
	 char bulan1[20];

	 time( &DETIK );  //mengambil informasi jumlah detik

	 //merubah format data  ( localtime( ))
	 //dari JUMLAH DETIK menjadi KALENDER
	 info = localtime( &DETIK );
	 //merubah info menjadi TEKS
   strftime(buffer,80,"%d %Y - %H:%M:%S", info);

	 printf("Sekarang adalah hari & tanggal: | %s, %s %s |\n", hari1, bulan1, buffer );
	 // printf("Hari ke %ld \n", info.tm_wday);

	strftime(hari_eng,10,"%a", info);
	if ( strcmp(hari_eng,"Sun") == 0 ) {
        strcpy(hari1,"Minggu");
	}else if ( strcmp(hari_eng,"Mon") == 0 ){
	    strcpy(hari1,"Senin");
	}else if ( strcmp(hari_eng,"Tue") == 0 ){
	    strcpy(hari1,"Selasa");
	}else if ( strcmp(hari_eng,"Wed") == 0 ){
	    strcpy(hari1,"Rabu");
	}else if ( strcmp(hari_eng,"Thu") == 0 ){
	    strcpy(hari1,"Kamis");
	}else if ( strcmp(hari_eng,"Fri") == 0 ){
	    strcpy(hari1,"Jumat");
	}else if ( strcmp(hari_eng,"Sat") == 0 ){
	    strcpy(hari1,"Sbbtu");
	}

    strftime(bulan_eng,20,"%m", info);
    if ( strcmp(bulan_eng,"01") == 0 ) {
        strcpy (bulan1,"Januari");
    }else if ( strcmp(bulan_eng,"02") == 0){
        strcpy (bulan1,"Februari");
    }else if ( strcmp(bulan_eng,"03") == 0){
        strcpy (bulan1,"Maret");
    }else if ( strcmp(bulan_eng,"04") == 0){
        strcpy (bulan1,"April");
    }else if ( strcmp(bulan_eng,"05") == 0){
        strcpy (bulan1,"Mei");
    }else if ( strcmp(bulan_eng,"06") == 0){
        strcpy (bulan1,"Juni");
    }else if ( strcmp(bulan_eng,"07") == 0){
        strcpy (bulan1,"Juli");
    }else if ( strcmp(bulan_eng,"08") == 0){
        strcpy (bulan1,"Agustus");
    }else if ( strcmp(bulan_eng,"09") == 0){
        strcpy (bulan1,"September");
    }else if ( strcmp(bulan_eng,"10") == 0){
        strcpy (bulan1,"Oktober");
    }else if ( strcmp(bulan_eng,"11") == 0){
        strcpy (bulan1,"Nopember");
    }else if ( strcmp(bulan_eng,"12") == 0){
        strcpy (bulan1,"Desember");
    }

}



int main ()
{
  time_t AWAL=0, AKHIR=0;

	time( &AWAL );
	while (1) {
		time( &AKHIR );
		if ( AKHIR - AWAL > 0 ) {
			//tampilkan tanggal
			tampilkan_kalender();
			AWAL = AKHIR;
		}


	}

   return(0);
}
