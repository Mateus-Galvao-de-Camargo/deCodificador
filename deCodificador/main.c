#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int b=0, l=0, a=0, s=0, e=0, numero1=0, numero2=0, somaEsperada=0, acertos=0, i=0, cl=0, ce=0, ca=0, cs=0, tentativa=0;

    //Loopings aninhados
    for(i=0;i<10;i++){
        b = i;

        for(cl=0;cl<6;cl++){
            if(cl != i){
                l = cl;
            }

            for(ca=0;ca<10;ca++){
                if(ca != i && ca != cl){
                    a = ca;
                }

                for(cs=0;cs<10;cs++){
                    if(cs != i && cs != cl && cs != ca){
                        s = cs;
                    }

                    for(ce=0;ce<10;ce++){
                        if(ce != i && ce != cl && ce != ca && ce != cs){
                            e = ce;
                        }

                        //Formando os números inteiros para checar a soma e validar o problema
                        numero1 = (b*10000) + (l*1000) + (a*100) + (s*10) + e;

                        numero2 = (l*1000) + (b*100) + (s*10) + a;

                        somaEsperada = (b*10000) + (a*1000) + (s*100) + (e*10) + s;

                        tentativa++;

                        if(numero1 + numero2 == somaEsperada){
                            acertos++;
                            printf("Tentativa: %d \n Primeiro número: %d \n Segundo número: %d \n Soma: %d \n\n", tentativa, numero1, numero2, somaEsperada);
                        }
                    }
                }
            }
        }
    }
    printf("Acertos: %d \nTentativas: %d", acertos, tentativa);
    return 0;
}
