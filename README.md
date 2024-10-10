# Game_of_life

## Sujet

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

