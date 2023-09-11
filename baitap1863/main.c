#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char rollno[16];
	printf("\n Nhap vao rollno =");
	scanf("%s",&rollno);
	
	int age;
	printf("\n Nhap vao age =");
	scanf("%d",&age);
	
	char name[50];
	printf("\n Nhap vao name =");
	scanf("%s",&name);
	fflush(stdin);fflush(stdout);
	char address[200];
	printf("\n Nhap vao address =");
	scanf("%s",&address);
	fflush(stdin);fflush(stdout);
	char ten[15] ="Ten";
	char tuoi[15] ="Tuoi";
	char masv[20] ="Ma SV";
	char diachi[20] ="Dia chi";
	printf("\n=============================");
	printf("\n|%-15s|%-20s|%-20s|%20s|",ten,tuoi,masv,diachi);
	printf("\n============================= ");
	printf("\n|%-15s|%-20d|%-20s|%-20s|",name,age,rollno,address);
}
