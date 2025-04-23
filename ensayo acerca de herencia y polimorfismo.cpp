#include <bits/stdc++.h>

using namespace std;

    class pokemon{
        public: 
        //funciones para poder agarntizar el funcionamiento de un pokemon que herede estas carcteristicas
        pokemon(int basehp, int basedamage){
            hp = basehp;
            damage = basedamage;
        }
        void getdamage(int value){
            hp -= value;
            cout << "your pokemon have :" << hp;
        }
        float spell(){
            damagespell = damage * 1.3;
            return damagespell;
        }
        // se deja las variables protegidas para que no pueden ser cambiadas por mas nadie
        // y no se dejan en privadas para que se puedan heredar
        protected:
        float damage, hp, damagespell;
    }; 
    // la clase electric hereda las caracteristicas de la clase pokemon y ae le hacen un par de cambios
    class electric : public pokemon{
        public:
        // se toma la base de vida y de daño de la funcion pokemon y se se agrega mas vida 
        electric(int basehp, int basedamage) : pokemon(basehp, basedamage){
            hp = basehp + 5;
            damage = basedamage;
        }
    }; 
    class fire : public pokemon{
        public:
        // se toma la base de vida y de daño de la funcion pokemon y se se agrega mas daño
        fire(int basehp, int basedamage) : pokemon(basehp, basedamage){
            hp = basehp;
            damage = basedamage + 4;
        }
    };

int main (){
    // se usa un puntero para ir camniando de funcion en funcion sin tener que estar nombrando varias a la vez
    pokemon* currentpokemon;
    // se define la vida y el daño de pokemon
    electric pikachu(20, 8); 
    fire charmander(3, 3);

    currentpokemon = &pikachu;
    //para poder usar funciones en punteros se de usar una flecha asi "->" en vez de un punto
    currentpokemon->getdamage(charmander.spell());
    cout << endl;
    currentpokemon = &charmander;
    currentpokemon->getdamage(pikachu.spell());
}