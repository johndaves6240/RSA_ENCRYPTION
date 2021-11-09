#include<stdio.h>
#include<math.h>

void encrypt(char text[], char alphabet[], int enc, int n);
void decrypt(char text[], char alphabet [], int enc, int n);

int main(){
	
	int p=5, q=7, e=5, d=29, n=35, count=0, j=0;
	int i;
	int change;
	int mod;

	
	char alphabet[27]= {'0','A', 'B', 'C', 'D', 'E', 'F', 'G', 
						'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
						 'R', 'S', 'T', 'U', 'V' ,'W', 'X', 'Y', 'Z'};
						 
	char text[100]="LOVEEE";
	
	printf("ENCRYPTING THE WORLD: %s\n", text);
	
	encrypt(text,alphabet, e,n);
	printf("AFTER ENCRYPTION: %s\n", text);
	
	decrypt(text,alphabet, e,n);
	printf("AFTER DECRYPTION: %s\n", text);
	
	return 0;

}	
void decrypt(char text[], char alphabet [], int enc, int n){
		int i, change, mod, j;
	
	for(i=0; text[i]!='\0';i++){
		for(j=1; alphabet[j]!=text[i];j++){}
	 change= (int)(pow(j, enc));
	 mod=change % n;

	 
	 text[i]= alphabet[mod];
	 		
	}
	
}
void encrypt(char text[], char alphabet [], int enc, int n){
	int i, change, mod, j;

	
	for(i=0; text[i]!='\0';i++){
		for(j=1; alphabet[j]!=text[i];j++){}
	 change= (int)(pow(j, enc));
	 mod=change % n;
	 
	 text[i]= alphabet[mod];
	 		
	}
}


