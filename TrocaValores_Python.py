'''
Autor: Isabela de Paula Castro
Data de Criação: 17/04/2024
Data de Modificação: 17/04/2024
Objetivo: Mudar/Inverter os valores das variáveis A e B 
'''
#Entrada de Dados
print("Digite o valor da variavel A: ")
A = input()
A = int(A)

print("Digite o valor da variavel B: ")
B = input()
B = int(B)

print("O valor da variavel A:", A)
print("O valor da variavel B:", B)

#Mudança de variavel
aux = A
A = B
B = aux

#Resultado
print("O valor invertido da variavel A:", A)
print("O valor invertido da variavel B:", B)