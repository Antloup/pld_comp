# pld_comp
Projet de compilateur du groupe H4314

## Commande d'exécution
`./pld_comp <Fichier.cpto> <options>`

### Options
- `--token`     : Affiche les tokens de l'arbre
- `--struct`    : Affiche la structure de données
- `--ir`        : Affiche l'IR

## Avancement du projet
- Structure de données  : OK
- IR                    : OK
- Compilation           : OK

## Implémenté
- Points 5.1 à 5.9 du sujet
- Génération complète de l'IR (y compris pour les points non implémentés)
- Tests du back-end pour notre projet

## Non implémenté
- Tableaux
- Variables globales
- Passage d'arguments aux fonctions
- Boucles for

## Spécificités
- Utilise un fichier d'entrée d'extension `.cpto` et génère un `.s` à la racine du programme
- Fonction 'Getchar' implémentée
- Utilisation de `int` tolérée pour déclarer un `int64_t`
- Les fonctions avec un type de retour `void` doivent se terminer par l'instruction `return;`

## Développeurs
- Nathan CASALS
- Jean DEBARD
- Bastien GUIRAUDOU
- Quentin JODER
- Anthony LOUP
- Renaud MEURISSE
- Lucas TOULIER-ANCIAN
