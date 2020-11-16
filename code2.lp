begin
    real a;
    real b;
    lpout("Digite a e b: ");
    lpin(a);
    lpin(b);
    lpout("a/b = ",a/b,"\n");
    int inteiro;
    inteiro = a/b;
    lpout("Parte inteira de a/b = ",inteiro,"\n");
    lpout("Parte fracionaria de a/b = ",(a/b-inteiro));
end