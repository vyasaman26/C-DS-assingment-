#include <stdio.h>
#include <string.h> 

struct State {
    char name[50];           
    int population;         
    int literacy_rate;       
    int per_capita_income;   
};

int main() {
    int numStates;
    printf("Enter the number of states: ");
    scanf("%d", &numStates);  
    getchar(); 

    struct State states[numStates];  
    int i;
    
    printf("Enter the records for %d states:\n", numStates);
    for (i = 0; i < numStates; i++) {
        printf("\nEnter details for state %d:\n", i + 1);
        printf("Name of the state: ");
        fgets(states[i].name, sizeof(states[i].name), stdin);  
        states[i].name[strcspn(states[i].name, "\n")] = '\0';   

        printf("Population: ");
        scanf("%d", &states[i].population);  
        printf("Literacy rate: ");
        scanf("%d", &states[i].literacy_rate);  
        printf("Per capita income: ");
        scanf("%d", &states[i].per_capita_income);  

        getchar();
    }

   
    int max_literacy_index = 0;
    for (i = 1; i < numStates; i++) {
        if (states[i].literacy_rate > states[max_literacy_index].literacy_rate) {
            max_literacy_index = i;
        }
    }

    int max_income_index = 0;
    for (i = 1; i < numStates; i++) {
        if (states[i].per_capita_income > states[max_income_index].per_capita_income) {
            max_income_index = i;
        }
    }

    printf("\nState with the highest literacy rate:\n");
    printf("State: %s\n", states[max_literacy_index].name);
    printf("Literacy rate: %d%%\n", states[max_literacy_index].literacy_rate);

    printf("\nState with the highest per capita income:\n");
    printf("State: %s\n", states[max_income_index].name);
    printf("Per capita income: %d\n", states[max_income_index].per_capita_income);

    return 0;
}
