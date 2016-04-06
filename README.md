##Descrição do problema:
O problema resume-se em fazer uma aproximação da raiz quadrada de um número real.Feito em linguagem C, as equações foram baseadas no método de Herão para solucionar o problema.

## Apresentação em linguagem matemática

x pertence aos reais tal que y>0

Valores iniciais:

v1 = 1 e v2 = 0

f(x) = [v1+(x/v1)]/2

f(x) = v2

v2 = (v1+(x/v1))/2;

Utiliza o novo valor de v2 em:

v1 = [v2 + (x/v2)]/2;

Utiliza o novo valor de v1 em:

v2 = [v1+(x/v1)]/2;

Utiliza o novo valor de v2 em:

v1 = [v2 + (x/v2)]/2;

v1 = y

## Apresentação em Português Estruturado

incluia stdio.h

 função raizq: real(real x)

iníciofunçãoraizq

     variáveis 
 
      v1, v2: real

      v1 = 1.0
  
      v2 = 0.0
  
      faça
   
         v2 = (v1+(x/v1))/2
              
         v1= (v2 + (x/v2))/2
              
         v2 = (v1+(x/v1))/2
              
         v1= (v2 + (x/v2))/2
              
       enquanto (abs(v1 - v2) > 0)
        
       retorne v1
        
fimfunçãoraizq




função principal: inteiro

iníciofunçãoprincipal

      variáveis 

       n: real

         ler n

         se n < 0 nentão

            escreva "Número inválido"
  
         fimse
  
         então se n==0

             escreva "0"
  
          fimentãose
  
          senão 

             escreva "A raiz quadrada é: raizq(n)"
  
          fimsenão

fimfunçãoprincipal



