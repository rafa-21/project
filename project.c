#include <stdio.h>
#include <stdlib.h>

void telaProjeto(void);
char menuPrincipal(void);
void cadUsuario(void);
void cadTarefa(void);
void editUsuario(void);
void agendaUsuario(void);
void verComp(void);
void funcaoFim(void);


int main(void){
    char opc;
    telaProjeto();
    system("cls || clear");
    do {
        opc = menuPrincipal();
        printf("Escolha uma opção: ");
        scanf("%c", &opc);
        system("cls || clear");
        switch (opc){
            case 1:
                cadUsuario();
                break;
            case 2:
                editUsuario();
                break;
            case 3:
                agendaUsuario();
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
    printf("===================================================================\n\n");
    printf("                       MENU PRINCIPAL\n\n");
    printf("                   1 - Cadastrar Usuário\n");
    printf("                   2 - Editar Dados de Usuário\n");
    printf("                   3 - Consultar Agenda de Usuário\n");
    printf("                   0 - Encerrar Programa\n\n");
    printf("===================================================================\n\n");
}

void cadUsuario(void){
    printf("Tela de cadastro de usuário.\n\n");
    funcaoFim();
}

void editUsuario(void){
    printf("Tela de edição de usuário.\n\n");
    funcaoFim();
}

void agendaUsuario(void){
    printf("Tela de consulta de compromissos.\n\n");
    funcaoFim();
}

void verComp(void){
    printf("Tela de comprimissos.\n\n");
    funcaoFim();
}

void funcaoFim(void){
    char opc;
    printf("1 - Voltar para o menu principal\n");
    printf("0 - Encerrar programa\n\n");
    printf("Que ação deseja realizar agora?");
    scanf("%c", &opc);
    switch (opc){
        case 1:
            main();
        case 0: 
            system("cls || clear");
            printf("Programa Encerrado.");
    }


}
