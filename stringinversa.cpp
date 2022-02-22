#include <stdio.h>
#include <stdlib.h>



int tamstring(char *nome){
	int n=0;
	for(int i=0;nome[i]!='\0';i++){
		n++;
	}
	return n;
}

void comparandostrings(char *nome, char *nomeinverso){                                       // o  s  s  o       o  s  s  o
	int i=0;
	while(nome[i]==nomeinverso[i] && nome[i]!='\0' && nomeinverso[i]!='\0')
		i++;
		if (nome[i]=='\0' && nomeinverso[i]=='\0')
		printf("As strings sao palindromas!");
		else
		printf("As strings nao sao palindromas!");
}


int main(){
	char nome[50];
	char nomeinverso[50];
	int j=0,x;
	printf("Digite uma palavra/frase: ");
	gets(nome);
	
	x=tamstring(nome);
	
	
	for(int i=x-1;i>=0;i--){
	//	printf("Nome ao contrario:");  //sem vetor, precisa imprimir cada caracter
	//	printf("%c",nome[i]);
	//	printf("\n");
	if(nome[i]==' ')
	nome[i]='*';
	
	nomeinverso[j]=nome[i];
    j++	;
   

	}
	    nomeinverso[j]='\0';
	    comparandostrings(nome,nomeinverso);
		//printf("Nome ao contrario:");   // com vetor, não precisa imprimir caracter por caracter, imprimir o vetor direto
	    //printf("%s",nomeinverso);
	    //printf("\n");
}

