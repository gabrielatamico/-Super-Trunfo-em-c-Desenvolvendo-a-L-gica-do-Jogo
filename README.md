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

## 🧱 Requisitos Técnicos  

- Linguagem: **C**  
- Paradigma: Estruturado  
- Recursos utilizados: `if`, `switch`, `printf`, `scanf`
  
---

