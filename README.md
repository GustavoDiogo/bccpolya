## Apresentação em linguagem matemática

x pertence aos reais tal que y>0


x1 = 1

f(x) = [x1+(x/x1))/2 = v2 > 

v2 = (v1+(x/v1))/2;
v1 = (v2 + (x/v2))/2;
v2 = (v1+(x/v1))/2;
v1 = (v2 + (x/v2))/2;


## Apresentação em Português Estruturado

Algoritimo
 função raizq: real(real x)
 
 var 
    v1, v2: real
 
 
 início
 
{
          v1 = 1.0
          
     v2 = 0.0
     
        faça
        
              v2 = (v1+(x/v1))/2
              
              v1= (v2 + (x/v2))/2
              
              v2 = (v1+(x/v1))/2
              
              v1= (v2 + (x/v2))/2
              
        enquanto (abs(v1 - v2) > 0)


fimfunção

var 

  n: real

inicio 

escraval (" Digite um numero: ")

  leia (n);

se (n < 0) nentão

  escreva("Número inválido")
  
então se (n==0:)

  escreva("0)
  
senão 

  escreva("A raiz quadrada é,raizq(n))
  
fimse

fimalgoritimo



