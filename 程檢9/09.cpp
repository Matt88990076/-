#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(void){
	
	char boom[80];
	
	FILE *f1;
	
	f1 = fopen("d.txt","r");
	fscanf(f1,"%s",&boom);
	cout << boom << endl;
	
	int len = strlen(boom);
	
	
	int i = 0,a;
	int j = 1;
	while( i < len){
		if(boom[i] == 'x'){
			
			if(boom[i+1] == 'X'){
				while(j <= 2){
					a=i+1;
					boom[a] = '-';
					boom[a-j] = '-';
					if(boom[a+1] !='\0')
					boom[a+j] = '-';
					j++;
				}
				j=1;
			}
				
			if(boom[i+1] !='\0'){
			boom[i+1] ='-';
			}
			boom[i-1] ='-';
			boom[i] = '-';
		}
		
		if(boom[i] == 'X'){
			while(j <= 2){
				boom[i] = '-';
				boom[i-j] = '-';
				if(boom[i+1] !='\0')
				boom[i+j] = '-';
				j++;
			}
			j=1;
		}
		i++;
	}
	cout << boom << endl;
	
	int k = 0;
	int count = 0;
	while(k < len){
		if(boom[k] == '0'){
		count++;
		}
	k++;	
	}
	
	cout << "Ans=" <<count;
} 
