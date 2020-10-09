#include <stdio.h>

void telaProjeto(void);
void menuPrincipal(void);
void cadTarefa(void);
void verComp(void);


int main(void){
    int opc;
    telaProjeto();
    menuPrincipal();
    printf("Escolha uma opção: ");
    scanf("%d", &opc);
    switch (opc){
        case 1:
            cadTarefa();
            break;
        case 2:
            verComp();
            break;
        default:
            printf("Escolha uma alternativa válida. ");
            
    }

	return 0;
}

void telaProjeto(void){
void menuProjeto(void);

int main(void){
    menuProjeto();
	return 0;
}

void menuProjeto(void){
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
}

void menuPrincipal(void){
    printf("===================================================================\n\n");
    printf("                       MENU PRINCIPAL\n\n");
    printf("                 1 - Agendar Compromissos\n");
    printf("                   2 - Consultar Agenda\n\n");
    printf("===================================================================\n\n");
}

void cadTarefa(void){
    printf("Tela de cadastro.");
}

void verComp(void){
    printf("Tela de comprimissos.");
}
