#include <stdio.h> 
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int ultimaDoseHora;
	int intervaloHora;
	int proxHoraBruta;
	int proxHoraAjust;
	
	printf("Informe a hora (formato 24h, apenas o n�mero inteiro) da �ltima dose (ex: '14' para 14h): ");
	scanf("%d", &ultimaDoseHora);
	
	printf("Informe o intervalo entre as doses em horas (apenas o n�mero inteiro) (ex: '8' para 8 em 8 horas): ");
	scanf("%d", &intervaloHora);
	
	proxHoraBruta = ultimaDoseHora + intervaloHora;
	
	if (proxHoraBruta >= 24){
		proxHoraAjust = proxHoraBruta - 24;
	} else{
		proxHoraAjust = proxHoraBruta;
	}
	
	printf("\nA pr�xima dose devera ser tomada aproximadamente �s %d:00 horas.\n", proxHoraAjust);
	
	if (proxHoraAjust >= 0 && proxHoraAjust < 6) {
		printf("Isso ser� durante a madrugada.\n");
	} else if (proxHoraAjust >= 6 && proxHoraAjust < 12){
		printf("Isso ser� pela manh�.\n");
	} else if (proxHoraAjust >= 12 && proxHoraAjust < 18) {
		printf("Isso ser� a tarde.\n");
	} else {
		printf("Isso ser� a noite.\n");
	}
	return 0;	
}
