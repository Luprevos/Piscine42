#include <unistd.h>

void    tab(char *tab)
{
    int    i;
    int    j;
    int    k;
    int    c;
    int    l;

    l = 0;
    while (tab[l]) // Calcul de la longueur de la chaîne
        l++;
    l = l +1;
    if ((l % 4) != 0) // Vérification si la longueur est compatible avec un carré
    {
        write(1, "ERROR\n", 6);
        return;
    }
    c = (l / 8) +2; // Calcul de la taille du carré
    char sky[c][c]; // Déclaration du tableau 2D

    // Initialisation du tableau avec des espaces vides
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < c; j++)
        {
            sky[i][j] = ' ';
        }
    }

    k = 0;
	i = 1;
	while (k < (l / 4)) // debut de renseignement des conditions colup
	{
		sky[0][i] = tab[k] - '0';
		k += 2;
		i++;
	}
	j = 1;
	while (k < (l / 2)) // debut de renseignement des conditions coldown
	{
		sky[c - 1][j] = tab[k] - '0';
		k += 2;
		++j;
	}
	i = 1;
	while (k < (l * 3 / 4)) // debut de renseignement des conditions rowleft
	{
		sky[i][0] = tab[k] - '0';
		k += 2;
		++i;
	}
	j = 1;
	while (k <= l) // debut de renseignement des conditions rowright
	{
		sky[j][c - 1] = tab[k] - '0';
		k += 2;
		++j;
	}

//debut des contraintes

	k = c - 2;
	i = 0;
	while (i < (c -1))
	{
		j = 0;
		while (j < (c-1)) // verifi toute les cases du tableau
		{
			// verifie les donnees impossibles
			if (!((sky[i][j] >= 1 && sky[i][j] <= k) || (sky[i][j] == ' ') || (sky[i][j] == '\0')))
			{
				write(1, "ERROR\n", 6);
				return;
			}
			j++;
		}
		i++;
    }
	i = 1;
	while (i <= (c - 2)) // verifi les cond verticale
	{
		if (((sky[0][i] + sky[k][i]) - 96) > k)
			{
			write(1, "ERROR\n", 6);
			return;
			}
		i++;
	}
	j = 1;
	while (j <= (c - 2)) // verifi les cond horiz
	{
		if (((sky[j][0] + sky[j][k]) - 96) > k)
			{
				write(1, "ERROR\n", 6);
				return;
			}
		j++;
	}
	i = 1;
	while (i <= k) // si un nbr max d´imm en haut vu alors on ecrit la ligne
	{
		if (sky[0][i] == (k))
		{
			for (l = 1; l <= k; l++)
            	sky[l][i] = l +'0' ;
		}
		i++;
	}
	i =1;
	while (i <= k) // idem bas
	{
		if (sky[k][i] == (k))
		{
			j = 1;
			for (l = k - 1; l >= 1; l--)
            	{
					sky[l][i] = j +'0';
					j++;
				}
		}
		i++;
	}
	i = 1;
	for (i <= k) // idem gauche
	{
		if (sky[i][0] == (k))
		{
			for (l = 1; l <= k; l++)
            	sky[i][l] = l +'0' ;
		}
		i++;
	}
	i = 1;
	while (i <= k) // idem droite
	{
		if (sky[i][k] == (k))
		{
			j = 1;
			for (l = k - 1; l >= 1; l--)
            	{
					sky[i][l] = j +'0';
					j++;
				}
		}
		i++;
	}

// ecriture du tableau
	i = 1;
	while (i < (c - 1))
	{
		j = 1;
		while (j < (c - 1))
		{
			if (sky[i][j] == ' ')
                write(1, ".", 1);
            else
				write(1, &sky[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
    }
  return;
}

int    main(void)
{
    char    *str = "1 4 2 2 4 1 2 2 1 2 3 2 2 1 2 3";
    tab(str);
    return (0);
}