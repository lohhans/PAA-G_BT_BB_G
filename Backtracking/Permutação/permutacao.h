#ifndef __PERMUTACAO_H__
#define __PERMUTACAO_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(int vetor[], int i, int j);

void permuta(int vetor[], int inf, int sup);


// #define maximoVertice 200
//
// typedef struct Aresta{
//     int peso;
//     int verticeOrigem;
//     int verticeDestino;
//     struct Aresta* prox;
// }Aresta;
//
// typedef struct Grafo{
//     int ponderado;
//     int digrafo;
//     int v[maximoVertice][maximoVertice];
//     struct Aresta* arestas;
// }Grafo;
//
// Grafo* inicializarGrafo(int ponderado, int digrafo); //ok
//
// Aresta* inserirAresta(Aresta* aresta, int verticeOrigem, int verticeDestino, int peso); //ok
//
// void inserirGrafo(Grafo* grafo, int verticeOrigem, int verticeDestino, int peso); //ok
//
// void ordenacao(Aresta* aresta); //ok
//
// void ordenacaoDoArquivo(Aresta* aresta); //ok
//
// void kruskal(Grafo* grafo, Grafo* grafo2); //ok
//
// int calcularPeso(Grafo *grafo); //ok
//
// void receberArquivo(char arquivo[], Grafo* grafo); //ok
//
// void escreverArquivo(FILE* arquivo, Grafo* grafo); //ok
//
// void imprimirGrafo(Grafo* grafo); //ok

#endif //__PERMUTACAO_H__
