# My_ls

[![forthebadge](http://forthebadge.com/images/badges/built-with-love.svg)](https://github.com/Gaetandrt)  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://fr.wikipedia.org/wiki/C_(langage))  [![linkedin-](https://user-images.githubusercontent.com/91087072/175767199-5ecadc72-20a2-42dc-a24f-3a601bba5ddb.svg)](https://www.linkedin.com/in/gaetan-darrort/)

## Qu'est que ls ?

ls est une commande [POSIX](https://fr.wikipedia.org/wiki/POSIX) (abréviation de list en anglais), qui permet de lister le contenu d'un répertoire.

### Compétences travaillées

- Découverte de fonction tel que readdir, stats...
- Découverte de la gestion de flags
- Découverte du fonctionnement d'une commande [POSIX](https://fr.wikipedia.org/wiki/POSIX)

### Installation

Pour lancer la commande ls, il vous suffit de compiler et de lancer le binaire comme ceci :

[![ls_command]https://user-images.githubusercontent.com/91087072/175772481-e808e3e6-7448-46e6-a4f4-a2e706f4630d.png)](https://user-images.githubusercontent.com/91087072/175772481-e808e3e6-7448-46e6-a4f4-a2e706f4630d.png)

L'execution du binaire écrira sur la sortie standard le contenu du répertoire courant.

## Syntaxe

ls [ options ] [ fichier | rép ]

## Flags

|Option|Description|
|--|--|
|ls -a|répertorie tous les fichiers, y compris les fichiers cachés commençant par '.'|
|ls -l|liste au format long - afficher les autorisations|
|ls -la|liste au format long, y compris les fichiers cachés|
|ls -R|répertorier récursivement l'arborescence des répertoires|
|ls -t|trier par heure et date|
|ls -ls|liste au format long avec taille de fichier|
|ls -s|lister la taille du fichier|
|ls -i|liste le numéro d'index inode du fichier|
|ls -r|liste dans l'ordre inverse|

## Fabriqué avec

* [Visual Studio Code](https://code.visualstudio.com/) - Environnement de développement
* [C](https://fr.wikipedia.org/wiki/C_(langage)) - Langage de programmation