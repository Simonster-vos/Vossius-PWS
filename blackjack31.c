#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED "\e[1;31m"
#define GRN "\e[1;32m"
#define BLU "\e[1;34m"
#define BLK "\e[1;30m"
#define RST "\e[0m"
#define N 311

int main()
{
	float tc, w, i;
	int d=6, n, dg, g, a, da, A, dA, h, k, t, dt, s, rc, q, x, xs;
	int X[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311};
	char c='H', p='Y';
	
	srand(time(0));
	
	printf("\nWelkom bij blackjack! Programma telt kaarten en bepaalt zelf de inzet. Klik enter om te beginnen... ");
	getchar();
	
	printf("Hoe veel shoes wil je spelen? ");
	scanf("%d", &xs);
	
//	printf("\nAantal decks in shoe: ");
//	scanf("%d", &d);
	
	
	for(q=1; q<=xs; q++)
	{
		rc = 0; tc=0.0; w=0.0;
		h = 52 * d;
		
		for(x=0; x<=N; x++)
		{
			X[x] = x;
		}
		
		do
		{
			dA=0; da=0; a=0; A=0; t=0; dt=0; s=1; n=100;
			
			if(tc>=5.0)
				i = 60;
			else if(tc>=4.0)
				i = 55;
			else if(tc>=3.0)
				i = 40;
			else if(tc>=2.0)
				i = 25;
			else if(tc>=1.0) 
				i = 10;
			else
				i = 5;
			
			do
			{
				n = rand() % (52*d);
			}
			while(X[n] == -1 || n == -1);
			
			h--;
			X[n] = -1;
			dg = n % 13;
			
			if(dg>10 || dg==1)
			{
				dg = 10;
				rc--;
			}
			else if(dg==0)
			{
				if(dA==0)
				{
					dg = 11;
					da=1;
				}
				else
				{
					dg = 1;
				}
				
				rc--;
				dA++;
			}
			else if(dg<=6 && dg>=2)
			{
				rc++;
			}
			
			dt = dt + dg;
			printf("\n\nDealers upcard:		"BLU"%d"RST"\nYour hand:		", dg);
			
//			dg = 14;
			
			for(k=1; k<=2; k++)
			{
				do
				{
					n = rand() % (52*d);
				}
				while(X[n] == -1 || n == -1);
				
				h--;
				X[n] = -1;
				g = n % 13;
				
				if(g>10 || g==1)
				{
					g = 10;
					rc--;
				}
				else if(g==0)
				{
					if(A==0)
					{
						g = 11;
						a=1;
					}
					else
					{
						g = 1;
					}
					
					rc--;	
					A++;
				}
				else if(g<=6 && g>=2)
				{
					rc++;
				}
				
				t = t + g;
				printf("%d ", g);
			}
			
			if(t==21)
			{
				printf(GRN"Blackjack!"RST);
				s = 0;
				w = w + i*0.5;
			}
			else if(a==0)
			{
				printf("	tot: "BLU"%d"RST, t); //"\nH / S? ", t);
//				scanf(" %c", &c);

				if(t>=17)
				{
					c = 'S';
				}
				else if(t<=11)
				{
					c = 'H';
				}
				else if(dg<=6)					
				{
					c = 'S';
				}
				else if(dg>=7)
				{
					c = 'H';
				}
			}
			else
			{
				printf("	tot: "BLU"%d/%d"RST, t, t-10); //"\nH / S? ", t, t-10);
//				scanf(" %c", &c);

				if(t>=17)
				{
					c = 'S';
				}
				else if(t<=11)
				{
					c = 'H';
				}
				else if(dg<=6)					
				{
					c = 'S';
				}
				else if(dg>=7)
				{
					c = 'H';
				}
			}
			
//			g = 14;
			
			if(c=='H' && s==1)
			{
				do
				{
					do
					{
						n = rand() % (52*d);
					}
					while(X[n] == -1 || n == -1);
					
					h--;
					X[n] = -1;
					g = n % 13;
					
					if(g>10 || g==1)
					{
						g = 10;
						rc--;
					}
					else if(g==0)
					{
						if(A==0)
						{
							g = 11;
							a=1;
						}
						else
						{
							g = 1;
						}
						
						rc--;
						A++;
					}
					else if(g<=6 && g>=2)
					{
						rc++;
					}
					
					t = t + g;
					
					if(t==21)
					{
						printf("\n			%d	tot: "BLU"%d"RST, g, t);
					}
					else if(a==0)
					{
						printf("\n			%d	tot: "BLU"%d"RST, g, t);
					}
					else if(t>21)
					{
						t = t-10;
						a=0;
						printf("\n			%d	tot: "BLU"%d"RST, g, t);
					}
					else if(a!=0 && t<21)
					{
						printf("\n			%d	tot: "BLU"%d/%d"RST, g, t, t-10);
					}
					
					if(t>21)
					{
						printf(RED"\nBust!"RST);
						s = 0;
						t = 0;
					}
					else if(t==21)
					{
						printf(GRN"\nYou got 21!"RST);
						s = 0;
					}
					
					if(s==1)
					{
//						printf("\nH / S? ");
//						scanf(" %c", &c);
						if(t>=17)
						{
							c = 'S';
						}
						else if(t<=11)
						{
							c = 'H';
						}
						else if(dg<=6)
						{
							c = 'S';
						}
						else if(dg>=7)
						{
							c = 'H';
						}
					}
				}
				while(c=='H' && s==1);
			}
			
//			g = 14;
			
			printf("\n\nDealers turn!");
			
			do
			{
				do
				{
					n = rand() % (52*d);
				}
				while(X[n] == -1 || n == -1);
				
				h--;
				X[n] = -1;
				dg = n % 13;
				
				if(dg>10 || dg==1)
				{
					dg = 10;
					rc--;
				}
				else if(dg==0)
				{
					if(dA==0)
					{
						dg = 11;
						da=1;
					}
					else
					{
						dg = 1;
					}
					
					rc--;
					dA++;
				}
				else if(dg<=6 && dg>=2)
				{
					rc++;
				}
				
				dt = dt + dg;
				if(da!=0 && dt>21)
				{
					dt = dt-10;
					da=0;
				}
					
				printf("\nDealers card:	%d	tot: "BLU"%d"RST, dg, dt);
			}
			while(dt<17);
			
//			dg = 14;
			
			tc = rc / (h/52.0);

			if(dt>21)
				dt = 1;
				
			if(t>dt)
			{
				printf(GRN"\n\nYou won!"RST);
				w = w + i;
			}
			else if(t==dt)
			{
				printf("\n\nPush!");
			}
			else if(t<dt)
			{
				printf(RED"\n\nYou lost!"RST);
				w = w - i;
			}
						
			printf("\n\nAantal kaarten over: %d\n\nRunning count:	%d\nTrue count:	%.2f\n\nTotal win:	%.2f ", h, rc, tc, w);
			p = 'Y';	//		scanf(" %c", &p);
		}
		while(h>13*d && p=='Y');
	}
}
