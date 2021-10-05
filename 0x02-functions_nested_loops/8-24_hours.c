#include"main.h"
/**
 * jack_bauer - prints every minute  starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int heure_dizaine = 0, heure_unite = 0, minutes_dizaine, minutes_unite;

	while (heure_dizaine <= 2 && heure_unite <= 9)
	{
		minutes_dizaine = 0;
		minutes_unite = 0;
		while (minutes_unite <= 9 && minutes_dizaine < 6)
		{
			_putchar('0' + heure_dizaine);
			_putchar('0' + heure_unite);
			_putchar(':');
			_putchar('0' + minutes_dizaine);
			_putchar('0' + minutes_unite);
			_putchar('\n');
			minutes_unite == 9 ? minutes_unite = 0, minutes_dizaine++ : minutes_unite++;
		}
		heure_unite == 9 ? heure_unite = 0, heure_dizaine++ : heure_unite++;
		if (heure_dizaine == 2 && heure_unite == 4)
			break;
	}
}
