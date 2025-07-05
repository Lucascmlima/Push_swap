# push\_swap

> 42cursus | Algoritmos e Estrutura de Dados | Projeto em desenvolvimento 🚧

<p align="center">
  <img src="https://img.shields.io/badge/status-em%20desenvolvimento-yellow?style=for-the-badge&logo=42&logoColor=white" />
  <img src="https://img.shields.io/github/languages/top/Lucascml/push_swap?style=for-the-badge&color=blue" />
  <img src="https://img.shields.io/github/repo-size/Lucascml/push_swap?style=for-the-badge&color=orange" />
</p>

---

## 📌 Descrição

O `push_swap` é um projeto da 42 que consiste em ordenar uma pilha de números inteiros com o menor número possível de operações, utilizando uma segunda pilha auxiliar. O programa recebe uma lista de números como argumento e retorna a sequência de instruções para ordená-los.

---

## 🧠 Conceitos aplicados

* Estrutura de dados: Pilhas e listas ligadas
* Algoritmos de ordenação otimizados
* Análise de complexidade
* Manipulação de argumentos
* Validação de entradas (erro, duplicados, limites int)
* Norminette e boas práticas em C

---

## 🎯 Objetivo

Implementar um programa em C que imprima no terminal a menor sequência possível de instruções para ordenar uma pilha usando as seguintes operações:

* `sa`, `sb`, `ss` : swap topo das pilhas A e/ou B
* `pa`, `pb` : push entre as pilhas
* `ra`, `rb`, `rr` : rotação ascendente
* `rra`, `rrb`, `rrr` : rotação descendente

---

## 📂 Estrutura de Arquivos

```
push_swap/
├── src/
│   ├── main.c
│   ├── parsing.c
│   ├── operations.c
│   ├── sort_utils.c
│   ├── algorithm.c
├── include/
│   └── push_swap.h
├── libft/                # Biblioteca auxiliar
├── Makefile
└── README.md
```

---

## ⚙️ Compilando o projeto

```bash
make
```

---

## 🚀 Como usar

```bash
./push_swap 3 2 1
```

Resultado:

```
pb
sa
pa
```

---

## 🛑 Regras e Norminette

* Nenhuma função proibida utilizada
* Todo o código segue as regras da [Norminette da 42](https://github.com/42School/norminette)
* Validação rigorosa de entradas: números inteiros, duplicados, limites, etc.

---

## 👨‍💻 Autor

**Lucas C. M. Lima**
42 Lisboa - Estudante de Full Stack Development
📫 [lucascml.dev@outlook.com](mailto:lucascml.dev@outlook.com)
💻 [GitHub: lucascml](https://github.com/lucascml)

---

> "Push, swap, repeat... until sorted."
