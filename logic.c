#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int i, barang, pembayaran, kembalian, kekurangan, harga[100], jumlahBarang[100], totalhargakeseluruhan=0, totalharga[100],totalhargakeseluruhand; 
char nama[100][30], p[5];
float diskon, dskn; 
int main ()
     {
      awal://LABEL"awal"
      printf("=================================================\n"
      "\t\tPROGRAM STRUK TOKO\n"
      "\t\t  IRWANTO(2233079)\n"
      "\t\t Sistem Informasi D\n"
      "\t\t  27 Januari 2023\n"
      "=================================================\n"
      "==================== TOSERBA ====================\n"
      "=================================================\n");
      printf("Masukkan Jumlah Barang\t\t: ");
      scanf("%i",&barang); 
	  printf("Masukkan jumlah diskon\t\t: ");
	  scanf("%f", &diskon); 
      for(i=1; i<=barang; i++)
     {
        printf("Masukkan nama barang ke-%i\t: ",i);
        scanf("%s", &nama[i]);
        printf("Masukkan harga per barang\t: Rp. ");
        scanf("%i",&harga[i]); 
        printf("Masukkan jumlah barang\t\t: ");
        scanf("%i", &jumlahBarang[i]);
        printf("\n");
     }
     for(i=1; i<=barang; i++)
     {
        totalharga[i]=jumlahBarang[i]*harga[i]; 
        dskn=diskon/100;
        totalhargakeseluruhan=(totalhargakeseluruhan+totalharga[i])-((totalhargakeseluruhan+totalharga[i])*dskn);       
     }
      printf("Diskon\t\t\t\t: %f Persen\n", dskn);
      printf("Total harga keseluruhan\t\t: Rp. %i\n", totalhargakeseluruhan);
      printf("Masukkan jumlah pembayaran\t: Rp. ");
      scanf("%i", &pembayaran);   
      kembalian=pembayaran-totalhargakeseluruhan;
      printf("=================================================\n");
      printf("Daftar belanja anda:\n");
     for(i=1; i<=barang; i++)
     {
       printf("%i. %i buah %s (@ Rp. %i)\t: Rp. %i\n", i, jumlahBarang[i], nama[i], harga[i], totalharga[i]);
     }                   
     if(pembayaran>=totalhargakeseluruhan)
     {
        printf("\tDiskon\t\t\t: %f Persen\n", dskn);
        printf("\tTotal harga\t\t: Rp. %i\n", totalhargakeseluruhan);
        printf("\tPembayaran\t\t: Rp. %i\n", pembayaran);
        printf("\tKembalian\t\t: Rp. %i\n\n", kembalian);
        printf("\tKasir\t\t\t: Irwanto\n");
        printf("=================================================\n"
        "\t\t  Terimakasih\n"
        "\t\tTelah Berbelanja\n"
        "\t\t     Di Toko\n"
        "\t\t       Kami\n");
     }
     else
     {
        kekurangan=-1*kembalian;
        printf("\tDiskon\t\t\t: %f Persen\n", dskn);
        printf("\tTotal harga\t\t: Rp. %i\n", totalhargakeseluruhan);
        printf("\tPembayaran\t\t: Rp. %i\n", pembayaran);
        printf("\tKekurangan\t\t: Rp. %i\n", kekurangan);
        printf("\tKasir\t\t\t: Irwanto\n");
     }
      printf("=================================================\n");
      pilih://LABEL "pilih"
      printf("\nUlangi (y/t): ");
      scanf("%s", &p); 
      if(strcmp(p,"y")==0||strcmp(p,"Y")==0)
     {
        goto awal;          
     }
       else if(strcmp(p,"t")==0||strcmp(p,"T")==0)
     {
        printf(" Anda akan keluar dari program ini...\n");
     }
      else
     {
      printf(" Masukkan pilihan yang benar...\n");
        goto pilih;             }
      return 0;
     }
