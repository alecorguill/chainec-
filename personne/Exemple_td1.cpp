#include<cstdio>


class Mere {
public:
  void message(){
    printf("je suis la classe Mere\n");
  }

  ~Mere(){
    printf("Destructeur mère\n");
  }
};


class Fille : public Mere {
public:
  void message(){
    printf("je suis la classe Fille\n");
  }

  ~Fille(){
    printf("Destructeur fille\n");
  }
};




int main(){
  Fille *f = new Fille();
  Fille *f1 = new Fille();
  delete f1;
  Mere& m = *f;

  m.message();
  printf("Mere: %d\n",sizeof(Mere));
  printf("Fille: %d\n",sizeof(Fille));
  
  delete &m;
} 




/*
int main(){
Mere *mere=NULL;

mere->message();
}
*/
