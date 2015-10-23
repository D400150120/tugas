#include <stdio.h>
#include <string.h>
#include <math.h>

void hitung_3gelang() {

	int G1=0, G2=0, G3=0;
	int N=0;
	char WARNA[20];

    printf("\nMasukkan sesuai petunjuk warna ini\n"); //petunjuk warna
    printf("\thitam\n");
    printf("\tcoklat\n");
    printf("\tmerah\n");
    printf("\torange\n");
    printf("\tkuning\n");
    printf("\thijau\n");
    printf("\tbiru\n");
    printf("\tungu\n");
    printf("\tabu-abu\n");
    printf("\tputih\n");
    printf("\temas\n");
    printf("\ttak-berwarna\n\n");

	for (N=1; N<=3; N++) {

    //N menunjukan gelang ke N
    printf("Masukan warna GELANG ke %d: ", N);
    scanf("%s", WARNA);

    // if (WARNA == "hitam") { // INI SALAH
    if ( strcmp(WARNA, "hitam") == 0 ) { //=0 berarti sama
        switch (N) {
            case 1: G1 = 0; break;
			case 2: G2 = 0; break;
			case 3: G3 = 0; break;
			 }
    } else if ( strcmp(WARNA, "coklat") == 0 ) {
        switch (N) {
            case 1: G1 = 1; break;
			case 2: G2 = 1; break;
			case 3: G3 = 1; break;
			 }
    } else if ( strcmp(WARNA, "merah") == 0 ) {
        switch (N) {
            case 1: G1 = 2; break;
            case 2: G2 = 2; break;
			case 3: G3 = 2; break;
			 }
    } else if ( strcmp(WARNA, "orange") == 0 ) {
        switch (N) {
            case 1: G1 = 3; break;
            case 2: G2 = 3; break;
			case 3: G3 = 3; break;
			 }
    } else if ( strcmp(WARNA, "kuning") == 0 ) {
        switch (N) {
            case 1: G1 = 4; break;
            case 2: G2 = 4; break;
			case 3: G3 = 4; break;
            }
    } else if ( strcmp(WARNA, "hijau") == 0 ) {
        switch (N) {
			case 1: G1 = 5; break;
            case 2: G2 = 5; break;
            case 3: G3 = 5; break;
            }
    } else if ( strcmp(WARNA, "biru") == 0 ) {
        switch (N) {
            case 1: G1 = 6; break;
            case 2: G2 = 6; break;
			case 3: G3 = 6; break;
            }
    } else if ( strcmp(WARNA, "ungu") == 0 ) {
        switch (N) {
            case 1: G1 = 7; break;
            case 2: G2 = 7; break;
            case 3: G3 = 7; break;
            }
    } else if ( strcmp(WARNA, "abu-abu") == 0 ) {
        switch (N) {
            case 1: G1 = 8; break;
            case 2: G2 = 8; break;
            case 3: G3 = 8; break;
            }
    } else if ( strcmp(WARNA, "putih") == 0 ) {
        switch (N) {
            case 1: G1 = 9; break;
            case 2: G2 = 9; break;
            case 3: G3 = 9; break;
            }
    } else if ( strcmp(WARNA, "emas") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = -1; break;
            }
    } else if ( strcmp(WARNA, "perak") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = -2; break;
            }
    } else if ( strcmp(WARNA, "tak-berwarna") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            }
        }
	} // akhir loop N

	N = (G1*10 + G2) * pow(10,G3);

	printf("\nNilai resistor R = %d ohm", N );
}

void hitung_4gelang() {

	int G1=0, G2=0, G3=0, G4=0;
	int N=0;
	char WARNA[20];
	char PERSEN = '%';

    printf("\nMasukkan sesuai petunjuk warna ini\n"); //petunjuk warna
    printf("\thitam\n");
    printf("\tcoklat\n");
    printf("\tmerah\n");
    printf("\torange\n");
    printf("\tkuning\n");
    printf("\thijau\n");
    printf("\tbiru\n");
    printf("\tungu\n");
    printf("\tabu-abu\n");
    printf("\tputih\n");
    printf("\temas\n");
    printf("\ttak-berwarna\n\n");

	for (N=1; N<=4; N++) {

    printf("Masukan warna GELANG ke %d: ", N);
    scanf("%s", WARNA);

		// if (WARNA == "hitam") { // INI SALAH
    if ( strcmp(WARNA, "hitam") == 0 ) { //=0 berarti sama
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = 0; break;
			 }
    } else if ( strcmp(WARNA, "coklat") == 0 ) {
        switch (N) {
            case 1: G1 = 1; break;
            case 2: G2 = 1; break;
            case 3: G3 = 1; break;
            case 4: G4 = 1; break;
			 }
    } else if ( strcmp(WARNA, "merah") == 0 ) {
        switch (N) {
            case 1: G1 = 2; break;
            case 2: G2 = 2; break;
            case 3: G3 = 2; break;
            case 4: G4 = 2; break;
			 }
    } else if ( strcmp(WARNA, "orange") == 0 ) {
        switch (N) {
            case 1: G1 = 3; break;
            case 2: G2 = 3; break;
            case 3: G3 = 3; break;
            case 4: G4 = 0; break;
			 }
    }  else if ( strcmp(WARNA, "kuning") == 0 ) {
        switch (N) {
            case 1: G1 = 4; break;
            case 2: G1 = 4; break;
            case 3: G1 = 4; break;
            case 4: G4 = 0; break;
			 }
    }  else if ( strcmp(WARNA, "hijau") == 0 ) {
        switch (N) {
            case 1: G1 = 5; break;
            case 2: G1 = 5; break;
            case 3: G1 = 5; break;
            case 4: G4 = 0.5; break;
			 }
    }  else if ( strcmp(WARNA, "biru") == 0 ) {
        switch (N) {
            case 1: G1 = 6; break;
            case 2: G1 = 6; break;
            case 3: G1 = 6; break;
            case 4: G4 = 0.25; break;
			 }
    }  else if ( strcmp(WARNA, "ungu") == 0 ) {
        switch (N) {
            case 1: G1 = 7; break;
            case 2: G1 = 7; break;
            case 3: G1 = 7; break;
            case 4: G4 = 0.1; break;
			 }
    }  else if ( strcmp(WARNA, "abu-abu") == 0 ) {
        switch (N) {
            case 1: G1 = 8; break;
            case 2: G1 = 8; break;
            case 3: G1 = 8; break;
            case 4: G4 = 0.05; break;
			 }
    }  else if ( strcmp(WARNA, "putih") == 0 ) {
        switch (N) {
            case 1: G1 = 9; break;
            case 2: G1 = 9; break;
            case 3: G1 = 9; break;
            case 4: G4 = 0; break;
			 }
    }  else if ( strcmp(WARNA, "emas") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G1 = 0; break;
            case 3: G1 = 0; break;
            case 4: G4 = 5; break;
			 }
    }  else if ( strcmp(WARNA, "perak") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G1 = 0; break;
            case 3: G1 = 0; break;
            case 4: G4 = 10; break;
			 }
    }  else if ( strcmp(WARNA, "tak-berwarna") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G1 = 0; break;
            case 3: G1 = 0; break;
            case 4: G4 = 20; break;
			 }
		}
	} // akhir loop N

	N = (G1*10 + G2) * pow(10,G3);

	// printf("\nG1=%d , G2=%d, G3=%d G4=%d \n", G1,G2,G3, G4 );
	printf("\nNilai resistor R = %d ohm", N );
	printf("\nNilai Toleransi = %d %c", G4, PERSEN );


}

void hitung_5gelang() {

	int G1=0, G2=0, G3=0, G4=0, G5=0;
	int N=0;
	char WARNA[20];
	char PERSEN = '%';

    printf("\nMasukkan sesuai petunjuk warna ini\n"); //petunjuk warna
    printf("\thitam\n");
    printf("\tcoklat\n");
    printf("\tmerah\n");
    printf("\torange\n");
    printf("\tkuning\n");
    printf("\thijau\n");
    printf("\tbiru\n");
    printf("\tungu\n");
    printf("\tabu-abu\n");
    printf("\tputih\n");
    printf("\temas\n");
    printf("\ttak-berwarna\n\n");

	for (N=1; N<=5; N++) {

    printf("Masukan warna GELANG ke %d: ", N);
    scanf("%s", WARNA);

		// if (WARNA == "hitam") { // INI SALAH
    if ( strcmp(WARNA, "hitam") == 0 ) { //=0 berarti sama
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = 0; break;
			case 5: G5 = 0; break;
			 }
    } else if ( strcmp(WARNA, "coklat") == 0 ) {
        switch (N) {
            case 1: G1 = 1; break;
            case 2: G2 = 1; break;
            case 3: G3 = 1; break;
            case 4: G4 = 1; break;
            case 5: G5 = 1; break;
			 }
    } else if ( strcmp(WARNA, "merah") == 0 ) {
        switch (N) {
            case 1: G1 = 2; break;
            case 2: G2 = 2; break;
            case 3: G3 = 2; break;
            case 4: G4 = 2; break;
            case 5: G5 = 2; break;
			 }
    } else if ( strcmp(WARNA, "orange") == 0 ) {
        switch (N) {
            case 1: G1 = 3; break;
            case 2: G2 = 3; break;
            case 3: G3 = 3; break;
            case 4: G4 = 3; break;
            case 5: G5 = 0; break;
			 }
    } else if ( strcmp(WARNA, "kuning") == 0 ) {
        switch (N) {
            case 1: G1 = 4; break;
            case 2: G2 = 4; break;
            case 3: G3 = 4; break;
			case 4: G4 = 4; break;
				case 5: G5 = 0; break;
			 }
    } else if ( strcmp(WARNA, "hijau") == 0 ) {
        switch (N) {
            case 1: G1 = 5; break;
            case 2: G2 = 5; break;
            case 3: G3 = 5; break;
            case 4: G4 = 5; break;
            case 5: G5 = 0.5; break;
			 }
    } else if ( strcmp(WARNA, "biru") == 0 ) {
        switch (N) {
            case 1: G1 = 6; break;
            case 2: G2 = 6; break;
            case 3: G3 = 6; break;
            case 4: G4 = 6; break;
            case 5: G5 = 0.25; break;
			 }
    } else if ( strcmp(WARNA, "ungu") == 0 ) {
        switch (N) {
            case 1: G1 = 7; break;
            case 2: G2 = 7; break;
            case 3: G3 = 7; break;
            case 4: G4 = 7; break;
            case 5: G5 = 0.1; break;
			 }
    } else if ( strcmp(WARNA, "abu-abu") == 0 ) {
        switch (N) {
            case 1: G1 = 8; break;
            case 2: G2 = 8; break;
            case 3: G3 = 8; break;
            case 4: G4 = 8; break;
            case 5: G5 = 0.05; break;
			 }
    } else if ( strcmp(WARNA, "putih") == 0 ) {
        switch (N) {
            case 1: G1 = 9; break;
            case 2: G2 = 9; break;
            case 3: G3 = 9; break;
            case 4: G4 = 9; break;
            case 5: G5 = 0; break;
			 }
    } else if ( strcmp(WARNA, "emas") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = -1; break;
            case 5: G5 = 5; break;
			 }
    } else if ( strcmp(WARNA, "perak") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = -2; break;
            case 5: G5 = 10; break;
			 }
    } else if ( strcmp(WARNA, "tak-berwarna") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = 0; break;
            case 5: G5 = 20; break;
             }
		}
    }
    N = (G1*100 + G2*10 + G3) * pow(10,G4);

    printf("\nNilai resistor R = %d ohm", N );
	printf("\nNilai Toleransi = %d %c", G5, PERSEN );
}

void hitung_6gelang() {

	int G1=0, G2=0, G3=0, G4=0, G5=0, G6=0;
	int N=0;
	char WARNA[20];
	char PERSEN = '%';

    printf("\nMasukkan sesuai petunjuk warna ini\n"); //petunjuk warna
    printf("\thitam\n");
    printf("\tcoklat\n");
    printf("\tmerah\n");
    printf("\torange\n");
    printf("\tkuning\n");
    printf("\thijau\n");
    printf("\tbiru\n");
    printf("\tungu\n");
    printf("\tabu-abu\n");
    printf("\tputih\n");
    printf("\temas\n");
    printf("\ttak-berwarna\n\n");

	for (N=1; N<=6; N++) {
    //N menunjukan gelang ke N
    //TAMPILKAN DAFTAR WARNA DI SINI
    printf("Masukan warna GELANG ke %d: ", N);
    scanf("%s", WARNA);

    // if (WARNA == "hitam") { // INI SALAH
    if ( strcmp(WARNA, "hitam") == 0 ) { //=0 berarti sama
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = 0; break;
            case 5: G5 = 0; break;
            case 6: G6 = 250; break;
			 }
    } else if ( strcmp(WARNA, "coklat") == 0 ) {
        switch (N) {
            case 1: G1 = 1; break;
            case 2: G2 = 1; break;
            case 3: G3 = 1; break;
            case 4: G4 = 1; break;
            case 5: G5 = 1; break;
            case 6: G6 = 100; break;
			 }
    } else if ( strcmp(WARNA, "merah") == 0 ) {
        switch (N) {
            case 1: G1 = 2; break;
            case 2: G2 = 2; break;
            case 3: G3 = 2; break;
            case 4: G4 = 2; break;
            case 5: G5 = 2; break;
            case 6: G6 = 50; break;
			 }
    } else if ( strcmp(WARNA, "orange") == 0 ) {
        switch (N) {
            case 1: G1 = 3; break;
            case 2: G2 = 3; break;
            case 3: G3 = 3; break;
            case 4: G4 = 3; break;
            case 5: G5 = 0; break;
            case 6: G6 = 15; break;
			 }
    } else if ( strcmp(WARNA, "kuning") == 0 ) {
        switch (N) {
            case 1: G1 = 4; break;
            case 2: G2 = 4; break;
            case 3: G3 = 4; break;
            case 4: G4 = 4; break;
            case 5: G5 = 0; break;
            case 6: G6 = 25; break;
			 }
    } else if ( strcmp(WARNA, "hijau") == 0 ) {
        switch (N) {
            case 1: G1 = 5; break;
            case 2: G2 = 5; break;
            case 3: G3 = 5; break;
            case 4: G4 = 5; break;
            case 5: G5 = 0.5; break;
            case 6: G6 = 20; break;
			 }
    } else if ( strcmp(WARNA, "biru") == 0 ) {
        switch (N) {
            case 1: G1 = 6; break;
            case 2: G2 = 6; break;
            case 3: G3 = 6; break;
            case 4: G4 = 6; break;
            case 5: G5 = 0.25; break;
            case 6: G6 = 10; break;
			 }
    } else if ( strcmp(WARNA, "ungu") == 0 ) {
        switch (N) {
            case 1: G1 = 7; break;
            case 2: G2 = 7; break;
            case 3: G3 = 7; break;
            case 4: G4 = 7; break;
            case 5: G5 = 0.1; break;
            case 6: G6 = 5; break;
			 }
    } else if ( strcmp(WARNA, "abu-abu") == 0 ) {
        switch (N) {
            case 1: G1 = 8; break;
            case 2: G2 = 8; break;
            case 3: G3 = 8; break;
            case 4: G4 = 8; break;
            case 5: G5 = 0.05; break;
            case 6: G6 = 1; break;
			 }
    } else if ( strcmp(WARNA, "putih") == 0 ) {
        switch (N) {
            case 1: G1 = 9; break;
            case 2: G2 = 9; break;
            case 3: G3 = 9; break;
            case 4: G4 = 9; break;
            case 5: G5 = 0; break;
            case 6: G6 = 0; break;
			 }
    } else if ( strcmp(WARNA, "emas") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = 0; break;
            case 5: G5 = 5; break;
            case 6: G6 = 0; break;
			 }
    } else if ( strcmp(WARNA, "perak") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = 0; break;
            case 5: G5 = 10; break;
            case 6: G6 = 0; break;
			 }
    } else if ( strcmp(WARNA, "tak-berwarna") == 0 ) {
        switch (N) {
            case 1: G1 = 0; break;
            case 2: G2 = 0; break;
            case 3: G3 = 0; break;
            case 4: G4 = 0; break;
            case 5: G5 = 20; break;
            case 6: G6 = 0; break;
			 }
        }
    }
    N = (G1*1000 + G2*100 + G3*10 + G4) * pow(10,G5);

    printf("\nNilai resistor R = %d ohm", N );
	printf("\nNilai Toleransi = %d %c", G5, PERSEN );
	printf("\nNilai Temperatur = %d ppm/k",G6);
}

int main() {
	//input JUMLAH GELANG
	int GELANG = 0;
    printf("|============================================| \n");
    printf("|-------- Program Menghitung Resistor -------| \n");
    printf("|------ Source Code by Mr.Bana Handaga ------| \n");
    printf("|----------- Bolgha Bhuana Pratama ----------| \n");
    printf("|----------------- D400150120 ---------------| \n");
    printf("|============================================| \n");

	while ( (GELANG<3) || (GELANG>6) ) {  //pengulangan dampai data GELANG BETUL
    printf("\nMasukan jumlah gelang : ");
    scanf("%d", &GELANG ); //harus antara 3 s/d 6

    if ( (GELANG<3) || (GELANG>6) ) {
    printf("\n---------------------------");
    printf("\nNilai GELANG antara 3 s/d 6");
    printf("\n---------------------------\n");
		}
    //Input WARNA GELANG
    switch (GELANG) {
        case 3 :
        hitung_3gelang(); break;
        case 4 : ;
        hitung_4gelang(); break;
        case 5 : ;
        hitung_5gelang(); break;
        case 6 : ;
        hitung_6gelang(); break;
		}
    }
    return 0;
}
