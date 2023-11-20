#include <stdio.h>
#include <windows.h>
#include <conio.h>

void baothuc(int thoigian, float phut){
	printf("\t\t\t\tDONG HO BAO THUC trong %.2f phut\n", phut);
	printf("\t\t\t\t------------------------------\n");
	Sleep(thoigian  * 1000);
	printf("\a");
	printf("\t\t\t\t  DA HET %f PHUT \n", phut);
	printf("\t\t\t\t------------------------------\n");
	for(int j = 0; j < 3; j++){
		printf("NHAC NHO LAN:");
		for(int i = 0; i <= 14; i++){
			printf("\a");
			printf("%d\t", i);
			Sleep(3000);
			printf("\a");	
		}
		printf("\n");
		printf("\t\t\t\tBAN DA HET THOI GIAN \n");
		Sleep(15000);
	}
	printf("\a");	
	printf("\t\t\t\t=====================================\n");
	printf("\t\t\t\t\tHET THOI GIAN\n");
	printf("\t\t\t\tBAN DA HET %.5f PHUT", (phut + 3));
}

void demnguoc(int thoigian){
	printf("DEM NGUOC TRONG %d giay\n", thoigian);
	for(int i = thoigian; i > 0 ; i--){
		printf("\n\n\t\tDEM NGUOC THOI GIAN: %d", i);
		Sleep(1000);
		system("cls");
	}
	printf("\t\t\t HET THOI GIAN %d giay\n", thoigian);
	printf("TANG THEM: %d giay +: ", thoigian);
	for(int i = 0; i < 19; i++){
		printf("\a");
		Sleep(2000);
		printf("%d giay\t",(i + 2));
	}
	printf("\n\n");
}

void luachon(){
	printf("MOI BAN LUA CHON\n");
	printf("chon: d => dong ho dem nguoc\n");
	printf("chon: b => dong ho bao thuc\n");
}

int main(){
	 int thoigian;
	 float phut;
	 char chon, lap;
	// printf("\n\t\t\t\tPOWER BY LE MINH HUU - KTMTK19 ICTU\n");
	 while (1) {
		printf("\t\t\t\t----------------------------------\n");
		//printf("xin chao");
		printf("1 phut = 60 giay\t5 phut = 300 giay\t10 phut = 600 giay\t15 phut = 900 giay\n20 phut = 1200 giay\t30 phut = 1800 giay\t 1 gio = 3600 giay\t 2 gio = 7200 giay\n");
		printf("\t\t\t\t----------------------------------\n");
		printf("\anhap vao so giay ma ban muon: ");
		scanf("%d", &thoigian);
		phut = ((float)thoigian / 60);
		luachon();
		fflush(stdin);
		scanf("%c", &chon);
		switch(chon){
			case 'd':{
				demnguoc(thoigian);
				printf("\nban muon lap lai dong ho chon: 1 \nneu khong muon thi chon khac 1\n");
				scanf("%d", &lap);
				continue;
				//goto laplai;
//				break;
			}	
			case 'b':{
				baothuc(thoigian, phut);
				printf("\nban muon lap lai dong ho chon: 1 \nneu khong muon thi chon khac 1\n");
				scanf("%d", &lap);
//				break;
			}		
			default:{
				printf("vui long chay lai chuong trinh\n");
				printf("\nban muon lap lai dong ho chon: 1 \nneu khong muon thi chon khac 1\n");
				scanf("%d", &lap);
			
//				break;
			}
		} 	
	 }
	 getch();
	return 0;
}