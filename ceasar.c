#include <cs50.h>
#include <stdio.h>
#include  <string.h> 
#include <ctype.h>
#include <stdlib.h>


int main( int argc, string argv[])
{     
    // CONSOLE 1 - parte de verificar se tem 2 parâmetros
    
    if(argc != 2) 
    {
        printf(" Escreva dessa forma: ./caesar 'chave ");
        return 1;
    }
    
        // CONSOLE 2- VALIDAÇÃO DO QUE FOI DIGITADO NO ARGV[1]
        
     for( int i =0, n = strlen(argv[1]); i < n; i++) // Esse loop é para checar carct por carct da chave 
    {
        if(!isdigit(argv[1][i])) // Se for diferente de um num int, vai retornar erro
        {
            printf("Passe a chuva corretamente!");
            return 1;
        }
        
        int k = atoi(argv[1]); // conversão da chave inicialmente string para int
         
        string plaintext= get_string(" plaintext: " );  // Requisição do input
        printf(" ciphertext: "); // Entrega do output
         
            // CONDIÇÕES DE CRIPTOGRAFAMENTO DO INPUT ESPECÍFICO 
        for( int t = 0, l= strlen(plaintext); t < l; t++) // visitamento de cada carct digitado no input 
        {
            if(isupper(plaintext[t])) 
            {
                printf("%c",(plaintext[t] - 65 + k) % 26 + 65);  // fórmula matemática que vai fazer o navegamento no alfabeto do código ASCII (MAIÚSCULAS)
            }
            else if(islower(plaintext[t])) // Minúsculas 
            {
                printf("%c", (plaintext[t] - 97 + k) % 26 + 97);
            }
            else
            {
                printf("%c", plaintext[t]); // Se não for letras, não vai haver nenhuma modificação.
            }
        }
        printf("\n");
    }
     // 19/06/2022
}
