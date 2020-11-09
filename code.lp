begin
    lpout("Hello world!\n");
    int a;
    a = 3 + 7;
    lpout("a = ",a,"\nEscreva a:");
    lpin(a);
    int b;
    b = a + 2;
    a = b % 3;
    lpout(a,' ');
    int c;
    c = ((a+3)+b)/5;
    lpout(c, ' ');
    if(c == 4){
        b = 3;
    }
    if((a > 7) && (!c) || (b>11)){
        if(b>3){
            a--;
        }
    }else{
        c++;
    }
    for(a=3;a<4;a++){
        b = b + 2;
        lpout(b,' ');
        for(c = 1; c>=0 ; c--){
            lpout(c*a, "\n");
        }
    }
    lpout("\n");
    while(c>-5){
        lpout(c);
        c = c - 2;
    }

end