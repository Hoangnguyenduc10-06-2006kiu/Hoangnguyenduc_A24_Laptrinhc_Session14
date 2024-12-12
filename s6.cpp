#include <stdio.h>
#include <string.h>

int main(){
    char string[1000]=" duc";
    int count=0,i=0;
    while(i<strlen(string)){
        if ((string[i]>='A'&&string[i]<='Z')||(string[i]>='a'&&string[i]<='z')){
            count++;
        }
        i++;
    }
    printf("Chuoi ban dau: [%s]\n", string);
    printf("So ky tu la chu cai trong chuoi: %d", count);

    return 0;
}

