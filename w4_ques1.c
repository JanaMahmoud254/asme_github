
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>

struct Person{
    char name[25];
    char phone_number[12];
    char email[25];
};

// Function to add an element to an array of structs
void add(struct Person new_person, struct Person people[], int *size){
    people[*size] = new_person;
    *size += 1;
}

// Function to search for name in array of structs
void search(struct Person people[], int *size, char name[]){
    bool found = false;
    for(int i = 0; i < *size; i++){
        if(!strcmp(people[i].name, name)){
            found = true;
            printf("Found %s successfully!\n", name);
            break;
        }
    }
    if(found == false){ printf("%s doesn't exist in contacts!\n", name); }
}

// Function to display elements in array of structs
void display(struct Person people[], int *size){
    for (int i = 0; i < *size; i++) {
        printf("Name: %-8s Phone Number: %-15s Email: %-15s\n", people[i].name,
               people[i].phone_number, people[i].email);
    }
}

int main(){

    struct Person people[] = { 
        {"Ram", "01014444765", "ram@gmail.com"}, 
        {"Rohit", "01013333765", "rohit@gmail.com"} 
    };
    int size = sizeof(people)/ sizeof(people[0]);

    struct Person new_person = {"Sia", "01018888907", "sia@gmail.com"};
    add(new_person, people, &size);

    display(people, &size);

    char name1[25] = "Sia";
    char name2[25] = "Sally";
    search(people, &size, name1);
    search(people, &size, name2);


    return 0;
}


