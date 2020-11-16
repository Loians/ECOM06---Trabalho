begin
    char opcao;
    int n;
    opcao = 'n';
    while(opcao != 's'){
        lpout("\nDigite n: ");
        lpin(n);
        if(n<1){
            lpout("Entrada invalida\n");
        }else{
            int x1;
            int x2;
            int i;
            x1 = 1;
            x2 = 1;
            for(i=2;i<n;i++){
                x1 = x1 + x2;
                x2 = x1 - x2;
            }
            lpout("O ",n,"o termo de Fibonacci e: ",x1);
        }
        lpout("\nDigite s para sair ");
        lpin(opcao);
    }
end