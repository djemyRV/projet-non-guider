cmake_minimum_required(VERSION 3.10)
project(projet_non_guider)

# Include directories
add_subdirectory(src)
add_subdirectory(tests)

# Enable testing
enable_testing()

# Doxygen configuration
find_package(Doxygen)
if(DOXYGEN_FOUND)
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)    
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)    
    add_custom_target(doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM
    )
endif()

# Function to generate the README.md file
function(generate_readme)
    file(WRITE ${CMAKE_BINARY_DIR}/README.md
        "# Projet Non Guidé\n\n"
        "Ce projet utilise CMake pour la compilation, CTest pour les tests unitaires, Doxygen pour la génération de documentation, et GitHub Actions pour l'intégration continue (CI). Le push vers la branche \`master\` sera refusé si les tests unitaires échouent, et la documentation sera poussée dans le dépôt GitHub.\n\n"
        "## Structure du projet\n\n"
        '```\n'
        "./\n"
        "├── .github/\n"
        "│   └── workflows/\n"
        "│       └── ci.yml\n"
        "├── include/\n"
        "│   ├── factorial.h\n"
        "│   ├── fibonacci.h\n"
        "│   ├── palindrome.h\n"
        "│   ├── prime.h\n"
        "│   └── example_class.h\n"
        "├── src/\n"
        "│   ├── CMakeLists.txt\n"
        "│   ├── factorial.cpp\n"
        "│   ├── fibonacci.cpp\n"
        "│   ├── palindrome.cpp\n"
        "│   ├── prime.cpp\n"
        "│   └── example_class.cpp\n"
        "├── tests/\n"
        "│   ├── CMakeLists.txt\n"
        "│   ├── test_factorial.cpp\n"
        "│   ├── test_fibonacci.cpp\n"
        "│   ├── test_palindrome.cpp\n"
        "│   ├── test_prime.cpp\n"
        "│   └── test_example_class.cpp\n"
        "├── docs/\n"
        "│   ├── README.md\n"
        "│   ├── how-it-works.md\n"
        "│   └── mainpage.md\n"
        "├── CMakeLists.txt\n"
        "├── Doxyfile.in\n"
        "└── main.cpp\n"
        '```\n\n'
        "## Configuration de base du projet\n\n"
        "### 1. Création des fichiers source\n\n"
        "1. Créez les fichiers d'en-tête et d'implémentation pour les fonctions suivantes :\n"
        "   - **Factorial (\`factorial.h\` et \`factorial.cpp\`)** : Calculer la factorielle d'un nombre entier.\n"
        "   - **Fibonacci (\`fibonacci.h\` et \`fibonacci.cpp\`)** : Calculer le n-ième terme de la suite de Fibonacci.\n"
        "   - **Palindrome (\`palindrome.h\` et \`palindrome.cpp\`)** : Vérifier si une chaîne de caractères est un palindrome.\n"
        "   - **Prime (\`prime.h\` et \`prime.cpp\`)** : Vérifier si un nombre entier est un nombre premier.\n"
        "   - **Example Class (\`example_class.h\` et \`example_class.cpp\`)** : Contient un constructeur par défaut, une variable privée \`val\` de type int, un setter et un getter pour modifier la valeur de \`val\`.\n\n"
        "2. Implémentez ces fonctions et assurez-vous que la documentation est générée sans utiliser l'option \`EXTRACT_ALL\` de Doxygen.\n\n"
        "3. Configurez le fichier \`src/CMakeLists.txt\` pour créer une bibliothèque contenant toutes les fonctions du répertoire \`src\`.\n\n"
        "### 2. Création des tests unitaires\n\n"
        "1. Créez des tests unitaires pour chaque fonction et pour la classe \`example_class\`.\n"
        "2. Ajoutez des assertions pour vérifier que les fonctions retournent les résultats attendus.\n"
        "3. Configurez les tests dans \`tests/CMakeLists.txt\` pour utiliser CTest.\n\n"
        "### 3. Création des fichiers de configuration CMake\n\n"
        "1. Configurez le fichier \`CMakeLists.txt\` à la racine du projet pour compiler les fichiers sources et inclure les tests.\n"
        "2. Configurez Doxygen dans le fichier \`CMakeLists.txt\` pour générer automatiquement la documentation à partir des fichiers source.\n\n"
        "### 4. Configuration de GitHub Actions\n\n"
        "1. Configurez un workflow GitHub Actions dans \`.github/workflows/ci.yml\`.\n"
        "2. Le workflow doit :\n"
        "   - Vérifier le code source.\n"
        "   - Installer les dépendances nécessaires (CMake, Doxygen).\n"
        "   - Configurer et compiler le projet avec CMake.\n"
        "   - Exécuter les tests unitaires avec CTest.\n"
        "   - Générer la documentation avec Doxygen, si les tests réussissent.\n"
        "   - Pousser la documentation générée vers le dépôt GitHub, si les tests réussissent.\n\n"
        "### 5. Création du README\n\n"
        "1. Documentez le projet dans \`README.md\`.\n"
        "2. Incluez des instructions pour la compilation du projet, l'exécution des tests et la génération de la documentation.\n"
        "3. Expliquez comment le workflow GitHub Actions assure l'intégration continue et comment CMake facilite le processus de développement des projets complexes. Référez-vous au fichier \`docs/how-it-works.md\` pour plus de détails.\n\n"
        "### 6. Configuration des Règles de Protection de la Branche\n\n"
        "1. Configurez des règles de protection de branche pour \`master\` dans les paramètres du dépôt GitHub.\n"
        "2. Assurez-vous que les modifications ne peuvent être fusionnées dans \`master\` à moins que tous les tests passent.\n\n"
        "## Conclusion\n\n"
        "En réalisant ces tâches, vous créerez un projet complet intégrant CMake, CTest, Doxygen et GitHub Actions. Vous pratiquerez l'utilisation de chacun de ces outils pour gérer un projet C++ de manière professionnelle, et vous vous assurerez que la branche \`master\` est protégée contre les pushs de code qui échouent les tests unitaires.\n\n"
        "## Compilation du projet\n\n"
        "Pour compiler le projet, exécutez les commandes suivantes :\n\n"
        '```sh\n'
        "mkdir build\n"
        "cd build\n"
        "cmake ..\n"
        "make\n"
        '```\n\n'
        "## Exécution des tests\n\n"
        "Pour exécuter les tests, utilisez la commande suivante :\n\n"
        '```sh\n'
        "ctest\n"
        '```\n\n'
        "## Génération de la documentation\n\n"
        "Pour générer la documentation, exécutez les commandes suivantes :\n\n"
        '```sh\n'
        "mkdir build\n"
        "cd build\n"
        "cmake ..\n"
        "make doxygen\n"
        '```\n\n'
        "La documentation sera générée dans le dossier \`docs\` à la racine du dépôt.\n\n"
        "Pour plus de détails sur le fonctionnement du projet et l'utilisation des différents outils, consultez le fichier [how-it-works.md](./docs/how-it-works.md).\n"
    )
endfunction()

# Appel de la fonction pour générer le README.md
generate_readme()
