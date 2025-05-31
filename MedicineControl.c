#include <stdio.h> 
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int ultimaDoseHora;
	int intervaloHora;
	int proxHoraBruta;
	int proxHoraAjust;
	
	printf("Informe a hora (formato 24h, apenas o número inteiro) da última dose (ex: '14' para 14h): ");
	scanf("%d", &ultimaDoseHora);
	
	printf("Informe o intervalo entre as doses em horas (apenas o número inteiro) (ex: '8' para 8 em 8 horas): ");
	scanf("%d", &intervaloHora);
	
	proxHoraBruta = ultimaDoseHora + intervaloHora;
	
	if (proxHoraBruta >= 24){
		proxHoraAjust = proxHoraBruta - 24;
	} else{
		proxHoraAjust = proxHoraBruta;
	}
	
	printf("\nA próxima dose devera ser tomada aproximadamente às %d:00 horas.\n", proxHoraAjust);
	
	if (proxHoraAjust >= 0 && proxHoraAjust < 6) {
		printf("Isso será durante a madrugada.\n");
	} else if (proxHoraAjust >= 6 && proxHoraAjust < 12){
		printf("Isso será pela manhã.\n");
	} else if (proxHoraAjust >= 12 && proxHoraAjust < 18) {
		printf("Isso será a tarde.\n");
	} else {
		printf("Isso será a noite.\n");
	}
	return 0;	
}
