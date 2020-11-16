begin
    int a;
    int b;
    int c;
    lpout("Escreva a b c: ");
    lpin(a);
    lpin(b);
    lpin(c);
    if((a<10) && !(b>=10) && !(c > 10 || c==10)){
        lpout("Todos os valores são menor que 10!\n");
    }else{
        if(a>=10){
            lpout("a é maior ou igual a 10!\n");
        }
        if(!(b<10)){
            lpout("b é maior ou igual a 10!\n");
        }
        if(c>10 || c == 10){
            lpout("c é maior ou igual a 10!\n");
        }
    }



end