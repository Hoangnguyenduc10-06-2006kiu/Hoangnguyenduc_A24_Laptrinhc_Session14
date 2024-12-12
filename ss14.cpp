#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("vui long nhap chuoi: ");
	fgets(string,sizeof string,stdin);
	string[strcspn(string,"\n")]='\0';
	printf("chuoi %s va do gia chuoi %d",string,strlen(string));
	return 0;
}
