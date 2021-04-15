#include <stdio.h>

void printField(int *field);
void move(int *field, int posX, int posY, char zug);
void playBox();
void playBoxBox();
void printBoxField(*field);

int main()
{
    playBoxBox();
    return 0;
}

void playBoxBox()
{
    int i;
    int field[64];
    for (i = 0; i < 64; i++)
    {
        field[i] = 0;
    }
    field[0] = 1;
    int posX = 0;
    int posY = 0;
    printBoxField(field);
    char zug = 'a';
    while (zug != 'x')
    {
        printf("Enter directional key {w,a,s,d} or exit key {x}: ");
        scanf(" %c", &zug);
        if (zug == 'w' || zug == 'a' || zug == 's' || zug == 'd')
        {
            switch (zug)
            {
            case 'w':
                if (posY < 1)
                {
                    break;
                }
                else
                {
                    posY -= 1;
                }
                break;
            case 'a':
                if (posX < 1)
                {
                    break;
                }
                else
                {
                    posX -= 1;
                }
                break;
            case 's':
                if (posY > 6)
                {
                    break;
                }
                else
                {
                    posY += 1;
                }
                break;
            case 'd':
                if (posX > 6)
                {
                    break;
                }
                else
                {
                    posX += 1;
                }
                break;
            default:
                break;
            }
            move(field, posX, posY, zug);
            printBoxField(field);
        }
    }
    printf("\n");
}

void playBox()
{
    int i;
    int field[64];
    for (i = 0; i < 64; i++)
    {
        field[i] = 0;
    }
    field[0] = 1;
    int posX = 0;
    int posY = 0;
    printField(field);
    char zug = 'a';
    while (zug != 'x')
    {
        printf("Enter directional key {w,a,s,d} or exit key {x}: ");
        scanf(" %c", &zug);
        if (zug == 'w' || zug == 'a' || zug == 's' || zug == 'd')
        {
            switch (zug)
            {
            case 'w':
                if (posY < 1)
                {
                    break;
                }
                else
                {
                    posY -= 1;
                }
                break;
            case 'a':
                if (posX < 1)
                {
                    break;
                }
                else
                {
                    posX -= 1;
                }
                break;
            case 's':
                if (posY > 6)
                {
                    break;
                }
                else
                {
                    posY += 1;
                }
                break;
            case 'd':
                if (posX > 6)
                {
                    break;
                }
                else
                {
                    posX += 1;
                }
                break;
            default:
                break;
            }
            move(field, posX, posY, zug);
            printField(field);
        }
    }
    printf("\n");
}

void printField(int *field)
{
    int i;
    printf("\n_________________\n[");
    for (i = 0; i < 64; ++i)
    {
        printf("%d", field[i]);
        if ((i + 1) % 8 == 0 && i != 63)
        {
            printf("]\n[");
        }
        else if (i != 63)
        {
            printf(" ");
        }
        if (i == 63)
        {
            printf("]");
        }
    }
    printf("\n‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n");
}
void printBoxField(*field)
{
    int i;
    printf("\n_________________\n[");
    for (i = 0; i < 64; ++i)
    {
        if (field[i] == 0)
        {
            printf("□");
        }
        else
        {
            printf("■");
        }
        if ((i + 1) % 8 == 0 && i != 63)
        {
            printf("]\n[");
        }
        else if (i != 63)
        {
            printf(" ");
        }
        if (i == 63)
        {
            printf("]");
        }
    }
    printf("\n‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n");
}

void move(int *field, int posX, int posY, char zug)
{
    //updates the position of the 1 in the array using posX and posY
    int i;
    int pos = 8 * posY + posX;
    for (i = 0; i < 64; i++)
    {
        field[i] = 0;
    }
    field[pos] = 1;
}