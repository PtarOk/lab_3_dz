#include <locale.h>
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int day, month, year; // переменные дл€ даты др пользовател€
	int day_now, month_now, year_now; // переменные дл€ сегодн€шней даты
	int difference_d = 0, difference_m = 0;
	// считывание даты рождени€
	puts("¬ведите день ¬ышего рождени€, например, 1 (что значит первый день мес€ца)");
	scanf("%d", &day);
	puts("¬ведите мес€ц ¬ашего рождени€, например, 3 (что значит март)");
	scanf("%d", &month);
	puts("¬ведите год ¬ашего рождени€");
	scanf("%d", &year);

	// считывание сегодн€шней даты
	puts("¬ведите сегодн€шний день");
	scanf("%d", &day_now);
	puts("¬ведите сегодн€шний мес€ц");
	scanf("%d", &month_now);
	puts("¬ведите сегодн€шний год");
	scanf("%d", &year_now);

	// проверка, если вдруг день и мес€ц рождени€ численно больше сегодн€шних дн€ и мес€ца

	difference_d = (day >= day_now);			// јналог действий слева, но использу€ условие
	month_now -= difference_d;					//if (day >= day_now) month_now--;
												//if (month >= month_now) year_now--;
	difference_m = (month >= month_now);		//if (month >= month_now) year_now--;
	year_now -= difference_m;					

	//вывод рез-та
	printf("\n¬аш возраст - %d лет.\n", year_now - year);

	return 0;
}