#include<stdio.h>
int main()
{
	int th,eng,com,math,sci;
	float pc;
	printf("Enter Thai score : ");
	scanf("%d", &th);
	printf("Enter English score : ");
	scanf("%d", &eng);
	printf("Enter Computer score : ");
	scanf("%d", &com);
	printf("Enter Math score : ");
	scanf("%d", &math);
	printf("Enter Science score : ");
	scanf("%d", &sci);
	
	pc = (th + eng + com + math + sci)/ 5.0;
	printf("%.2f\n", pc);

	if (pc >= 80) {
		printf("Grade A");
	}
	else if (pc >= 70) {
		printf("Grade B");
	}
	else if (pc >= 60) {
		printf("Grade C");
	}
	else if (pc >= 50) {
		printf("Grade D");
	}
	else if (pc <= 50) {
		printf("Grade F");
	}
}