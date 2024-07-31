#include<stdio.h>
#include<conio.h>
void main()
{	
	char varian[10][10]={"","yuangyang","americano","ristretto","macchiato","cappucino","thaiiteaa","expressoo","carameell","hazelenut"};
	int price[10]={0,15000,16000,17000,18500,19000,20000,21000,22500,23000};
	int n[10]={0};
	int tanggal,bulan,tahun, i,j,t, jumlah;
	float tunai,kembalian,diskon,harga=0;
	char hari[10], kasir[10];
	
	printf("masukkan nama anda sebagai kasir: "); 
	gets(kasir);
	printf("\n");
	printf("input waktu pemesanan\n");
	printf("hari: "); scanf("%s",&hari); 
	printf("tanggal: "); scanf("%d",&tanggal); 
	printf("bulan: "); scanf("%d",&bulan);
	printf("tahun: "); scanf("%d",&tahun); 
	printf("\n");
	
	system("CLS");
	printf("LIST MENU :\n");
	printf("1. yuangyang = 15000 \n");
	printf("2. americano = 16000\n");
	printf("3. ristretto = 17000 \n");
	printf("4. macchiato = 18500\n");
	printf("5. cappucino = 19000\n");
	printf("6. thaitea   = 20000\n");
	printf("7. expresso  = 21000\n");
	printf("8. caramel   = 22500\n");
	printf("9. hazelenut = 23000\n");
	printf("\n");
	printf("masukkan jumlah pesanan : ");  scanf("%d",&jumlah);
	printf("\n");
		
	for (i=1;i<=jumlah;i++){
		printf("[KOPI %d]--> ",i); printf("pilih varian kopi : "); scanf("%d",&n[i]);
		harga=harga+price[n[i]];
		n[i]=n[i];
	}
	
	printf("jumlah yang harus di bayar adalah sebesar : Rp. %.f\n",harga);
	printf("masukkan nominal uang: Rp. "); scanf("%f",&tunai);
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
	printf("\t|\t     C I C I  C O F F E          \t|\n\t");			
	printf("\t|\t_________________________________\t|\n\t");
	printf("\t|\tJL. CEMPAKA I-N0.0138-DUSUN MULIA\t|\n\t");
	printf("\t|\t----------TELP.123456789---------\t|\n\t");
	printf("\t|\t_________________________________\t|\n\t");
	printf("\t|\ttime: %s, %d-%d-%d      \t\t|\n\t",hari,tanggal,bulan,tahun);
	printf("\t|\tkasir: %s           \t\t|\n\t",kasir);
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
