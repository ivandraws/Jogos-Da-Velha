#include<stdio.h>

#define TAM 3
int winCheck(char matriz[TAM][TAM]);

int main(int argc, char const *argv[])
{
    char mat[TAM][TAM];
    int counter = 1;

    while (1)
    {
        printf("Round %i\n", &counter);
        for (int i = 0; i < TAM; i++)
        {
            for (int j = 0; j < TAM; j++)
            {
                do
                {
                    scanf("%c", &mat[TAM][TAM]);
                } while (mat[i][j] != ' ' || mat[i][j] == 'X' || mat[i][j] == 'O');
                
                
            }
            
        }
        
        counter++;
        if (winCheck(mat) == -1)
        {
            continue;
        }
        else if (winCheck < 3 && winCheck > -1)
        {
            if (winCheck(mat) == 0)
            {
                printf("TIE!\n");
            }
            else if (winCheck(mat) == 1)
            {
                printf("X WINS!\n");
            }
            else
            {
                printf("O WINS!\n");
            }
            
            break;
        }
        
    }
    
    return 0;
}

int winCheck(char mat[TAM][TAM])
{
    int spaces = 0;
    int cruz = 0;
    int circ = 0;

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (mat[i][j] == ' ')
            {
                spaces++;
            }
            if (mat[i][j] == 'X')
            {
                cruz++;
            }
            if (mat[i][j] == 'O')
            {
                circ++;
            }
            
        }
        
    }
    
    if (spaces < 5)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < TAM; i++)
        {
            if (i == 0);
            {
                if (mat[i][i] == mat[i+1][i+1] && mat[i][i] == mat[i+2][i+2])
                {
                    if (mat[i][i] == 'X')
                    {
                        return 1;
                    }
                    else if (mat[i][0] == 'O')
                    {
                        return 2;
                    }
                    
                }
                
            }

            if (mat[i][0] == mat[i][1] && mat[i][0] == mat[i][2])
            {
                if (mat[i][0] == 'X')
                {
                    return 1;
                }
                else if (mat[i][0] == 'O')
                {
                    return 2;
                } 
                
            }

            if (mat[0][i] == mat[1][i] && mat[0][i] == mat[2][i])
            {
                if (mat[0][i] == 'X')
                {
                    return 1;
                }
                else if (mat[0][i] == 'O')
                {
                    return 2;
                } 
                
            }

            if (i == 3)
            {
                if (mat[i][i] == mat[i-1][i-1] && mat[i][i] == mat[i-2][i-2])
                {
                    if (mat[i][i] == 'X')
                    {
                        return 1;
                    }
                    else if (mat[i][i] == 'O')
                    {
                        return 2;
                    }
                    
                    
                }
                
            }
            
            
        }
        
        
    }
    
    

    if (spaces == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
    
}