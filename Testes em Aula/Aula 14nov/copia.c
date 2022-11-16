int main() {
    struct exemplo {
        char c;
        int i;
        float f;
        double d;
    };
    
    struct exemplo s1, s2;
    s1.c = 'a';           // '.' referencia o membro
    s1.i = 1;
    s1.f = 3.14;
    s1.d = 0.00093;
    s2 = s1;               //atribuicao
    printf("a variavel s2 contem %c %d %f %lf\n",s2.c,s2.i,s2.f,s2.d);
    s1.d = 0.01111; // essa atribuicao nao afeta s2.d
    printf("a variavel s2 contem %c %d %f %lf\n",s2.c,s2.i,s2.f,s2.d);
}
