typedef struct pessoa Pessoa;

Pessoa *list_pessoa();
Pessoa *add(Pessoa *pessoas);
Pessoa *remover(Pessoa *pessoas, float altura);
Pessoa *buscar(Pessoa *pessoas, float altura);
void mostrar_pessoa(Pessoa *pessoas, float altura);
void mostrar_todos(Pessoa *pessoas);