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
        lpout("Todos os valores sao menores que 10!\n");
    }else{
        if(a==10){
            lpout("a eh igual a 10!\n");
        }else{
            if(a > 10){
                lpout("a eh maior que 10!\n");
            }
        }
        if(!(b!=10)){
            lpout("b eh igual a 10!\n");
        }else{
            if(!(b<10)){
            lpout("b eh maior que 10!\n");
            }
        }  
        if(c == 10){
            lpout("c eh igual a 10!\n");
        }else{
            if(c >10){
                lpout("c eh maior que 10!\n");
            }
        }
    }
end