#include <stdlib.h>

void mini(int t[], int size,int *mini)
{
    for(int e=0;e<size;e++)
    {
        if(t[e]<mini)
        {
            *mini=t[e];
        }
    }
}

void imini(int t[], int size,int *imini)
{
    for(int i=0;i<size;i++)
    {
        if(t[i]<t[*imini])
        {
            *imini=i;
        }
    }
}

void maxi(int t[], int size,int *maxi)
{
    for(int e=0;e<size;e++)
    {
        if(t[e]>maxi)
        {
            *maxi=t[e];
        }
    }
}


void imaxi(int t[], int size,int *imaxi)
{
    for(int i=0;i<size;i++)
    {
        if(t[i]<t[*imaxi])
        {
            *imaxi=i;
        }
    }
}

void somme(int t[], int size,int *somme)
{
    for (int e=0;e<size;e++)
    {
        *somme+=t[e];
    }
}

void moyenne(int t[], int size,int *somme, double *moy)
{
    for (int e=0;e<size;e++)
    {
        *somme+=t[e];
    }
    *moy = *somme/size;
}

void compte(int t[], int size, int *lowest, int *highest,int *compte)
{
    for(int i=*lowest;i<*highest;i++)
    {
        *compte=i;
    }
}

int est_trie(int t[],int size,int *tri)
{
    for(int e=0;e<size;e++)
    {
        if(t[e]<t[e+1])
        {
            
        }
    }
}




int main()
{
    
    int t[100];
    int size=10;
    for (int i=0;i<100;i++)
    {
        size=rand()%50;
        t[i]=size;
    }
    int somme=0;
    int mini=t[0];
    int maxi=t[0];
    int imini=0;
    int imaxi=0;
    double moy=0;
    int compte=0;
    int lowest=2;
    int highest=40;
    int tri=0;

}