#include<stdio.h>

void main()
{	
	char varian[6][10]={"","yuangyang","americano","ristretto","macchiato","cappucino"};
	int price[6]={0,15000,17000,19000,21000,23000};
	int n[6]={0};
	int tanggal,bulan,tahun, i,j,t, jumlah;
	float tunai,kembalian,diskon,harga=0;
	char hari[10], kasir[10];
	
	printf("masukkan nama anda sebagai kasir: "); scanf("%s",kasir);
	printf("\n");
	printf("input waktu pemesanan pelanggan\n");
	printf("hari: "); scanf("%s",&hari); 
	printf("tanggal: "); scanf("%d",&tanggal); 
	printf("bulan: "); scanf("%d",&bulan);
	printf("tahun: "); scanf("%d",&tahun); 
	printf("\n");
	
	system("CLS");
	printf("LIST MENU :\n");
	printf("1. yuangyang\n");
	printf("2. americano\n");
	printf("3. ristretto\n");
	printf("4. macchiato\n");
	printf("5. cappucino\n");
	printf("\n");
	printf("masukkan jumlah pesanan pelanggan :");  scanf("%d",&jumlah);
	printf("\n");
		
	for (i=1;i<=jumlah;i++){
		printf("[KOPI %d]-->",i); printf("pilih varian kopi: "); scanf("%d",&n[i]);
		harga=harga+price[n[i]];
		n[i]=n[i];
	}
	
	printf("jumlah yang harus pelanggan bayar adalah sebesar : Rp. %.f\n",harga);
	printf("masukkan nominal uang yang di bayar pelanggan: Rp. "); scanf("%f",&tunai);
	printf("\n");
	kembalian=tunai-harga;

	system("CLS");
	printf("\t\t _______________________________________________\t\n\t");	
	printf("\t|\t S T R U K   P E M B A Y A R A N \t|\t\n\t");
	printf("\t|\t---------------------------------\t|\t\n\t");
	printf("\t|\t-------------) ) )---------------\t|\t\n\t");
	printf("\t|\t------------( ( (----------------\t|\t\n\t");
	printf("\t|\t-------------) ) )---------------\t|\t\n\t");
	printf("\t|\t----------\~~~~~~~~~/_------------\t|\t\n\t");
	printf("\t|\t-----------\ ^   ^ /__}-----------\t|\t\n\t");
	printf("\t|\t------------\__0__/---------------\t|\t\n\t");
	printf("\t|\t----=======================------\t|\t\n\t");
	printf("\t|\t     W K W K W K  C O F F E      \t|\n\t");			
	printf("\t|\t_________________________________\t|\n\t");
	printf("\t|\tJL. CEMPAKA I-N0.0138-DUSUN MULIA\t|\n\t");
	printf("\t|\t----------TELP.123456789---------\t|\n\t");
	printf("\t|\t_________________________________\t|\n\t");
	printf("\t|\ttime: %s, %d-%d-%d      \t\t|\n\t",hari,tanggal,bulan,tahun);
	printf("\t|\tkasir: %s                  \t\t|\n\t",kasir);
	printf("\t|\t_________________________________\t|\n\t");
	printf("\t|\tITEM :                           \t|\n\t");
	for (i=1;i<=jumlah;i++){
	printf("\t|\t1cup %s : \tRp. %d \t|\n\t",varian[n[i]],price[n[i]]);}
	printf("\t|\t_________________________________\t|\n\t");
	printf("\t|\ttotal          :\tRp. %.f    \t|\n\t",harga); 
	printf("\t|\ttunai          :\tRp. %.f    \t|\n\t",tunai);
	printf("\t|\tkembalian      :\tRp. %.f    \t|\n\t\t",kembalian);
	printf("|\t                                 \t|\n\t");
	printf("\t|\t------T E R I M A  K A S I H-----\t|\n\t");
	printf("\t|_______________________________________________|\t");
	
	
}
