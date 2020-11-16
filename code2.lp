begin
    real a;
    real b;
    lpout("Digite a e b: ");
    lpin(a);
    lpin(b);
    real q;
    q = a/b;
    lpout("a/b = ",q,"\n");
    int inteiro;
    inteiro = a/b;
    lpout("Parte inteira de a/b = ",inteiro,"\n");
    lpout("Parte fracionaria de a/b = ",(q-inteiro));

end