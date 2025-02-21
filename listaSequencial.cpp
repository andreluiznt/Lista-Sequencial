#include <iostream>

using namespace std;

class ListaSeq{

private:
    int* dados;
    int tamAtual;
    int tamMax;

public:

    ListaSeq(){
        tamMax = 100;
        tamAtual = 0;
        dados = new int[tamMax];
    }

    bool vazia(){
        return tamAtual == 0;
    }

    bool cheia(){
        return tamAtual == tamMax;
    }

    int tamanho(){
        return tamAtual;
    }

    int elemento(int pos){
        if(pos <= 0 || pos > tamAtual){
            return -1;
        }

        return dados[pos - 1];
    }

    int posicao(int dado){
        for(int i = 0; i < tamAtual; i++){
            if(dados[i] == dado){
                return i + 1;
            }
        }

        return -1;
    }

    bool insere(int pos, int dado){
        if(cheia() || pos <= 0 || pos > tamAtual + 1){
            return false;
        }

        for(int i = tamAtual; i >= pos; i--){
            dados[i] = dados[i - 1];
        }

        dados[pos - 1] = dado;
        tamAtual++;
        return true;
    }

    int remove(int pos){
        if(pos <= 0 || pos > tamAtual){
            return -1;
        }

        int dado = dados[pos - 1];
        for(int i = pos - 1; i < tamAtual - 1; i++){
            dados[i] = dados[i  + 1];
        }

        tamAtual--;
        return dado;
    }

    void mostrarTudo(){
        if(vazia()){
            cout << "A lista esta vazia." << endl;
            return;
        }

        cout << "Elemento na lista: ";
        for(int i = 0; i < tamAtual; i++){
            cout << dados[i] << " ";
        }

        cout << endl;
    }

    ~ListaSeq(){
        delete[] dados;
    }
};

int main(void){
    ListaSeq lista;

    cout << "----- LISTA SEQUENCIAL -----" << endl;

    cout << "\n";

    /*

    if(lista.vazia()){
        cout << "A lista esta vazia." << endl;
    }else{
        cout << "A lista nao esta vazia." << endl;
    }

    cout << "\n";
    if(lista.cheia()){
        cout << "A lista esta cheia." << endl;
    }else{
        cout << "A lista nao esta cheia." << endl;
    }

    */

    lista.mostrarTudo();

    cout << "\n";

    lista.insere(1, 10);
    lista.insere(2, 13);
    lista.insere(3, 17);
    lista.insere(4, 22);
    lista.insere(5, 24);

    cout << "\n";

    lista.mostrarTudo();

    cout << "\n";

    cout << "Tamanho da lista: " << lista.tamanho() << endl;

    cout << "\n";

    cout << "Elemento na posicao 2: " << lista.elemento(2) << endl;

    cout << "\n";

    cout << "Posicao do dado 17: " << lista.posicao(17) << endl;

    lista.remove(2);

    cout << "\n";
    cout << "Tamanho da lista apos remocao: " << lista.tamanho() << endl;

    cout << "\n";
    cout << "Elemento na posicao 2 apos remocao: " << lista.elemento(2);

    cout << "\n";

    return 0;
}
