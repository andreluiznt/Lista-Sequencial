/* Atividade de Lista Sequencial (Arrays) para a disciplina de Estrutura de Dados

Implementar uma lista sequencial de inteiros, utilizando o tipo vetor, de inteiros com as seguintes operações:

1. Criação da lista vazia;
2. Verificar se a lista está vazia;
3. Verificar se a lista está cheia;
4. Obter o tamanho da lista;
5. Obter/modificar o valor do elemento de uma determinada posição na lista;
6. Inserir um elemento em uma determinada posição;
7. Retirar um elemento de uma determinada posição.

 */

#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int>lista = {4, 13, 22, 27};

    // .empty() vai verificar se está vazia e retornar o resultado com o auxilio do if/else
    cout << "LISTA SEQUENCIAL (ARRAY)" << endl;

    //exibindo a lista

    for(int i=0; i<lista.size(); i++){
        cout << lista[i] << " ";
    }

    if(lista.empty()){
        cout << "\n\n" << "A lista esta vazia." << endl;
    }else{
        cout << "\n\n" << "A lista tem elementos." << endl;
    }

    //para verificar o tamanho da lista usarei o .size()

    cout << "\n" << "O tamanho da lista eh: " << lista.size() << endl;

    //obter/modificar o valor do elemento de uma determinada posição na lista.

    cout << "\n" << "O valor do elemento na posicao 2 eh: " << lista[1] << endl;
    lista[1] = 15;
    cout << "O novo valor do elemento na posicao 2 eh: " << lista[1] << endl;;

    //inserindo um elemento em uma determinada posição

    lista.insert(lista.begin() + 1, 10); // isso vai fazer com que o elemento 2 seja inserido na posição 2 (indice 1).
                                         // isso também faz com que todos os elementos após a posição 2 seja movido para direita.

    cout << "\n";

    for(int i=0; i<lista.size(); i++){
        cout << lista[i] << " ";
    }

    cout << "\n";

    //removendo um elemento de uma determinada posição

    lista.erase(lista.begin() + 2); // isso vai fazer com que o elemento da posição 3 (indice 2) seja removido

    cout << "\n";

    for(int i=0; i<lista.size(); i++){
        cout << lista[i] << " ";
    }

    cout << "\n";

    return 0;
}
