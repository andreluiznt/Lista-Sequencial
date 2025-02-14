#include <iostream>
#include <vector>

using namespace std;

class ListaSequencial {
private:
    vector<int> lista;
    int capacidade;

public:
    ListaSequencial(int cap){
        capacidade = cap;
        lista.reserve(capacidade);
    }

    bool vazia(){ // verifica se a lista está vazia.
        return lista.size() == 0;
    }

    bool cheia(){ // verifica se a lista está cheia.
        return lista.size() == capacidade;
    }

    int tamanho(){
        return lista.size();
    }

    int obter(int pos){
        if(pos < 1 || pos > lista.size()){
            cout << "Posicao invalida." << endl;
            return -1;
        }
        return lista[pos - 1];
    }

    void modificar(int pos, int valor){
        if (pos  < 1 || pos > lista.size()){
            cout << "Posicao invalida!" << endl;
            return;
        }
        lista[pos - 1] = valor;
    }

    void inserir(int pos, int valor){
        if(pos < 1 || pos > lista.size() + 1){
            cout << "Posicao invalida." << endl;
            return;
        }
        if(cheia()){
            cout << "Lista cheia!" << endl;
            return;
        }
        lista.insert(lista.begin() + pos - 1, valor);
    }

    void retirar(int pos){
        if(pos < 1 || pos > lista.size()){
            cout << "Posicao invalida." << endl;
            return;
        }
        lista.erase(lista.begin() + pos - 1);
    }

    void exibir(){
        for(int i=0; i<lista.size(); i++){
            cout << lista[i] << " ";
        }
        cout << endl;
    }
};

int main(void){
    ListaSequencial lista(5); // lista com capacidade máxima de 5 elementos

    lista.inserir(1, 4);
    lista.inserir(2, 13);
    lista.inserir(3, 17);
    lista.inserir(4, 22);

    cout << "LISTA SEQUENCIAL:" << endl;
    lista.exibir();

    lista.modificar(2, 15);
    cout << "\nLISTA SEQUENCIAL APOS MODIFICACAO: " << endl;
    lista.exibir();

    lista.retirar(3);
    cout << "\nLISTA SEQUENCIAL APOS REMOVER UM ELEMENTO:" << endl;
    lista.exibir();

    cout << "\nElemento na posicao 2: " << lista.obter(2) << endl;

    cout << "\nTamanho da lista: " << lista.tamanho() << endl;
    return 0;
}
