# Sistema ATM em C

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
