#include <stdio.h>
#include <unistd.h>

void recursive_count(int n)
{
	if (n == 0)
	{
		printf("\nHold on....\n");
		sleep(1);
		printf("\nWait for it.....\n");
		sleep(2);
		printf("\nWhere is it it?!\n");
		sleep(3);
		printf("\n∙∙∙∙∙·▫▫ᵒᴼᵒ▫ₒₒ▫ᵒᴼᵒ▫ₒₒ▫ᵒᴼᵒ☼)===> !!! Blast Off !!! ∙∙∙∙∙·▫▫ᵒᴼᵒ▫ₒₒ▫ᵒᴼᵒ▫ₒₒ▫ᵒᴼᵒ☼)===>\n");
		sleep(5);
		//printf("\n∙∙∙∙∙·▫▫ᵒᴼᵒ▫ₒₒ▫ᵒᴼᵒ▫ₒₒ▫ᵒᴼᵒ☼)===>\n");
	} 
	else
	{
		printf("Time is %d\n", n);
		sleep(1);
		recursive_count(n - 1);;
	}
}

int main(void)
{
	int count = 0;

	printf("What is the blast off timer?: ");
	scanf("%d", &count);
	printf("\n");
	recursive_count(count);
	return 0;
}
