#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED "\e[1;31m"
#define GRN "\e[1;32m"
#define BLU "\e[1;34m"
#define BLK "\e[1;30m"
#define RST "\e[0m"

int main()
{
	int gw, b, s, n, k, g, w, si, i, ix, iy, l, t, v, V=0, W=0, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, o, oo, a, x, ko;
	float aw;
	
	srand(time(0));
	
	printf("\nRoulette strategie op 'even'. Alle getallen, ook geldbedragen, zijn geheel! Klik enter om te beginnen.");
	getchar();
	
	printf("\nGewenste winst: ");
	scanf("%d", &gw);
	
	printf("\nBasisinzet: ");
	scanf("%d", &si);
	
	printf("\nBudget: ");
	scanf("%d", &b);
	
	printf("\nAantal simulaties: ");
	scanf("%d", &n);
	
	o = gw % si;
	a = (gw - o) /si;
	
	if(o>0)
		oo=1;
	else
		oo=0;
	
	for(k=1; k<=n; k++)
	{
		printf("\n\n\n_____________________________________________\n\nSimulatie %d", k);
		s = a+oo;
		w = 0;
		l = a+oo;
		t = 1;
		A = o; B = 0; C = 0; D = 0; E = 0; F = 0; G = 0; H = 0; I = 0; J = 0; K = 0; L = 0; M = 0; N = 0; O = 0; P = 0; Q = 0; R = 0; S = 0; T = 0; U = 0; i = 0; ko = 0; v = 0;
		
		for(x=0; x<a; x++)
		{
			U=T; T=S; S=R; R=Q; Q=P; P=O; O=N; N=M; M=L; L=K; K=J; J=I; I=H; H=G; G=F; F=E; E=D; D=C; C=B; B=A; A=si;
		}
		
		do
		{
			if(t==1)
				ix = A;
			else if(t==2)
				ix = B;
			else if(t==3)
				ix = C;
			else if(t==4)
				ix = D;
			else if(t==5)
				ix = E;
			else if(t==6)
				ix = F;
			else if(t==7)
				ix = G;
			else if(t==8)
				ix = H;
			else if(t==9)
				ix = I;
			else if(t==10)
				ix = J;
			else if(t==11)
				ix = K;
			else if(t==12)
				ix = L;
			else if(t==13)
				ix = M;
			else if(t==14)
				ix = N;
			else if(t==15)
				ix = O;
			else if(t==16)
				ix = P;
			else if(t==17)
				ix = Q;
			else if(t==18)
				ix = R;
			else if(t==19)
				ix = S;
			else if(t==20)
				ix = T;
			else if(t==21)
				ix = U;
				
			if(l==1)
			{
				if(v==1)
					A = i;
				
				iy = A;
			}
			if(l==2)
			{
				if(v==1)
					B = i;
					
				iy = B;
			}
			if(l==3)
			{
				if(v==1)
					C = i;
					
				iy = C;
			}
			if(l==4)
			{
				if(v==1)
					D = i;
					
				iy = D;
			}
			if(l==5)
			{
				if(v==1)
					E = i;
					
				iy = E;
			}
			if(l==6)
			{
				if(v==1)
					F = i;
					
				iy = F;
			}
			if(l==7)
			{
				if(v==1)
					G = i;
					
				iy = G;
			}
			if(l==8)
			{
				if(v==1)
					H = i;
					
				iy = H;
			}
			if(l==9)
			{
				if(v==1)
					I = i;
					
				iy = I;
			}
			if(l==10)
			{
				if(v==1)
					J = i;
					
				iy = J;
			}
			if(l==11)
			{
				if(v==1)
					K = i;
					
				iy = K;
			}
			if(l==12)
			{
				if(v==1)
					L = i;
					
				iy = L;
			}
			if(l==13)
			{
				if(v==1)
					M = i;
					
				iy = M;
			}
			if(l==14)
			{
				if(v==1)
					N = i;
					
				iy = N;
			}
			if(l==15)
			{
				if(v==1)
					O = i;
					
				iy = O;
			}
			if(l==16)
			{
				if(v==1)
					P = i;
					
				iy = P;
			}
			if(l==17)
			{
				if(v==1)
					Q = i;
					
				iy = Q;
			}
			if(l==18)
			{
				if(v==1)
					R = i;
					
				iy = R;
			}
			if(l==19)
			{
				if(v==1)
					S = i;
					
				iy = S;
			}
			if(l==20)
			{
				if(v==1)
					T = i;
					
				iy = T;
			}
			if(l==21)
			{
				if(v==1)
					U = i;
					
				iy = U;
			}
			
			if(l==t)
				iy = 0;
			
			i = ix + iy;
			
			if(i>b+w)
			{
				i = 0;
				ko = 1;
			}
			else
			{
				ko = 0;
			}
			
			g = rand() % 37;
			printf("\n\n\n%d\n", g);
			
			if(g != 0 && g % 2 == 0)
			{
				printf("\nWinst! (%d)", i);
				w = w + i;
				s = s - 2;
				t++; l--;
				v = 0;
			}
			else
			{
				printf("\nVerlies! (%d)", i);
				w = w - i;
				s = s + 1;
				l++;
				v = 1;
			}
			
			printf("\nSaldo:	%d", s);
			printf("\nWinst:	%d", w);

		}
		while (w<gw && w>-b && ko==0);
		
		aw = aw + w;
		
		if(w>0)
		{
			W++;
		}
		else if(w<0)
		{
			V++;
		}
		
	}
	
	aw = aw/n;
	
	printf("\n\n\nWinsten:	%d\nVerliezen:	%d\nGemiddelde winst:	%.2f", W, V, aw);
}
