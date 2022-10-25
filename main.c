#include <stdio.h>
#include <windows.h>

int main(void)
{
	int hours, minutes, seconds;

	printf("Enter Hour: ");
	scanf("%d", &hours);

	printf("Enter Minutes: ");
	scanf("%d", &minutes);

	printf("Enter Seconds: ");
	scanf("%d", &seconds);

	while(hours > 24 || hours < 0 || minutes > 59 || minutes < 0 || seconds > 59 || seconds < 0) {
		printf("Please Enter Hour Again: ");
		scanf("%d", &hours);

		printf("Please Enter Minutes Again: ");
		scanf("%d", &minutes);

		printf("Please Enter Seconds Again: ");
		scanf("%d", &seconds);
	}

	while(1) {
		if (seconds < 60) {
			seconds++;
		}
		if (seconds > 59) {
			seconds = 0;
			minutes++;
		}
		if (minutes > 59) {
			hours++;
			minutes = 1;
		}
		if (hours > 23) {
			hours = 0;
		}

		Sleep(1000);
		system("cls");
		printf("%d:%d:%d \n", hours, minutes, seconds);

	}

	return 0;
}
