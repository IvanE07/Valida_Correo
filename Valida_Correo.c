#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////////////////////////////

void pide();
void validaArroba(char *correo, int longitud);
void dominio(char *correo, int longitud);

///////////////////////////

int main()
{
	pide();
	return 0;
}

///////////////////////////

void validaArroba(char *correo, int longitud)
{
	
	int l = 0, contador = 0;
	
	while(l < longitud)
	{
		if (correo[l] == '@')
		{
			contador = 0;
			break;
		}
		
		else
		{
			contador++;
		}
		l++;
	}
	
	if (contador > 0)
	{
		printf("\nTu correo no posee arroba, vuelve a intentarlo...");
		getch();
		system("cls");
		pide();
	}
	
	else
	{
		dominio(correo, longitud);
	}
}

///////////////////////////

void pide()
{		
	char correo[30];
	int longitud = 0;
	
	printf("Ingresa tu correo electronico: \t");
	scanf("%30s", correo);
	
	longitud = strlen(correo);
	
	validaArroba(correo, longitud);
	
}

///////////////////////////

void dominio(char *correo, int longitud)
{
	
	char aux[30], aux2[30];
	int j = 0, k = 0, l = 0, contador = 0;
	char gmail[10] = "gmail.com", outlook[12] = "outlook.com", yahoo[10] = "yahoo.com";
	char hotmail[11] = "hotmail.com";
	
	
	while(j < longitud)
	{
		if(correo[j] != '@')
		{
			aux[k] = correo[j];
			correo[j] = '0';
			k++;
		}
		
		else
		{
			aux[k] = correo[j];
			correo[j] = '0';
			break;
		}
		j++;
	}
	
	j = 0;
	k = 0;
	
	while(j < longitud)
	{
		if(correo[j] != '0')
		{
			aux2[k] = correo[j];
			k++;
		}
		j++;
	}		
	
	if (strcmp(aux2, gmail) == 0)
	{
		printf("\nBienvenid@ ");
		
		j = 0;
		k = 0;
		
		while(j < longitud)
		{
			if(aux[j] == '@')
				break;
			else
				printf("%c", aux[j]);
			j++;
		}
				
		
	}
	
	else if ((strcmp(aux2, outlook) == 0))
	{
		printf("\nBienvenid@ ");
		
		j = 0;
		k = 0;
		
		while(j < longitud)
		{
			if(aux[j] == '@')
				break;
			else
				printf("%c", aux[j]);
			j++;
		}
		
	}
	
	else if ((strcmp(aux2, yahoo) == 0))
	{
		printf("\nBienvenid@ ");
		
		j = 0;
		k = 0;
		
		while(j < longitud)
		{
			if(aux[j] == '@')
				break;
			else
				printf("%c", aux[j]);
			j++;
		}
		
	}
	
	else if ((strcmp(aux2, hotmail) == 0))
	{
		printf("\nBienvenid@ ");
		
		j = 0;
		k = 0;
		
		while(j < longitud)
		{
			if(aux[j] == '@')
				break;
			else
				printf("%c", aux[j]);
			j++;
		}
		
	}
			
	else
	{
		printf("\ndominio invalido o mal escrito, vuelve a intentarlo...");
		getch();
		system("cls");
		pide();
	}		
	
	
}

///////////////////////////
