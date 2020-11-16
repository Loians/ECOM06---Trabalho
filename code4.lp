begin
    int a;
    int b;
    int c;
    lpout("Escreva a b c: ");
    lpin(a);
    lpin(b);
    lpin(c);
    lpout("\n");
    if((a<10) && !(b>=10) && !(c > 10 || c==10)){
        lpout("Todos os valores são menores que 10!\n");
    }else{
        if(a==10){
            lpout("a é igual a 10!\n");
        }else{
            if(a > 10){
                lpout("a é maior que 10!\n");
            }
        }
        if(!(b!=10)){
            lpout("b é igual a 10!\n");
        }else{
            if(!(b<10)){
            lpout("b é maior que 10!\n");
            }
        }  
        if(c == 10){
            lpout("c é igual a 10!\n");
        }else{
            if(c >10){
                lpout("c é maior que 10!\n");
            }
        }
    }
end