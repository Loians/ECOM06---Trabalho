begin
    lpout("Hello world!\n");
    int a;
    lpout("Escreva a: ");
    lpin(a);
    int b;
    b = a + 2;
    a = b % 3;
    lpout("A = ", a, "\n");
    lpout("B = ", b, "\n");
    int c;
    c = ((a+3)+b)/5;
    lpout("C = ", c, "\n");
    if(c == 4){
        b = 3;
    }
    if((a > 7) && (!c) || (b>11)){
        if(b>3){
            a--;
        }
    }
    else{
        c++;
    }
    lpout("\nA = ", a, "\nB = ", b, "\nC = ", c, "\n");
    for(a=3;a<4;a++){
        b = b + 2;
        lpout("B = ", b, "\n");
        for(c = 1; c>=0 ; c--){
            lpout("C*A = ", c*a, "\n");
        }
    }
    lpout("\n");
    while(c>-5){
        lpout("C = ", c, "\n");
        c = c - 2;
    }

end