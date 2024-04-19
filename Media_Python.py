'''
Autor: Isabela de Paula Castro
Data de Criação: 08/04/2024
Data de Modificação: 17/04/2024
Objetivo: Calcular a media de CAP
'''

#Entrada de Dados
print("Digite sua nota da Prova 1:")
prova1 = input()
prova1 = float(prova1)

print("Digite sua nota da Prova 2:")
prova2 = input()
prova2 = float(prova2)

print("Digite sua nota da Prova 3:")
prova3 = input()
prova3 = float(prova3)

print("Digite sua nota da Atividade 1:")
atv1 = input()
atv1 = float(atv1)

print("Digite sua nota da Atividade 2:")
atv2 = input()
atv2 = float(atv2)

print("Digite sua nota da Atividade 3:")
atv3 = input()
atv3 = float(atv3)

print("Digite sua nota da Atividade 4:")
atv4 = input()
atv4 = float(atv4)

print("Digite sua nota da Atividade 5:")
atv5 = input()
atv5 = float(atv5)

print("Digite sua nota da Atividade 6:")
atv6 = input()
atv6 = float(atv6)

print("Digite sua nota da Atividade 7:")
atv7 = input()
atv7 = float(atv7)

print("Digite sua nota da Atividade 8:")
atv8 = input()
atv8 = float(atv8)

print("Digite sua nota da Atividade 9:")
atv9 = input()
atv9 = float(atv9)

print("Digite sua nota da Atividade 10:")
atv10 = input()
atv10 = float(atv10)

#Calculo da Media de CAP
media = (prova1*0.25)+(prova2*0.25)+(prova3*0.3)+(((atv1+atv2+atv3+atv4+atv5+atv6+atv7+atv8+atv9+atv10)/10)*0.2)

#Resultado
print("Media = ", media)