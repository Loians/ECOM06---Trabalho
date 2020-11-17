Usando Windows:

Utilizou-se da ferramenta GIT SDK para fazer a compilação e execução dos arquivos, caso queira baixá-la o link é: https://github.com/git-for-windows/build-extra/releases/tag/git-sdk-1.0.8

Com o uso dessa ferramenta, basta dar o comando make dentro da pasta do projeto

Assim que a execução desse comando terminar é necessário, para a execução de um arquivo, utilizar o seguinte comando: ./lupe.exe arquivo.lp
Substitua o arquivo.lp pelo arquivo do seu código.

--------------------------------------------------

Usando Linux

Primeiro é necessário alterar a linha 478 do arquivo lupe.y e subtituir o que está nela por:
system("g++ lupe.cpp -o out && .\out").

Em seguida, basta dar o comando make dentro da pasta do projeto.

Assim que a execução desse comando terminar é necessário, para a execução de um arquivo, utilizar o seguinte comando: ./lupe.exe arquivo.lp
Substitua o arquivo.lp pelo arquivo do seu código.