# Projet Non Guidé

Ce projet utilise CMake pour la compilation, CTest pour les tests unitaires, Doxygen pour la génération de documentation, et GitHub Actions pour l'intégration continue (CI). Le push vers la branche `master` sera refusé si les tests unitaires échouent, et la documentation sera poussée dans le dépôt GitHub.

## Structure du projet

'```
'./
├── .github/
│   └── workflows/
│       └── ci.yml
├── include/
│   ├── factorial.h
│   ├── fibonacci.h
│   ├── palindrome.h
│   ├── prime.h
│   └── example_class.h
├── src/
│   ├── CMakeLists.txt
│   ├── factorial.cpp
│   ├── fibonacci.cpp
│   ├── palindrome.cpp
│   ├── prime.cpp
│   └── example_class.cpp
├── tests/
│   ├── CMakeLists.txt
│   ├── test_factorial.cpp
│   ├── test_fibonacci.cpp
│   ├── test_palindrome.cpp
│   ├── test_prime.cpp
│   └── test_example_class.cpp
├── docs/
│   ├── README.md
│   ├── how-it-works.md
│   └── mainpage.md
├── CMakeLists.txt
├── Doxyfile.in
└── main.cpp
'```

'## Configuration de base du projet

### 1. Création des fichiers source

1. Créez les fichiers d'en-tête et d'implémentation pour les fonctions suivantes :
   - **Factorial (`factorial.h` et `factorial.cpp`)** : Calculer la factorielle d'un nombre entier.
   - **Fibonacci (`fibonacci.h` et `fibonacci.cpp`)** : Calculer le n-ième terme de la suite de Fibonacci.
   - **Palindrome (`palindrome.h` et `palindrome.cpp`)** : Vérifier si une chaîne de caractères est un palindrome.
   - **Prime (`prime.h` et `prime.cpp`)** : Vérifier si un nombre entier est un nombre premier.
   - **Example Class (`example_class.h` et `example_class.cpp`)** : Contient un constructeur par défaut, une variable privée `val` de type int, un setter et un getter pour modifier la valeur de `val`.

2. Implémentez ces fonctions et assurez-vous que la documentation est générée sans utiliser l'option `EXTRACT_ALL` de Doxygen.

3. Configurez le fichier `src/CMakeLists.txt` pour créer une bibliothèque contenant toutes les fonctions du répertoire `src`.

### 2. Création des tests unitaires

1. Créez des tests unitaires pour chaque fonction et pour la classe `example_class`.
2. Ajoutez des assertions pour vérifier que les fonctions retournent les résultats attendus.
3. Configurez les tests dans `tests/CMakeLists.txt` pour utiliser CTest.

### 3. Création des fichiers de configuration CMake

1. Configurez le fichier `CMakeLists.txt` à la racine du projet pour compiler les fichiers sources et inclure les tests.
2. Configurez Doxygen dans le fichier `CMakeLists.txt` pour générer automatiquement la documentation à partir des fichiers source.

### 4. Configuration de GitHub Actions

1. Configurez un workflow GitHub Actions dans `.github/workflows/ci.yml`.
2. Le workflow doit :
   - Vérifier le code source.
   - Installer les dépendances nécessaires (CMake, Doxygen).
   - Configurer et compiler le projet avec CMake.
   - Exécuter les tests unitaires avec CTest.
   - Générer la documentation avec Doxygen, si les tests réussissent.
   - Pousser la documentation générée vers le dépôt GitHub, si les tests réussissent.

### 5. Création du README

1. Documentez le projet dans `README.md`.
2. Incluez des instructions pour la compilation du projet, l'exécution des tests et la génération de la documentation.
3. Expliquez comment le workflow GitHub Actions assure l'intégration continue et comment CMake facilite le processus de développement des projets complexes. Référez-vous au fichier `docs/how-it-works.md` pour plus de détails.

### 6. Configuration des Règles de Protection de la Branche

1. Configurez des règles de protection de branche pour `master` dans les paramètres du dépôt GitHub.
2. Assurez-vous que les modifications ne peuvent être fusionnées dans `master` à moins que tous les tests passent.

## Conclusion

En réalisant ces tâches, vous créerez un projet complet intégrant CMake, CTest, Doxygen et GitHub Actions. Vous pratiquerez l'utilisation de chacun de ces outils pour gérer un projet C++ de manière professionnelle, et vous vous assurerez que la branche `master` est protégée contre les pushs de code qui échouent les tests unitaires.

## Compilation du projet

Pour compiler le projet, exécutez les commandes suivantes :

'```sh
'mkdir build
cd build
cmake ..
make
'```

'## Exécution des tests

Pour exécuter les tests, utilisez la commande suivante :

'```sh
'ctest
'```

'## Génération de la documentation

Pour générer la documentation, exécutez les commandes suivantes :

'```sh
'mkdir build
cd build
cmake ..
make doxygen
'```

'La documentation sera générée dans le dossier `docs` à la racine du dépôt.

Pour plus de détails sur le fonctionnement du projet et l'utilisation des différents outils, consultez le fichier [how-it-works.md](./docs/how-it-works.md).
