# Héritage en C++

L'héritage est un concept fondamental en programmation orientée objet (POO) qui permet de créer de nouvelles classes à partir de classes existantes. En C++, cela se fait en dérivant une classe enfant (ou dérivée) d'une classe parent (ou de base). L'héritage favorise la réutilisation du code et permet de modéliser des relations hiérarchiques entre les classes.

## Types d'Héritage

En C++, il existe trois types principaux d'héritage :

1. **Héritage public** : Les membres publics de la classe de base restent publics dans la classe dérivée, tandis que les membres protégés restent protégés. C'est le type d'héritage le plus couramment utilisé.

2. **Héritage protégé** : Les membres publics et protégés de la classe de base deviennent protégés dans la classe dérivée.

3. **Héritage privé** : Tous les membres publics et protégés de la classe de base deviennent privés dans la classe dérivée.

### Exemple d'Héritage Public

L'exemple suivant montre comment une classe `Animal` peut être utilisée comme classe de base pour une classe dérivée `Dog` :

```cpp
#include <iostream>
#include <string>

// Classe de base
class Animal {
protected:
    std::string type;

public:
    Animal(const std::string& type) : type(type) {}

    void makeSound() const {
        std::cout << "Animal sound!" << std::endl;
    }

    void displayType() const {
        std::cout << "Type: " << type << std::endl;
    }
};

// Classe dérivée
class Dog : public Animal {
public:
    Dog() : Animal("Dog") {}

    // Surcharge de la méthode makeSound
    void makeSound() const {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.displayType();  // Affiche: Type: Dog
    myDog.makeSound();    // Affiche: Woof!
    return 0;
}
