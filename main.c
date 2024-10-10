#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <sys/wait.h>

#define x 20
#define y 20
#define LIFE 60

void init_matrix(char matrix[x][y])
{
	srand(time(NULL));
	
	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			int	randomvalue = rand() % 3;
			if (randomvalue == 0)
				matrix[j][i] = '@';
			else
				matrix[j][i] = ' ';
		}
	}
}

void print_matrix(char matrix[x][y])
{
	char *red = "\033[31m";
	char *reset = "\033[0m";

	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			if (matrix[j][i] == '@')
				printf("%s%c%s", red, matrix[j][i], reset);
			else
				printf("%c", matrix[j][i]);
		}
		printf("\n");
	}
}


int count_next(char matrix[x][y], int row, int col) {
	int count = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (i == 0 && j == 0) continue; // Ignorer la cellule elle-même
			int neighbor_row = (row + i + y) % y; // Bord torique pour les lignes
			int neighbor_col = (col + j + x) % x; // Bord torique pour les colonnes
			if (matrix[neighbor_row][neighbor_col] == '@')
				count++;
		}
	}
	return count;
}

void	next_generation(char current_matrix[x][y], char next_matrix[x][y])
{
	int next = 0;
	
	for (int j = 0; j < y; j++)
	{
		for (int i = 0; i < x; i++)
		{
			next = count_next(current_matrix, j, i); // compter le nombre de cell vivante autour le la cell actuelle
			if (current_matrix[j][i] == '@') // si la cell actuelle est vivante on check les regles pour voir si elle continue de vivre ou pas
			{
				if (next == 2 || next == 3)
					next_matrix[j][i] = '@';
				else
					next_matrix[j][i] = ' ';
			}
			else // sinon si c une case vide on regarde les conditions si c'est possible que une cell apparaissent
			{
				if (next == 3)
					next_matrix[j][i] = '@';
				else
					next_matrix[j][i] = ' ';
			}
		}
	}
}


int main(void)
{
		char	matrix[x][y];
		char	buffer_matrix[x][y];

		init_matrix(matrix);
		printf("-------------MATRIX INITIALIZATION-------------\n");
		print_matrix(matrix);
		for (int i = 0; i < LIFE; i++)
		{
			printf("-------------MATRIX GEN N%d-------------\n", i);
			next_generation(matrix, buffer_matrix);
			print_matrix(buffer_matrix);

			for (int j = 0; j < y; j++)
			{
				for (int k = 0; k < x; ++k)
					matrix[j][k] = buffer_matrix[j][k]; //on copie la nouvelle la matrice dans l'ancienne afin de passer a la nouvell gen
			}
		}
		return 0;
}
