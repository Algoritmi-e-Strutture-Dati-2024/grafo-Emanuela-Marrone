#include <iostream>
#include "Grafo.cpp" // Include la classe Grafo direttamente

int main() {
    // Creazione del grafo
    Grafo<int> grafo;

    // Aggiunta dei nodi (numeri interi)
    grafo.aggiungiNodo("SALERNO");
    grafo.aggiungiNodo("NAPOLI");
    grafo.aggiungiNodo("AVELLINO");
    grafo.aggiungiNodo("CASERTA");
    grafo.aggiungiNodo("BENEVENTO");

    // Aggiunta degli archi con pesi
    grafo.aggiungiArco("SALERNO", "NAPOLI", 20);
    grafo.aggiungiArco("SALERNO", "AVELLINO", 67);
    grafo.aggiungiArco("NAPOLI", "CASERTA", 56);
    grafo.aggiungiArco("AVELLINO", "BENEVENTO", 90);
    grafo.aggiungiArco("CASERTA", "BENEVENTO", 12);
    grafo.aggiungiArco("BENEVENTO", "NAPOLI", 45);

    // Stampa della matrice di adiacenza del grafo
    grafo.stampa();

    // Verifica se un nodo esiste
    if (grafo.verificaNodo("AVELLINO") == true)
    std::cout<<">Esiste il nodo"<<std::endl;
    else
    std::cout<<"Non esiste il nodo"<<std::endl;

    // Verifica se un arco esiste
    if ((grafo.verificaArco("SALERNO", "NAPOLI") == true)
    std::cout<<">Esiste l'arco"<<std::endl;
    else
    std::cout<<"Non esiste l'arco"<<std::endl;
    
    if (grafo.verificaArco("SALERNO", "CASERTA") == true)
    std::cout<<">Esiste l'arco "<<std::endl;
    else
    std::cout<<"Non esiste l'arco"<<std::endl;
  

    // Visualizza i nodi adiacenti a un nodo
    grafo.nodiAdiacenti("SALERNO");

    // Rimuove un arco
    grafo.rimuoviArco("SALERNO", "NAPOLI");
    std::cout << "Matrice di Adiacenza dopo la rimozione dell'arco tra SALERNO e NAPOLI:" << std::endl;
    grafo.stampa();

    // Rimuove un nodo
    grafo.rimuoviNodo("AVELLINO");
    std::cout << "Matrice di Adiacenza dopo la rimozione del nodo AVELLINO:" << std::endl;
    grafo.stampa();

    // Aggiunta di un nuovo nodo e arco
    grafo.aggiungiNodo("ROMA");
    grafo.aggiungiArco("ROMA", "LATINA", "FORMIA");
    std::cout << "Matrice di Adiacenza dopo l'aggiunta del nodo ROMA e dell'arco tra ROMA e LATINA:" << std::endl;
    grafo.stampa();

    // Verifica connettività tra due nodi
    if (grafo.verificaArco("SALERNO", "CASERTA") == true)
    std::cout<<">Il nodo SALERNO è connesso al nodo BENEVENTO "<<std::endl;
    else
    std::cout<<"Il nodo SALERNO non è connesso al nodo BENEVENTO"<<std::endl;
   
    return 0;
}
