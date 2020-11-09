begin
    int a;
    a = 3 + 7;
    lpin(a);
    int b;
    b = a + 2;
    a = b % 3;
    lpout(a);
    int c;
    c = ((a+3)+b)/5;
    lpout(c);
    if(c == 4){
        b = 3;
    }
    if(a > 7){
        if(b>3){
            a--;
        }
    }else{
        c++;
    }
    for(a=3;a<10;a++){
        b = b + 2;
        lpout(b);
        for(c = 5; c>=0 ; c--){
            lpout(c*a);
        }
    }
    while(c>0){
        lpout(c);
        c = c - 2;
    }

end