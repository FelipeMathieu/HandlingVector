// Main.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

void preencher(float *v, int size)
{
    printf("Favor preencher o vetor com 10 unidades:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Valor para posicao %d: ", i + 1);
#pragma warning(suppress : 4996)
        scanf("%f", &v[i]);
        printf("\n");
    }
}

float soma(float *v, int size, int y)
{
    float resultado = y;
    for (int i = 0; i < size; i++)
    {
        if (v[i] > 0 || v[i] == y)
            resultado += v[i];
    }
    return resultado;
}

int conta(float *v, int size)
{
    int resultado = 0;
    for (int i = 0; i < size; i++)
    {
        if (v[i] > 0 && ((int)v[i] % 2 != 0))
            resultado++;
    }
    return resultado;
}

int main(void)
{
    float v[10] = { 1, 2, -3, 4, 5, 6, 7, -9, 10 };
    int x, y;

#pragma warning(suppress : 4996)
    scanf("%i %i", &x, &y);

    if (x != 9) {
        preencher(v, 10);
        printf("\n%i", conta(v, 10));
    } else {
        printf("%f", soma(v, 10, y));
    }

    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
