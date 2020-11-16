begin
    lpout("Hello world!\n");
    int a;
    lpout("Escreva a: ");
    lpin(a);
    if(a % 2 == 1){
        lpout(a," e impar\n");
    }
    else{
        lpout(a," e par\n");
    }
    int i;
    for(i=a;i>0;i--){
        lpout(i,' ');
    }
end