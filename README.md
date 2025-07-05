# push\_swap

> Projeto da 42 Lisboa

---

## 📝 Descrição

O `push_swap` é um projeto que desafia o estudante a ordenar uma pilha de números inteiros utilizando apenas um conjunto limitado de operações, sempre buscando o menor número possível de movimentos. Ele desenvolve habilidades de lógica, algoritmos e manipulação de listas ligadas em C.

---

## ⚙️ Funcionalidades

* Ordena uma pilha de inteiros com o menor número de operações possível
* Usa apenas comandos predefinidos (`sa`, `pb`, `ra`, etc.)
* Suporta validação de entrada, limites de `int` e detecção de duplicados
* Implementação modular e compatível com a Norminette da 42

---

## 📂 Arquivos do Projeto

```
push_swap/
├── main.c             // Lógica de entrada e execução
├── parsing.c          // Validação e armazenamento dos números
├── operations.c       // Implementação dos comandos permitidos
├── sort_utils.c       // Funções auxiliares de ordenação
├── algorithm.c        // Algoritmo principal de ordenação
├── push_swap.h        // Header com structs e protótipos
├── Makefile           // Compilação automatizada
```

---

## 🧪 Compilando e Testando

### 🔨 Compilar com Makefile

```bash
make
```

### 🧪 Exemplo de uso:

```bash
./push_swap 3 2 1
```

Saída esperada:

```
pb
sa
pa
```

---

## 🚫 Regras da 42

* ❗ **Proibido usar**: funções da libc que manipulam strings, listas ou ordenação
* ✅ Seguindo as regras da Norminette
* 📚 Toda a lógica de parsing e sorting é feita manualmente

---

## 🧠 Estrutura e Lógica

* Inicializa duas pilhas: `a` (com os números) e `b` (auxiliar)
* Aplica operações com base em:

  * Número de elementos
  * Posicionamento ideal para rotação
  * Uso de algoritmos como **radix sort** para grandes conjuntos
* Cada operação é exibida no terminal na ordem correta

---

## 👨‍💻 Autor

**Lucas C. M. L.**
📫 [lucascml.dev@outlook.com](mailto:lucascml.dev@outlook.com)
🌍 Lisboa, Portugal (disponível para toda a UE)
🌐 [GitHub - lucascml](https://github.com/lucascml)
