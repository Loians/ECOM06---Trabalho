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
            a = a+2;
        }
    }else{
        c = 2;
    }
    for(a;0;a<10;1){
            b = b + 2;
            lpout(b);
    }
    while(c>0){
        lpout(c);
        c = c - 2;
    }

end