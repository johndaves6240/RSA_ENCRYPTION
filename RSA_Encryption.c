#include<stdio.h>
#include<math.h>

void encrypt(char text[], int enc, int n);
void decrypt(char text[], int d, int n);

double mod(double a, double b);

int main(){
	
	int p=11, q=13, e=7, d=223, n=143, count=0, j=0;
	double change;
						 
	char text1[100]="ENCRYPTION";
	printf("ENCRYPTING THE WORD: %s\n", text1);
	encrypt(text1, e,n);
	printf("AFTER ENCRYPTION: %s\n", text1);
	decrypt(text1,d,n);
	printf("AFTER DECRYPTION: %s\n", text1);
	
	char text2[100]="RASTAMAN";
	printf("\n\nENCRYPTING THE WORD: %s\n", text2);
	encrypt(text2, e,n);
	printf("AFTER ENCRYPTION: %s\n", text2);
	decrypt(text2,d,n);
	printf("AFTER DECRYPTION: %s\n", text2);

	
	return 0;

}	

void decrypt(char text[], int d, int n){
	int  c=1,i,m, base, exp;
	
	for(i=0,m=1,c=text[i],base=c,exp=d;text[i]!='\0';i++,m=1,c=text[i],base=c,exp=d){
        while(exp){
            if(exp%2){
                m=(base*m)%n;
            }
            base=(base*base)%n;
            exp/=2;
        }
        text[i]=m;
    }
	
}
void encrypt(char text[], int enc, int n){
	int i, change, mod, j;

	
	for(i=0; text[i]!='\0';i++){
	 change= fmod((pow(text[i], enc)),n);
	 
	 text[i]= change;
	 		
	}
}


