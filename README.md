# CP3

### Sistema Simulador de Caixa Eletrônico 

### Integrantes

| RM    | Nomes    |
|-------|----------|
|574191 | Kauanne  |
|568973 | Ligia    |
|571416 | Nayhely  |

### Descricao e Funcionalidades Implementadas do Sistema

- O sistema elaborado consiste no desenvolvimento de um sistema realista de ATM em C, utilizado funcionalidades aprendidas no decorrer das aulas passadas.

1. O loop principal:
- Para manter o sistema ativo foi utilizada o "do-while" para garantir que o as opções do menu apareçam para o usuário para que posso obtar por outras opções proporcionadas.
- Também foi adicionado uma condição de parada para que o sistema continue a rodar até que o número digitado em opção seja diferente de 0.
- Para evitar uma tela de interação confusa e poluída, também foi adicionado o sistem ("cls") para a limpeza posterior a cada interação.

2. Menu visual:
- Na construção do menu foram especificados cada opção e foi decorado para uma vizualização mais clara e funcional

3. Captura e Validação de opções:
- Foi utilizado o "scanf" para a leitura da escolha digitada pelo usuário.
- Adicionou-se também, junto com o while a limpeza simples do buffer com o "getchar() != "\n") para evitar comportamentos inesperados
- Já para a validação, foi utilizado o "if" para evidênciar quando uma opção inválida for selecionada, sendo ela uma opção menor que zero ou maior que 3.

4. Switch-Case do ATM:
- Com o switch, foi direcionado o caminho para a operação correta das escolhas no menu
- Cada case direcionando para as funcionalidades especifícas de um ATM: Saque, Depósito e consulta de saldo.
- Para tratar com opções inválidas eventualmente digitadas pelo usuário, fez-se uso do default e sua funcionalidade.

5. Função de consulta de Saldo:
  - Esta função consiste na exibição do valor atual do saldo do usuário
  - Utilizou-se a variável "saldo" para realizar uma passagem pelo valor, que recebe uma cópia do saldo pela leitura
  - Para exibir o saldo em si, foi utilizado o "%2.f"

6. Função de depósito no ATM:
   - Foi criada uma nova variável "valor" para representar o valor digitado pelo usuário.
   - Para a verificação do valor válido, adicionou-se o condicional "if"
   - Ao verificar um valor acima de zero, realizou-se a atualização do saldo do usuário com "saldo += valor;", informou-se que a operação foi bem-sucedida e retornou-se o valor atualizado.

7. Funçãp de saque no ATM:
- Utilizou-se a variável "valor" para representar o valor digitado que indique o saque a ser realizado
- Para validar se o valor a ser sacado é valido e menor que o saldo existente do usuário, comparou-se o saldo atual com o saque ("valor <= saldo && valor > 0) e realizou-se uma subtração ("saldo -= valor")
- Após confirmar que é um valor valido, são emitidos mensagens de erro em caso de saque não aprovado e um mensagem de operação bem-sucedida em caso de saque aprovado.

  8. Conclusão:
  - Para o funcionamento correto do sistema ATM desenvolvido foram utilizadas diversas funcionalidades aprendidas em aulas anteriores, tais como: switch case, condicionais (if), scanf, operações matemáticas, comparação de valores e variáveis, entre outros.

### Instruções de Compilação e Execução

1. Abra o terminal na pasta onde o arquivo main.c está salvo.

2. Compile o programa com o comando:
gcc main.c -o caixa_eletronico

3. Execute o programa com:
.\caixa_eletronico

###  Histórico de Commits do Grupo Durante o Desenvolvimento

commit 8ecaeba8f32fdaa163a3039cf02075d8835dabdf (HEAD -> main)
Author: Kauanne Oliveira <paulakauanne2411@gmail.com>
Date:   Thu May 14 10:45:45 2026 -0300

    adiciona instrucoes de compilacao e execucao no readme

commit cf304bd0a5e7209ac6749f4ebf6c7a6f56bc12a2
Merge: bf1cbca 977b1ba
Author: Kauanne Oliveira <paulakauanne2411@gmail.com>
Date:   Thu May 14 10:28:35 2026 -0300

    remove readme

commit bf1cbca4c7512d81940e66872207c1a6294f26ba
Author: Kauanne Oliveira <paulakauanne2411@gmail.com>
Date:   Thu May 14 10:23:58 2026 -0300

    adiciona titulo

commit 1dee0b2bc4aa561fb76997b484ebc3825ba8480f
Author: Kauanne Oliveira <paulakauanne2411@gmail.com>
Date:   Thu May 14 10:23:03 2026 -0300

    adiciona funcoes

commit 977b1ba0e4bbe14a2be937101c84eb05a1b1534e (origin/main, origin/HEAD)
Author: NayhelyEstela <nayhely.estela.c.c@gmail.com>
Date:   Thu May 14 10:21:09 2026 -0300

    Atualizar readme

commit bf4f3c410738091fbcd24f29087267250544b086
Author: Kauanne Oliveira <paulakauanne2411@gmail.com>
Date:   Thu May 14 09:25:11 2026 -0300

    adiciona funcoes de saque, saldo e deposito

commit 05b1878f4119730f3043b6531710b4fd39667725
Author: NayhelyEstela <nayhely.estela.c.c@gmail.com>
Date:   Thu May 14 09:21:50 2026 -0300

    Adição do switch

commit 85c57b8fd8a45a81b5ff51907d7b0e614159ff90
Author: NayhelyEstela <nayhely.estela.c.c@gmail.com>
Date:   Thu May 14 09:20:34 2026 -0300

    Update main.c

commit 89626c47fde6adf7547346462c9834fb68fadc1a
Author: ligiafiap <ligiafiap@gmail.com>
Date:   Thu May 14 09:19:09 2026 -0300

    Mudanças relacionadas ao Menu

commit df5f746ddeda119e85e40adf322c049733f08ce5
Author: Laboratório FIAP <labsfiap@fiap.com.br>
Date:   Thu May 14 08:55:04 2026 -0300

    adiciona arquivo base

commit f4a5e8161a3cdc23caa561b4cf6cdcc03fd4120c
Author: Kauanne Oliveira <paulakauanne2411@gmail.com>
Date:   Thu May 14 08:36:55 2026 -0300

    Initial commit