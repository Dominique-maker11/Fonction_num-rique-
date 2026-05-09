#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f1(float x);
float f1(float x){
      return 2*x+1;
}
float f2(float x);
float f2(float x){
      return 2*pow(x,3)+4*pow(x,2)-1;
}
float f3(float x);
float f3(float x){
      return log(x)+6;
}
float f4(float x);
float f4(float x){
      return cos(log(x+1))-6;
}
float f5(float x);
float f5(float x){
      return log(x+1);
}
void enter(float *x)
{
      printf("\n veuillez entrer la valeur de x:");
      scanf("%f",x);
}
void choisir(int *f){
      printf("choisir le fonction parmi les suivants: \n 1:f(x)=2x+1 \n 2:f(x)=2x^3+4x^2-1 \n 3:f(x)=ln(x+1)-6 \n 4:f(x)=cos(ln(x+1))-6 \n 5:f(x)=ln(x+1)");
      printf("\nchoix:");
      scanf("%d",f);
}
void afficher(float x)
{
      printf("f(x)=%f \n",x);
}
void impossible(float *x)
{
	printf("\n erreur de calcul!\nln(%f) n'existe plus.\n",&x);
	return 0;
}
int main(int argc,char *argv[] )
{
      if(argc!=1){
            printf("\n Commande invalide! \n Respecter le syntaxe du commande:%s \n",argv[0]);
      }
      float x;
      int f;
      enter(&x);
      choisir(&f);
      if(x<=0 && (f==3||f==4||f==5))
      {
         impossible(&x);
      }
      else
      {
            if (f==1)
            {
                  float a=f1(x);
                  afficher(a);
            }
            else if(f==2)
            {
                  float b=f2(x);
                  afficher(b);
            }
            else if(f==3)
            {
                  float c=f3(x);
                  afficher(c);
            }
            else if(f==4)
            {
                  float d=f4(x);
                  afficher(d);
            }
            else
            {
                  float e=f5(x);
                  afficher(e);
            }
            return 0;
      }
}
