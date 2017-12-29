#include <stdio.h>

int mnoz(int a, int b){
	printf("Wynik mnozenia: %i\n", a * b);
	return a * b;
}
int dodaj(int a, int b){
	printf("Wynik dodawania: %i\n", a + b);
	return a + b;
}
int odejmij(int a, int b){
	printf("Wynik odejmowania: %i\n", a - b);
	return a - b;
}
int dziel(int a, int b) {
    printf("Wynik dzielenia: %i i reszta: %i\n", a / b, a % b);
    return a / b;
}

void wyjscie()
    {
        wyjscie(0);
    }

void wybor_dzialania(int a, int b, char wybor) {
    switch(wybor)
    {
        case '+' :
             dodaj(a, b);
		break;
        case '-' :
             odejmij(a, b);
		break;
        case '*' :
            mnoz(a, b);
		break;
        case '/' :
            dziel(a, b);
		break;
        case 'w' :

            wyjscie();
    }
}

int main(void)
{
	int a, b;
	char wybor;
	int czy_dalej = 1;

	while(czy_dalej == 1){
		printf("Podaj wartosc argumentu a: "); scanf("%i", &a);
        printf("Podaj wartosc argumentu b: "); scanf("%i", &b);
        printf("Wybierz rodzaj dzialania jakie chcesz  wykonac: + , - , * , / , w - wyjscie z progamu "); scanf(" %c", &wybor);
        wybor_dzialania(a, b, wybor);

        printf("Czy dalej chcesz liczyc? (1 - tak / 0 - nie) ");
		scanf("%d", &czy_dalej);
	}
	return 0;
}
