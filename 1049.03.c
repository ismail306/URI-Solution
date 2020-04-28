#include<stdio.h>

#include<string.h>

int main()

{

    char s[100] , a[100], b[100];

    gets(s);

    gets(a);

    gets(b);

    if(strcmp(s,"vertebrado")==0){

        if(strcmp(a,"ave")==0){

            if(strcmp(b,"carnivoro")==0)

                printf("aguia\n");

            else if(strcmp(b,"onivoro")==0)

                printf("pomba\n");

        }

        else if(strcmp(a,"mamifero")==0){

                if(strcmp(b,"onivoro")==0)

                    printf("homem\n");

                else if(strcmp(b,"herbivoro")==0)

                    printf("vaca\n");

            }

        }

    else if(strcmp(s,"invertebrado")==0){

        if(strcmp(a,"inseto")==0){

            if(strcmp(b,"herbivoro")==0)

                printf("lagarta\n");

            else if(strcmp(b,"hematofago")==0)

                printf("pulga\n");

        }

        else if(strcmp(a,"anelideo")==0){

                if(strcmp(b,"onivoro")==0)

                    printf("minhoca\n");

                else if(strcmp(b,"hematofago")==0)

                    printf("sanguessuga\n");

        }

    }

   return 0;

}
