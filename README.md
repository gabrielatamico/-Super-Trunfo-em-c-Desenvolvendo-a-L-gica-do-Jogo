# 🃏 Super Trunfo – Comparação Dupla  

Este projeto é um jogo simples em linguagem **C**, inspirado no clássico **Super Trunfo**, onde duas cartas (países) são comparadas com base em **dois atributos escolhidos pelo jogador**.  

---

## 🎯 Objetivo  

Permitir que o jogador escolha **dois atributos diferentes** para comparar as cartas de dois países, aplicando as regras de vitória e exibindo o resultado final de forma clara e organizada.  

---

## ⚙️ Funcionalidades  

✅ **Escolha de dois atributos:**  
O jogador seleciona dois atributos numéricos distintos para comparar as cartas.  

✅ **Comparação dupla:**  
Cada atributo é comparado separadamente — vence o maior valor, exceto a Densidade Demográfica, onde vence o menor.  

✅ **Soma dos resultados:**  
O programa soma os resultados das duas comparações e determina a carta vencedora.  

✅ **Tratamento de empates:**  
Se as somas forem iguais, o sistema exibe “Empate!”.  

✅ **Menus dinâmicos com `switch`:**  
O segundo menu não exibe o atributo já escolhido no primeiro.  

✅ **Validação de entrada:**  
O programa verifica se as opções são válidas e diferentes.  

✅ **Interface clara:**  
Mensagens explicativas e formatação organizada para facilitar a leitura.  

---

## 🧠 Atributos das Cartas  

Cada carta representa um país com os seguintes atributos:  

| Nº | Atributo               | Tipo     | Regra de vitória               |
|----|------------------------|----------|-------------------------------|
| 1  | População              | Inteiro  | Maior vence                   |
| 2  | Área                   | Real     | Maior vence                   |
| 3  | PIB                    | Real     | Maior vence                   |
| 4  | Pontos Turísticos      | Inteiro  | Maior vence                   |
| 5  | Densidade Demográfica  | Real     | **Menor vence**               |

---

## 🧩 Estrutura do Código  

- **Declaração das cartas:** países com seus atributos.  
- **Menu interativo:** escolha de dois atributos via `switch`.  
- **Comparação individual:** cada atributo é comparado e pontuado.  
- **Soma e resultado final:** soma dos pontos determina o vencedor.  

---

## 🖥️ Como Executar  

1. Certifique-se de ter um compilador C instalado (como **GCC**).  
2. Salve o código em um arquivo chamado, por exemplo, `super_trunfo.c`.  
3. Compile o código no terminal:  
   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```
4. Execute o programa:  
   ```bash
   ./super_trunfo
   ```
5. Siga as instruções na tela para escolher os atributos e ver o resultado.  

---

## 🧱 Requisitos Técnicos  

- Linguagem: **C**  
- Paradigma: Estruturado  
- Recursos utilizados: `if`, `switch`, `printf`, `scanf`  
- Sem uso de laços (`for`, `while`)  

---

## 🏆 Exemplo de Execução  

```
=== SUPER TRUNFO - COMPARAÇÃO DUPLA ===

Escolha o PRIMEIRO atributo para comparar:
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
Opção: 3

Escolha o SEGUNDO atributo (diferente do primeiro):
1. População
2. Área
4. Pontos Turísticos
5. Densidade Demográfica
Opção: 5

===== COMPARAÇÃO DOS ATRIBUTOS =====

PIB - Brasil: 2179000000.00 | Japão: 4026000000.00
Densidade Demográfica - Brasil: 25.07 | Japão: 328.06

========================================
Soma dos resultados individuais:
Brasil: 1 pontos
Japão: 1 pontos
========================================
Empate!
```

---

## 🧑‍💻 Autor  

**Gabriela Tamico Oguro**  
Projeto desenvolvido para consolidar o uso de **estruturas condicionais** e **menus interativos** em C.  
