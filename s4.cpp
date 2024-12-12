#include <stdio.h>
#include <string.h>

int main(){
	char string[]="Cao Chi Thien",text;
	int i=0,count=0;
	printf("vui long nhap vao ky tu muon kiem tra: ");
	scanf("%c",&text);
	while(i<strlen(string)){
		if(string[i]==text){
			count++;
		}
		i++;
	}
	printf("ky tu %c xuat hien %d lan",text,count);
	return 0;
}
