#include "tableau_double.h"

tableau_double nouveau_tableau(int m) {
	tableau_double tbl = {NULL, 0, 0};
	if (m>0)
	{
		redim_tableau(&tbl, m);
	}
	return tbl;
}

void redim_tableau(tableau_double * tbl, int m) {
	int* new_t=(int*) malloc(m*sizeof(int));
	if (tbl->t!=NULL)
	{
		for(int i=0; i<tbl->n;i++)
			new_t[i]= tbl->t[i];
		free(tbl->t);
	}
	tbl->t=new_t;
	tbl->m=m;
}

void inserer_tableau(tableau_double * tbl, int pos, double el) {
	if (tbl->n==tbl->m) redim(tbl,1+2*tbl->m);
	for (int i=pos;i<tbl->n;i++)
	{
		int z=tbl->t[i];
		tbl->t[i]=el;
		el=z;
	}
	tbl->t[tbl->n]=el;
	(tbl->n)++;
}

double supprimer_tableau(tableau_double * tbl, int pos) {
	for (int i=pos-1;i<(tbl->n);i++)
		tbl[i]=tbl[i+1];
	return 0;
}

void liberer_tableau(tableau_double* tbl) {
	free(tbl->t);
	tbl->t = NULL;
	tbl->n = tbl->m = 0;
}