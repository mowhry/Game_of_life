# Game_of_life

## Sujet  🇫🇷

<p>
Le Jeu de la vie est l'exemple le plus connu d'automate cellulaire. Ce jeu, décrit en 1970 par le mathématicien John Conway
de l'université de Cambridge, vise à modéliser d'une façon simple l'évolution d'organismes vivants.<br>

Le jeu de la vie évolue normalement sur un damier infini. Chaque case est occupée par une cellule qui peut être vivante ou morte.
A chaque génération, chaque cellule peut naître, mourir, ou rester dans son état. Les règles qui permettent de passer d'une
génération à l'autre sont précises et ont été choisies avec soin pour que l'évolution des organismes soit intéressante et imprévisible.<br>

En premier lieu, notons que sur un damier infini, chaque case a exactement 8 voisins. Pour créer la génération suivante à partir
de la génération courante, J. Conway a fixé les règles suivantes :

* Une cellule ayant exactement 2 ou 3 voisins vivants survit la génération suivante.
* Une cellule ayant au moins 4 cellules voisines vivantes meurt d'étouffement à la génération suivante.
* Une cellule ayant au plus une cellule voisine vivante meurt d'isolement à la génération suivante.
* Sur une case vide ayant exactement 3 voisins vivants, une cellule naîtra à la génération suivante.

Afin d'implémenter ce jeu, on considère le damier infini comme une matrice torique. Le damier sera représenté par une matrice
dont les bords droite et gauche sont reliés entre eux, ainsi que les bords supérieur et inférieur.<br>
Vous pouvez utiliser la fonction rand() pour l'initialisation du damier.
</p>

## Subject 🇬🇧
<p> The Game of Life is the most well-known example of a cellular automaton. This game, described in 1970 by mathematician John Conway from the University of Cambridge, aims to model the evolution of living organisms in a simple way.<br>

The Game of Life typically evolves on an infinite grid. Each cell on the grid can be either alive or dead. With each generation, every cell can be born, die, or remain in its current state. The rules that determine how to transition from one generation to the next are specific and have been carefully chosen to ensure that the evolution of the organisms is both interesting and unpredictable.<br>

First of all, note that on an infinite grid, each cell has exactly 8 neighbors. To create the next generation from the current generation, J. Conway established the following rules:

* A cell with exactly 2 or 3 living neighbors survives into the next generation.
* A cell with at least 4 living neighbors dies of overcrowding in the next generation.
* A cell with at most one living neighbor dies of isolation in the next generation.
* On an empty space with exactly 3 living neighbors, a cell will be born in the next generation.

To implement this game, the infinite grid is considered as a toroidal matrix. The grid will be represented by a matrix where the right and left edges are connected to each other, as well as the top and bottom edges.<br> You can use the rand() function for initializing the grid.
</p>

## 🛠️ Requirements Linux

```bash
sudo apt update && sudo apt upgrade -y
sudo apt install build-essential -y
gcc --version
make --version
```

## 🛠️ Compilation 

```bash
git clone https://github.com/mowhry/Game_of_life.git
cd Game_of_life/
make
```
