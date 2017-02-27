#pragma once

#include "person.h"
struct LinkedList
{
    Person *person;
    LinkedList *next;
};
// =========================== Unique Checkers =======================
bool isUniqueName(char[], LinkedList*);
bool isUniquePhoneNumber(char[], LinkedList*);

// =========================== Readers ==========================
char* readName(LinkedList*);
char* readPhoneNumber(LinkedList*);

// ======================== Linked List Operations ========================
void insertPersonAlphabetically(Person*, LinkedList*, LinkedList*);
void deletePerson(char[], LinkedList*, LinkedList*);

// ======================== File Storage ========================
void loadPersonsFromFile(LinkedList*, LinkedList*);
void savePersonsToFile(LinkedList*);

// =========================== Search ==========================
void searchPersonByName(char[], LinkedList*);
void searchPersonByPhoneNumber(char[], LinkedList *);

// =========================== Printer ==========================
void printPersons(LinkedList*, LinkedList*);
