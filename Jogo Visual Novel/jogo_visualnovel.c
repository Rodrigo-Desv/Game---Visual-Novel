#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Struct para dados do personagem.
struct personagem{
	char nome[15];
	int idade;
	float altura;
	char sexo[12];
};


main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	struct personagem personagem1;
	int respostas[10], i, senha[4]={18,31,2,9}, senha_jogador[4], temnovetor= 0;

	
	printf ("                                    Bem-vindo ao nosso jogo!!! \n                      "); 
	printf ("\n");
    printf ("Esse jogo tem como proposta recriar a atmosfera sombria do universo criado pelo escritor Philiph K.Dick, em:  \n");
    printf ("''Andróides também sonham com ovelhas elétricas?''\n");
    printf ("\n");
	printf ("                                           Divirta-se!\n"                         );
    printf ("\n");
    system ("\n Pause");
	system ("cls");
	printf ("\n");
	
	//Struct para armazenar dados do personagem informados pelo jogador.
	
	printf ("Vamos iniciar a criação do seu personagem:\n");
	printf ("\n");
	system ("\n Pause");
	system ("cls");
	printf ("Informe o nome do seu personagem: ");
	fgets (personagem1.nome,15,stdin);
	fflush (stdin);
	printf ("Informe a idade do seu personagem: ");
	scanf ("%d", &personagem1.idade);
	fflush (stdin);
	printf ("Informe a altura do seu personagem: ");
	scanf ("%f", &personagem1.altura);
	fflush (stdin);
	printf ("Informe o sexo do seu personagem: ");
	fgets (personagem1.sexo, 12, stdin);
	fflush (stdin);
	printf ("\n");
	system ("\n Pause");
	system ("cls");
	
	//início de jogo
	
	printf("                                             ato 1                       ");
	printf("\n");
	printf("\n");
	printf("Você acorda e se ver sentado no banco do passageiro dentro de um carro voador de luxo usado pelos poderosos das colônias. Você olha para o motorista , ele é grande com metade do rosto metálico.");
	printf("\n");
	printf("Você olha para o crachá dele e ver o seu nome. \n");
	printf("\n");
	printf("O homem dirigindo percebe que você está acordado, ele olha em sua direção, sua face demostra désdem. \n");
	printf("\n");
	printf("Antes mesmo de você falar algo o homem o interrompe. \n");
	printf("\n");
	system("pause");
	system("cls");
	printf("\n");
	printf(" Motorista: Não gosto da sua laia, apenas não se intrometa nós resolveremos isso. \n");
	printf("\n");
	printf("Escolha uma ação:\n");
	printf("\n");
	printf("1.Responder com agressividade.\n");
	printf("\n");
	printf("2.Responder de forma pacífica.\n");
	printf("\n");
	printf("3.Não responder.\n");
	printf("\n");
	printf("Digite a opção:");
	printf("\n");
	scanf("%d",&respostas[0]);
	printf("\n");
	
	//Esolha que não interfere na rota do jogo, por isso usamos o switch.
	
	switch(respostas[0]){
		case 1:
			printf("É meu trabalho me intrometer nas coisas, então cale a boca e dirija cachorro da Tyrel.\n");
			printf("\n");
			
		break;
		
		case 2:
			printf("Eu tentarei não me intromenter.\n");
			printf("\n");
			
		break;
		
		case 3:
			printf("O homem olha para você com um ar de superioridade.\n");
			printf("\n");
			printf("Motorista:  vejo que entendeu seu lugar.\n");
			printf("\n");
		break;
	}
	printf("\n");
	printf("O homem dirige calado todo o resto do caminho. \n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Você ver o prédio que se aproxima mais e mais, uma grande estrutura em forma de pirâmide, com várias elevações em sua estrutura.\n");
	printf("\n");
	printf("Ao chegar ao prédio uma mulher está parada em frente a porta, ela se aproxima de você.\n");
	printf("\n");
	printf("Mulher: Me acompanhe.\n ");
	printf("\n");
	system("pause");
	system("cls");
	printf("A mulher o guia em silêncio.\n ");
	printf("\n");
	printf("Você chega a uma sala grande, com uma parede de vidro e uma longa mesa.\n");
	printf("\n");
	printf("Você ver duas pessoas na sala, cada um em uma parte da mesa. Mesmo com sua chegada nenhum deles olha para você.\n");
	printf("\n");
	system("pause");
	system("cls") ;
	printf("\n");
	printf("Um homem magro de terno entra na sala.\n");
	printf("\n");
	printf("Ele diz:  Bem-vindo blade runers vocês estão aqui porque são os melhores caçadores, a missão de vocês é encontrar e eliminar o replicante Mike, que se rebelou e levou um dos nossos materiais genéticos. A recompensa será satisfatória, mas a falha será inaceitável.Espero que aceitem o trabalho.\n");
	printf("\n");
	printf("Vocês aceitam ou não?\n");
	printf("\n");
	printf("Escolha uma ação:\n");
	printf("\n");
	printf("1.Aceitar a missão.\n");
	printf("\n");
	printf("\n");
	printf("2.Recusar a missão.\n");
	printf("\n");
	printf("Digite a escolha:\n");
	printf("\n");
	scanf("%d",&respostas[1]);
	system("cls");
	
	//A segunda escolha altera a rota, por isso usamos a condicional if após esse switch.
	
	switch(respostas[1]){
		case 1:
		printf("O homem de terno olha pra você e sorrir.\n");
		printf("\n");
		printf("Isso foi esperado, vocês podem investigar a fábrica que o material foi roubado.\n ");
		printf("\n");
		printf("Você olha com um pouco de surpresa e se questiona:");
		printf("Por que uma das maiores empresas do mundo deixaria alguém investigar uma de suas fábricas?\n");
		printf("\n");
		printf("Homen de terno:  Essa situação é especial e delicada e também todos os produtos foram tranportados para outra fábrica, mais uma coisa, quando acharem o material genético liguem para esse número.\n");
		printf("\n");
		printf("O homen passa o número para você.\n");
		printf("\n");
		printf("Homen de terno:  agora vão e não me desaponte %s\n", personagem1.nome);
		break;
		
		
		case 2:
		printf("O homem olha com raiva para você.");
		printf("\n");
		printf("Parece que essa geração não foi tão bem feita afinal, creio que terei que substituir.\n");
		printf("\n");
		printf("O homem de terno bate palmas e um homem idêntico a você entra no recinto, ele puxa a arma do coldre e atira em você.\n");
		printf("\n");
		printf("O homen idêntico a você se aproxima do  homem de terno.");
		printf("\n");
		printf("O homem de terno sorrir.");
		printf("Parece que essa geração é bem obediente,parabéns você agora sera chamado de %s, não me desaponte.\n",personagem1.nome);
		printf("\n");
		printf("Você morre sangrando no chão incrédulo que aquilo ocorreu.\n");
		printf("\n");
		printf("Fim trágico e confuso não concorda ''jogador''?\n");
		printf ("\n");
		system ("pause");
		break;
		
	}
	if(respostas[1]== 1){
	system("pause");
	system("cls");
	printf("                                             ato 2                       ");
	printf ("\n");
	printf ("\n");
	printf ("Você chega ao local e inicia a investigação, pergunta sobre o ocorrido para os funcionários, então investiga as câmeras de segurança.\n ");
	printf ("\n");
	printf ("Você assiste ao vídeo do grupo invadindo o local, você percebe que minutos antes da invasão um guarda derrubou um cartão, e os invasores usaram esse cartão para entrar no local.\n");
	printf ("\n");
	printf ("Você vai à gerência do local e pede as informações sobre o funcionário.\n");
	printf ("\n");
	printf ("Depois de receber todos os dados você vai até a casa do suspeito.\n");
	printf ("\n");
	system ("pause");
	system ("cls");
	printf ("Você chega a casa do suspeito, você ouve barulhos de dentro do local.\n");
	printf ("\n");
	printf ("Você se aproxima da porta e tenta abrir, mas para sua surpresa ela estava aberta. Você entra silenciosamente no local.\n");
	printf ("\n");
	printf ("Após alguns passos você vê o segurança desacordado no chão.\n");
	printf ("\n");
	system ("pause");
	system ("cls");
	printf ("Você ver o replicante Mike, vestido com um grande casaco que vai até as panturrilhas revirando a casa loucamente à procura de algo importante. Você por descuido faz barulho ao tentar avançar.\n");
	printf ("\n");
	printf ("Mike puxa uma arma e olha para você.");
	printf ("\n");
	printf ("Você também aponta a sua arma para ele, por alguns segundos vocês ficam se olhando e é nesse segundo que você toma uma decição.\n");
	printf ("\n");
	printf ("Escolha uma ação:\n");
	printf ("\n");
	printf ("1. Você tenta conversar com ele. \n");
	printf ("\n");
	printf ("2. Você atira. \n");
	printf ("\n");
	printf ("3. Você corre. \n");
	printf ("\n");
	printf("Digite a escolha:\n");
	scanf("%d",&respostas[2]);
	system ("cls");
	if(respostas[2]==1){
		printf ("%s - Não tem que ser assim Mike, podemos resolver isso pacificamente.\n", personagem1.nome);
		printf ("\n");
		printf ("Mike o olha e sorrir, então coloca a arma no chão, você se aproxima dele, quando você se aproxima dele achando que ganhou controle da situação.\n");
		printf ("\n");
		printf ("Mike retira uma faca do casaco e o esfaqueia, mesmo após cair Mike continua o esfaqueando.\n");
		printf ("\n");
		printf ("Depois de 27 facadas você morre.\n");
		printf ("\n");
		printf ("Parabéns pelo fim seu ingênuo! \n");
		printf ("\n");
		system("pause");
		system("cls");
		return 0;
	}
	 if(respostas[2] == 2){
		printf ("Você atira certeiramente na mão dele o fazendo derrubar a arma. Ele parte pra cima de você o empurrando contra a parede do quarto fazendo-o derrubar a sua arma. Mike retira uma faca do casaco e se aproxima.\n");
		printf ("\n");
		printf ("Você pega uma cadeira que está próxima e bate no Mike com ela que derruba a faca.\n");
		printf ("\n");
		printf ("Você pega a faca e ataca o Mike. Isso te dar tempo de correr e pegar sua arma, você vira e atira diversas vezes. \n");
		printf("\n");
		printf ("Mike cai no chão.\n");
		printf ("\n");
		system ("pause");
		system ("cls");
		printf ("%s - Vocês  malditos replicantes parecem, falam e morrem como a gente, mas você sempre sera só uma maldita invenção defeituosa.\n", personagem1.nome);
		printf ("\n");
		printf ("Mike: Você tem uma lógica bastante deturpada. Você não se diferencia em nada desses ""malditos replicantes"" que tanto fala.\n");
		printf ("\n");
		printf ("Mike cospe sangue.\n");
		printf ("\n");
		printf ("Mike: Se existir um inferno para replicantes o verei lá. \n");
		printf ("\n");
		printf ("Você atira na cabeça de Mike.\n");
		printf ("\n");
		system ("pause");
		system ("cls");	
	}
	if(respostas[2] == 3){
	    printf ("Você entra em pânico e corre para entrada da casa, Mike atira em suas costas.\n");
	    printf ("\n");
	    printf ("Mike: nunca vi um ""blade runner"" tão covarde quanto você, adeus ratinho de laboratório.\n");
	    printf ("\n");
	    printf ("FIM de jogo para você seu covarde!!!");
	    printf ("\n");
	    system("pause");
	    system("cls");
	    return 0;
	}
	    
		//ato 2 
	    
	    printf("O barulho chamou a atenção indesejada de pessoas curiosas. \n");
	    printf ("\n");
	    printf("Faça uma escolha:\n");
	    printf("\n");
	    printf ("1. Você pega o segurança, vasculha o corpo de mike e então foge.\n");
	    printf ("\n");
	    printf ("2. Você foge.\n");
	    printf ("\n");
	    printf ("3. Você pega o corpo do mike.\n");
	    printf("\n");
	    printf("Digite a sua escolha: \n");
	    scanf ("%d", &respostas[3]);
	    printf ("\n");
	    system ("cls");
	    if(respostas[3] == 1){
	    	printf("Você pega o segurança, vasculha o corpo de Mike então foge.\n");
	        printf("\n");
	        printf("Você acha no corpo de Mike um cartão com uma localização, então foge com o segurança desacordado.\n");
	        printf("\n");
	        printf("Você chega em sua casa, amarra o guarda na cadeira, em seguida o estapeia até ele acodar.\n");
	        printf("\n");
	        printf("%s:  Comece a falar agora.\n", personagem1.nome); 
	        printf("\n");
	        printf("Segurança: você não arrancará nada de mim.\n");
	        printf("\n");
	        printf("%s: Bem creio que terei que usar meu carisma para te convencer.\n", personagem1.nome);
	        printf("\n");
	        printf("Você começa a torturar ele por 30 minutos.\n");
	        printf("\n");
	        printf("Segurança: pare eu vou falar.\n");
	        printf("\n");
	        system ("pause");
	        system ("cls");
	        printf("%s: ainda não tenho confiança nas suas palavras.\n", personagem1.nome);
	        printf("\n");
	        printf("Você o tortura por 2 horas sem parar, em meio a gritos e choros ele gritava coisas sobre um leilão e o assalto. Após toda a tortura o segurança falou tudo sobre o assalto e o leilão.\n");
	        printf("\n");
	        printf("Segurança: a única forma de entrar é com o bracelete que tem a senha do dia, sem o bracelete não tem como saber a senha, o bracelete está de baixo do piso da casa a frente da minha, perto do guarda roupa.\n");
	        printf("\n");
	        printf("Você volta ao local e percebe que queimaram a casa do segurança. Você entra na casa da frente da dele, e procura o guarda roupa, então você vê que tem um piso solto, retira o piso e encontra o bracelete.\n");
	        printf("\n");
	        printf("Você pega o bracelete e vê que tem uma numeração escrita em sua pequena tela ''18 31 2 9''.\n");
	        printf ("\n");
	        printf (" Memorize a senha.\n");
	        printf("\n");
	        system("pause");
	        system("cls");
	    }
		 if(respostas[3] == 2){
	    	printf("Você foge do local em segurança, e vai para casa cuidar de seus ferimentos.\n");
	    	printf("\n");
	    	printf("Volta para o local onde achou Mike e descobre que os corpos sumiram e a casa foi queimada.\n");
	    	printf("\n");
	    	printf("Mesmo após dias à procura de pistas você não acha nada.\n");
	    	printf("\n");
	    	printf("Você vai até a Tyrell corporation, lá você se encontra com o homem de terno. \n");
	    	printf("\n");
	    	printf("Você conta sobre o acontecimento e da perda da pista.\n");
	    	printf("\n");
	    	printf("Homem de terno: Você foi um fracasso total e uma perda de recursos. \n");
	    	printf("\n");
	    	printf("O homem sai do local. Logo após, oito seguranças entram na sala e atiram em você.\n");
	    	printf("\n");
	    	printf("Fim, você foi um péssimo detetive.\n");
	    	printf("\n");
	    	system("pause");
	    	system("cls");
	    	return 0;
	    }if(respostas[3] == 3){
	    	printf("Você leva o corpo de mike até um local abondonado.\n");
	    	printf("\n");
	    	printf("Você vasculha o corpo dele e descobre um convite com uma localização escrita.\n");
	    	printf("\n");
	    	printf("Você vai até o local e descobre que se tratava de um bar e tenta entrar com o cartão de Mike,mas você é parado por dois seguranças.\n");
	    	printf("\n");
	    	system ("pause");
	        system ("cls");
	        printf ("Após pegar o bracelete você vai até o local falado no cartão.\n");
	        printf ("\n");
	        printf ("Lá você encontra dois homens na frente de um bar, você se aproxima deles. \n");
	        printf ("\n");
	        printf ("Eles colocam a mão dentro do casaco e olham para você.\n");
	        printf ("\n");
	        printf("Eles perguntam - 'qual a senha?'\n");
	        
	        //usamos o for para armazenar a sequência no vetor senha_jogador[4].
	        
	        for(i=0; i<4; i++){
		        printf ("Digite o %do digito: ", i+1);
	   	        scanf ("%d", &senha_jogador[i]);
	   	    }
	   	    
	   	    //estrutura para caso a senha for informada errada pelo jogador aconteça game over e senão ele continua a avançar no jogo.
	   	    
	        printf("\n");
	        for (i=0; i<4; i++){
			    if(senha_jogador[i] == senha[i]){
			    	temnovetor = 1;
			   }
		    }if(temnovetor == 1){
		    	system("cls");
				printf("jogador nessa rota não seria possível você saber a senha, você trapaceou, não gostamos de trapaceiros por isso.\n");
	    		printf("\n");
	    		printf("GAME OVER TRAPACEIRO.\n");
	    		printf("\n");
	    		system("pause");
	    		system("cls");
	    		return 0;
	        }else{
			    printf("O segurança olha pra você.\n");
			    printf("\n");
			    printf("\n");
			    printf("Segurança: nos acompanhe senhor.\n");
			    printf("\n");
			    printf("Ele te leva até um quarto vazio, o empurra no chão e atira em você.\n");
			    printf("\n");
			    printf("\n");
			    printf("FIM!!!.\n");
			    printf("\n");
			    system("pause");
			    return 0;
		    }
    }
    
    // Ato 3
    system("cls");
    printf("                                              ato 3  \n                     ");
    printf("\n");
    printf ("Após pegar o bacelete você vai até o local falado no cartão.");
	printf ("\n");
	printf ("Lá você encontra dois homens na frente de um bar, você se aproxima deles. \n");
	printf ("\n");
	printf ("eles colocam a mão dentro do casaco e olham para você.\n");
	printf ("\n");
	printf("eles perguntam: 'qual a senha?'\n");
	printf ("\n");
    
	for (i=0; i<4; i++){
		        printf ("Digite o %do digito: ", i+1);
	   	        scanf ("%d", &senha_jogador[i]);
   }

	printf("\n");
	
    for (i=0; i<4; i++){
	    if(senha_jogador[i] == senha[i]){
			temnovetor = 1;
		}
		
		}
	
	if (temnovetor == 1){
			printf("Você entra no bar. \n");
	    	printf("\n");
	    	printf ("Você vai até o barmen e digita o código novamente. Ele olha estranhamente para você.\n");
	    	printf ("\n");
	    	system ("pause");
	    	system ("cls");
    }else{
	   	printf("o segurança olha pra você.");
		printf("\n");
		printf("segurança: nos acompanhe senhor.");
		printf("\n");
		printf("ele te leva até um quarto vazio, o empurra no chão e atira em você.");
		printf("\n");
		printf("FIM.\n");
		printf("\n");
		system("pause");
		system("cls");
		return 0;
	
	}
		
	if(temnovetor == 1){
			printf ("Barman:  Esse codigo é do Brad, então me deixa um pouco curioso por que ele deixaria alguém usar seu bracelete? \n");
	printf ("\n");
	printf ("Escolha uma ação:\n");
	printf ("\n");
	printf ("1. Intimidar. \n");
	printf ("\n");
	printf ("2. Convencer.\n");
	printf ("\n");
	printf ("3. Agressividade. \n");
	printf ("\n");
	printf ("Digite a opção desejada: ");
	printf("\n");
	scanf("%d",&respostas[4]);
	system ("cls");
	if (respostas[4] == 1){
		printf("Se você continuar fazendo perguntas  meu chefe vai te colocar na mesma cova que o Brad.\n");
		printf("Barman: Ei! eu não quero problemas com a Canaan. \n");
		printf("\n");
		system("pause");
	}
	if(respostas[4] == 2){
		printf("Brad foi atacado por um replicante que ajudou no roubo, então meu trabalho agora é pegar o que foi exigido.\n");
		printf("\n");
		printf("Barman: Entendo.\n");
		printf("\n");
		system("pause");
	}
	if(respostas[4] == 3){
		printf("Pare de fazer perguntas e faça seu trabalho. \n");
		printf("\n");
		printf("o barman olha para o segurança e acena, o segurança vem até você.\n");
		printf("\n");
		printf("segurança: Me acompanhe senhor.\n");
		printf("\n");
		printf("o segurança o leva até um quarto vazio e atira em você.\n");
		printf("Fim!!! \n");
		printf("Você poderia ser mais educado.\n");
		printf("\n");
		system("pause");
		return 0;
	}
}
	system("cls");
	printf("%s: onde está a mercadoria?\n", personagem1.nome);
	printf("\n");
	printf("Barman: Nos fundos, apenas vá e confirma pra seu chefe que ela ainda está aqui\n");
	printf("\n");
	printf("Você vai até o local e ver uma grande maleta. Ao abrir você ver um feto dentro de um compartimento. Isso te assusta.\n");
	printf("\n");
	printf("%s: O que está acontecendo?\n", personagem1.nome);
	printf("\n");
	system("pause");
	system("cls");
	printf("Você fecha a maleta novamente e tentar sair com ela, os alarmes do local começam a tocar.");
	printf("\n");
	printf("Os seguranças correm na sua direção com armas nas mãos.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Segurança: Coloque a amostra no chão e saia com as mãos para cima.\n");
	printf("\n");
	printf("1. Atirar.\n");
	printf("\n");
	printf("2.Se entregar.\n");
	printf("\n");
	printf("3.Jogar a maleta.\n");
	printf("\n");
	printf ("Digite a opção desejada: ");
	scanf("%d",&respostas[5]);
	system("cls");
	if(respostas[5] == 1){
		printf("Você se esconde atrás da parede e atira em um dos guardas assim o acertando na cabeça");
		printf("\n");
		printf("você continua atirando e acerta o outro guarda");
		printf("\n");
		printf("\n");
		system("pause");
		system("cls");
	}
	if(respostas[5] == 2){
		printf("Você coloca a maleta no chão e sai com as mão pro alto, um dos seguranças mira em você e atira \n");
		printf("\n");
		printf("Você cai no chão sangrando, o segurança se aproxima e atira em suas costas \n");
		printf("\n");
		printf("Você morre!\n");
		printf("\n");
		printf("Fim!!! \n");
		printf("Você achou mesmo que isso daria certo?\n");
		printf("\n");
		system("pause");
		return 0;
	}
	if(respostas[5] == 3){
		printf("Você joga a maleta em direção dos guardas, eles tentam pegar a maleta. Durante esses pequenos segundos de distração você corre na direção dos guardas e atira em um deles acertando no pescoço.\n");
		printf("\n");
		printf("O guarda que pegou a maleta olha incrédulo para você. Você atira novamente e acerta no peito do homem\n");
		printf("\n");
		system("pause");
		system ("cls");
	}
	
	printf("você corre em direção da saida e ouve mais guardas chegando, depois de muita troca de tiro você consegue fugir do bar, mas isso teve seu custo.\n");
	printf("\n");
	printf("Você recebeu um tiro na perna e no ombro.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Você pega seu telefone e liga para o número que o homem de terno disponibilizou.\n");
	printf("\n");
	printf("Após um tempo vários carros voadores chegam. \n");
	printf("\n");
	printf("Você é guiado até um desses carros.\n");
	printf("\n");
	printf("Você olha pela janela e ver um verdadeiro espurgo, a equipe da Tyrell estava matando todos que pareciam suspeitos. \n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Você olha para o homem dirigindo \n");
	printf("\n");
	printf(" %s :Vocês estão matando pessoas inocentes também!\n",personagem1.nome);
	printf("\n");
	printf("Motorista: Foram as ordens!\n");
	printf("\n");
	system("pause");
	system("cls");
	
	printf("ao chegar na empresa você se ver novamente na mesma sala que recebeu o contrato");
	printf("\n");
	printf("O homem de terno entra na sala.");
	printf("\n");
	printf("Você olha para os lados e não ver os outros dois caçadores\n");
	printf("\n");
	printf("%s  onde esta os outros dois?\n", personagem1.nome);
	printf("\n");
	printf("O homem sorrir \n");
	printf("\n");
	printf("Homem de terno: Foram mortos em serviço, agora pare de fazer perguntas e me dê a maleta.\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("você abre a maleta e retira o vidro com um feto dentro.");
	printf("\n");
	printf("você olha intrigado\n");
	printf("\n");
	printf("%s : o que diabos é isso?\n", personagem1.nome);
	printf("\n");
	printf("Homem de terno: é apenas um experimento assim como você, Você está confuso?\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("%s -Como eu?\n", personagem1.nome);
	printf("\n");
	printf("Homem de terno: você é o protótipo militar da segunda geração e isso na maleta é a primeira forma de vida que nasceu da junção de um humano e um replicante \n");
	printf("\n");
	printf("%s: eu nasci, cresci, tenho todas as minhas memórias, como eu posso ter sido criado?\n", personagem1.nome);
	printf("\n");
	printf("Homem de terno- Você fala das memórias como por exemplo, no dia que você correu pela casa com seu amigo de infância e ele te empurrou da escada e você disse para seus pais que você caiu sozinho?\n");
	printf("\n");
	printf("%s-como você.....\n",personagem1.nome);
	printf("\n");
	printf("Antes mesmo de falar, o homem o interrompe\n");
	printf("\n");
	system("pause");
	system("cls");
	printf("Homem de terno: Ou talvez da sua primeira vez com sua namorada qual o nome dela mesmo? Fernanda? Sim era esse o nome que eu dei.");
	printf("\n");
	printf("Surpreso? Saiba que você é a criatura e eu sou o criador, não é nada surpreendente que eu saiba de tudo sobre você já que eu mesmo criei tudo em você.\n");
	printf("\n");
	printf("1. Você puxar a arma do coldre. \n");
	printf("\n");
	printf("2. Você destrói o vidro. \n");
	printf("\n");
	printf("Faça sua escolha criatura: ");
	scanf("%d", &respostas[6]);
	system("cls");
	if (respostas[6] == 1){
		printf("Você aponta a arma, ele apenas levanta o dedo e coloca na cabeça. Sua mão que está segurando a arma faz o mesmo movimento.\n");
		printf("\n");
		printf("Homem de terno: Adeus pequeno fracasso.\n");
		printf("\n");
		printf("Ele movimenta a mão, você segue o movimento dele e atira na própria cabeça.\n");
		printf("\n");
		printf("Fim!!! \n");
		printf("\n");
		system("pause");
		system("cls");
		printf("Adeus fracasso");
	}
	if (respostas[6] == 2){
		printf("você levanta o vidro com as duas mãos.\n");
		printf("\n");
		printf("O homem de terno olha seriamente para você - mais um fracasso, venha me dê isso e depois fique parado.\n");
		printf("\n");
		printf("Ivoluntarimante, você vai até ele e entrega o vidro, após entregar seu corpo fica parado, você tenta se mexer mas não tem sucesso. O homem bate palmas e uma pessoa idêntica a você entra na sala, o homem de terno se vira.\n");
		printf("\n");
		system("pause");
		system("cls");
		printf("Homem de terno: mate-o não preciso de fracassos.\n");
		printf("\n");
		printf("O homem vem até você e atira em você.\n");
		printf("\n");
		printf("Você morreu incrédulo da verdade, você é algo que odiou, um replicante.\n");
		printf("\n");
		printf("fim de jogo querido replicante!!!\n");
		printf("\n");
		system("pause");
	}
	system("cls");
	printf("Será que a criatura tem liberdade ou é tudo guiado pelo criador?");
	printf("\n");
	printf ("\n");
	printf("Obrigado por jogar!!!\n");
	printf("\n");
	system("pause");
	return 0;
	}
	

}
	