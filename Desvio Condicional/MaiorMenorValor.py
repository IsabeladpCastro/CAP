'''
Autor: Isabela de Paula Castro RA:824145
Data de criação: 29/04/2024
Data de Modificação: 29/04/2024
Objetivo: Descobrir o maior valor dentre os 7 números digitados pelo usuario
'''


#Entrada de Dados
print("Digite o primeiro número: ")
n1 = input()
n1 = int(n1)


print("Digite o segundo número: ")
n2 = input()
n2 = int(n2)


print("Digite o terceiro número: ")
n3 = input()
n3 = int(n3)


print("Digite o quarto número: ")
n4 = input()
n4 = int(n4)


print("Digite o quinto número: ")
n5 = input()
n5 = int(n5)


print("Digite o sexto número: ")
n6 = input()
n6 = int(n6)


print("Digite o setimo número: ")
n7 = input()
n7 = int(n7)


#Calculo entre o maior e o menor
maior = n1
if n2 > maior:
        maior = n2
    
if n3 > maior:
        maior = n3
    
if n4 > maior:
        maior = n4
    
if n5 > maior:
        maior = n5

if n6 > maior:
        maior = n6
    
if n7 > maior:
        maior = n7


menor = n1
if menor > n2:
        menor = n2

if menor > n3:
        menor = n3

if menor > n4:
        maior = n4

if menor > n5:
        menor = n4
    
if menor > n6:
        maior = n5


if menor > n7:
        menor = n7
            
#Impressão do Cálculo/Resultado            
print("O valor do maior número dentre os 7 digitados é ", maior)
print("O valor do menor número dentre os 7 digitados é ", menor)