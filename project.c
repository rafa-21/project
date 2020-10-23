#include <stdio.h>
#include <stdlib.h>

void telaProjeto(void);
char menuPrincipal(void);
char login(void);
void funLogin(void);
void cadUsuario(void);
void cadTarefa(void);
void editUsuario(void);
void removeUsuario(void);
void agendaUsuario(void);


int main(void){
    char opc;
    telaProjeto();
    system("cls || clear");
    do {
        opc = menuPrincipal();
        system( "cls || clear");
        switch (opc){
            case 1:
                login();
                break;
            case 2:
                cadUsuario();
                break;
        }     
    } while (opc != '0'); 
    system("cls || clear");
    printf("Programa encerrado.");

	return 0;
}

void telaProjeto(void){
    char press;
    printf("\n");
    printf("===================================================================\n\n");
    printf("           Universidade Federal do Rio Grande do Norte         \n");
    printf("               Centro de Ensino Superior do Seridó              \n");
    printf("             Departamento de Computação e Tecnologia               \n");
    printf("                  Disciplina 1106 - Programação                    \n");
    printf("      Projeto SIG-Task - Uma Agenda de Tarefas e Compromissos         \n");
    printf("              Developed by Rafael Garcia - @rafa-21                \n\n");
    printf("===================================================================\n\n");
    printf("                        DESCRIÇÃO DO PROJETO                  \n\n");
    printf("===================================================================\n\n");
    printf("As diversas atribuições que atualmente as pessoas possuem no seu dia a dia exigem, muitas vezes, o registro dos seus compromissos, seja através de agendas analógicas(papel) ou digitais(software e aplicativos). Uma agenda de tarefas é um programa de anotações de tarefas e compromissos do quais o usuário deseja ser lembrado. O presente projeto tem como objetivo desenvolver um programa de computador que realize o agendamento de tarefas, de forma eficiente, fornecendo lembretes aos usuários sobre compromissos agendados.\n\n");
    printf("===================================================================\n\n");
    printf("Pressione qualquer tecla para continuar.");
    scanf("%c", &press);
}

char menuPrincipal(void){
    char opc;
    printf("===================================================================\n\n");
    printf("                       MENU PRINCIPAL\n\n");
    printf("                   1 - Login\n");
    printf("                   2 - Cadastrar Usuário\n");
    printf("                   0 - Encerrar Programa\n\n");
    printf("Escolha uma opção: ");
    scanf("%c", &opc);
    printf("===================================================================\n\n");
    getchar();
    return opc;

}

char login(void){
    char opc;
    printf("1 - Agendar novo compromisso\n");
    printf("2 - Consultar agendamentos\n");
    printf("3 - Editar dados de usuário\n");
    printf("4 - Remover usuário\n");
    printf("0 - Retornar ao menu anterior\n\n");
    printf("Escolha uma opção: ");
    scanf("%c", &opc);
    getchar();
    return opc; 

}

void funLogin(void){
    char opcao;
    do{
        opcao = login();
        switch (opcao){
            case 1:
                cadTarefa();
                break;
            case 2:
                agendaUsuario();
                break;
            case 3:
                editUsuario();
                break;
            case 4: 
                removeUsuario();
                break;
            


        }
    } while (opcao != '0');
}

void cadUsuario(void){
    printf("Tela de cadastro de usuário.\n\n");
}

void editUsuario(void){
    printf("Tela de edição de usuário.\n\n");
}

void removeUsuario(void){
    printf("Tela de remoção de usuário.\n\n");
}

void agendaUsuario(void){
    printf("Tela de consulta de compromissos.\n\n");
}

void cadTarefa(void){
    printf("Tela de cadastro de tarefas.\n\n");
}



