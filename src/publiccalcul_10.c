// PublicCalcul v1.0

// Released into the public domain under CC0

// More details in 'README.md'

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	long long i;
	double aa,bb,cc;
	long long dd;
	char vb;
	system("cls");
	printf("\nPublicCalcul v1.0");
	printf("\n\nMore details in 'README.md'");
	printf("\n\nPUBLIC DOMAIN SOFTWARE");
	do
	{
		printf("\n\nNumber 1-");
		scanf("%lf",&aa);
		printf("\n\nNumber 2-");
		scanf("%lf",&bb);
		printf("\n\nWhen working with trigonometry functions, enter data in radians!");
		printf("\n\nFor operations starting with 'e' (and further, except atan2('t' -> 'k') and logarithm with arbitrary base('l' -> 'a')), the entered value = number 1 + number 2.");
		printf("\n\n 'h' - hypotenuse");
		printf("\n\n '`' - tetration");
		printf("\n\n+ | - | / | * | ^ | v | %% | h | ` | e | l | ! | s | c | t ?");
		vb = getch();
		if (vb == '+')
		{
			cc = aa + bb;
		}
		if (vb == '-')
		{
			cc = aa - bb;
		}
		if (vb == '/')
		{
			if (bb == 0)
			{
				printf("\n\nError - You can't divide by 0");
			}
			else
			{
				cc = aa / bb;
			}
		}
		if (vb == '*')
		{
			cc = aa * bb;
		}
		if (vb == '^')
		{
			cc = pow(aa,bb);
		}
		if (vb == 'v')
		{
			cc = pow(aa, 1.0 / bb);
		}
		if (vb == '%')
		{
			cc = aa * bb / 100;
		}
		if (vb == 'h')
		{
			cc = hypot(aa,bb);
		}
		if (vb == '`')
		{
			aa = floor(aa);
			bb = floor(bb);
			cc = aa;
			for (i = 1; i < bb; i++)
			{
				cc = pow(aa,cc);
			}
		}
		if (vb == 'e')
		{
			cc = exp(aa+bb);
		}
		if (vb == 'l')
		{
			printf("\n\n n | a ?");
			vb = getch();
			if (vb == 'n')
			{
				cc = log(aa+bb);
			}
			if (vb == 'a')
			{
				cc = log(aa) / log(bb);
			}
		}
		if (vb == '!')
		{
			dd = floor(aa+bb);
			cc = 1;
			for (i = 1; i <= dd; i++)
			{
				cc *= i;
			}
		}
		if (vb == 's')
		{
			printf("\n\n s | a ?");
			vb = getch();
			if (vb == 's')
			{
				cc = sin(aa+bb);
			}
			if (vb == 'a')
			{
				if ((aa+bb > 1) || (aa+bb < 1-2))
				{
					printf("\n\nError - Operation is not allowed");
				}
				else
				{
					cc = asin(aa+bb);
				}
			}
		}
		if (vb == 'c')
		{
			printf("\n\n c | a ?");
			vb = getch();
			if (vb == 'c')
			{
				cc = cos(aa+bb);
			}
			if (vb == 'a')
			{
				if ((aa+bb > 1) || (aa+bb < 1-2))
				{
					printf("\n\nError - Operation is not allowed");
				}
				else
				{
					cc = acos(aa+bb);
				}
			}
		}
		if (vb == 't')
		{
			printf("\n\n t | a | k ?");
			vb = getch();
			if (vb == 't')
			{
				cc = tan(aa+bb);
			}
			if (vb == 'a')
			{
				cc = atan(aa+bb);
			}
			if (vb == 'k')
			{
				cc = atan2(aa,bb);
			}
		}
		printf("\n\nSelected operation- %c",vb);
		printf("\n\nResult- %lf",cc);
	}
	while (vb != 'x');
	return 0;
}