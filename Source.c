#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
	struct node* prev;
}Node;

int isElement(Node* head, int data);
Node* getNode(int data, Node* next, Node* prev);
Node* insertSorted(Node* head, int info);
void sortList(Node* head);
Node* formList();
void printList(Node* head);
Node* freeList(Node* head);
void deleteNode(Node** head, int key);
Node* insertEnd(Node* head, int data);
Node* mergeSorted(Node* head1, Node* head2);
int length(Node* head);
Node* intersection(Node* head1, Node* head2);
Node* razlika(Node* head1, Node* head2);

int main()
{
	Node* head1 = NULL, * head2 = NULL, * head3 = NULL, * head4 = NULL, * head5 = NULL;
	int choice1, choice2, element, skup1, skup2;
	while (1) {
		printf("\n---------------------------\n");
		printf("Dobrodosli u korisnicki meni za rad sa skupovima.\n");
		printf("\n---------------------------\n");
		printf("1. Unos skupa\n");
		printf("2. Ispis skupa\n");
		printf("3. Brisanje skupa\n");
		printf("4. Dodavanje elementa skupu\n");
		printf("5. Brisanje elementa iz skupa\n");
		printf("6. Operacije nad skupovima\n");
		printf("7. Izlazak iz programa\n");
		printf("Izaberite jednu od gore navedenih opcija: ");
		if (!scanf("%d", &choice1)) exit(1);
		printf("\n---------------------------\n");
		switch (choice1) {
		case 1:
			printf("Izabrali ste unos skupa\n");
			if (!head1) {
				printf("Unesite prvi skup\n");
				head1 = formList();
				break;
			}
			else if (!head2) {
				printf("Unesite drugi skup\n");
				head2 = formList();
				break;
			}
			else if (!head3) {
				printf("Unesite treci skup\n");
				head3 = formList();
				break;
			}
			else if (!head4) {
				printf("Unesite cetvrti skup\n");
				head4 = formList();
				break;
			}
			else if (!head4) {
				printf("Unesite peti skup\n");
				head5 = formList();
				break;
			}
			else {
				printf("Svi skupovi su popunjeni. Izbrisite jedan.\n");
				break;
			}
		case 2:
			printf("Izabrali ste ispis skupa\n");
			printf("Izaberite skup koji ce biti ispisan: ");
			if (!scanf("%d", &choice2)) exit(1);
			if (choice2 == 1) {
				printList(head1);
				break;
			}
			else if (choice2 == 2) {
				printList(head2);
				break;
			}
			else if (choice2 == 3) {
				printList(head3);
				break;
			}
			else if (choice2 == 4) {
				printList(head4);
				break;
			}
			else if (choice2 == 5) {
				printList(head5);
				break;
			}
			else {
				printf("Niste uneli validnu opciju.\n");
				break;
			}
		case 3:
			printf("Izabrali ste brisanje skupa\n");
			printf("Izaberite koji skup ce biti izbrisan: ");
			if (!scanf("%d", &choice2)) exit(1);
			if (choice2 == 1) {
				head1 = freeList(head1);
				break;
			}
			else if (choice2 == 2) {
				head2 = freeList(head2);
				break;
			}
			else if (choice2 == 3) {
				head3 = freeList(head3);
				break;
			}
			else if (choice2 == 4) {
				head4 = freeList(head4);
				break;
			}
			else if (choice2 == 5) {
				head5 == freeList(head5);
				break;
			}
			else {
				printf("Niste uneli validnu opciju.\n");
				break;
			}
		case 4:
			printf("Izabrali ste unos elementa u skup\n");
			printf("Unesite celobrojnu vrednost od 1-5 za skup u koji ubacujemo: ");
			if (!scanf("%d", &choice2)) exit(1);
			printf("Unesite celobrojnu vrednost elementa koji ubacujemo: ");
			if (!scanf("%d", &element)) exit(1);
			if (choice2 == 1) {
				printf("Dodajemo element %d u skup %d\n", element, choice2);
				head1 = insertEnd(head1, element);
				sortList(head1);
				break;
			}
			else if (choice2 == 2) {
				printf("Dodajemo element %d u skup %d\n", element, choice2);
				head2 = insertEnd(head2, element);
				sortList(head2);
				break;
			}
			else if (choice2 == 3) {
				printf("Dodajemo element %d u skup %d\n", element, choice2);
				head3 = insertEnd(head3, element);
				sortList(head3);
				break;
			}
			else if (choice2 == 4) {
				printf("Dodajemo element %d u skup %d\n", element, choice2);
				head4 = insertEnd(head4, element);
				sortList(head4);
				break;
			}
			else if (choice2 == 5) {
				printf("Dodajemo element %d u skup %d\n", element, choice2);
				head5 = insertEnd(head5, element);
				sortList(head5);
				break;
			}
			else {
				printf("Niste uneli validnu opciju.\n");
				break;
			}
		case 5:
			printf("Izabrali ste brisanje elementa iz skupa\n");
			printf("Unesite celobrojnu vrednost od 1-5 za skup iz kojeg izbacujemo: ");
			if (!scanf("%d", &choice2)) exit(2);
			printf("Unesite element koji brisemo: ");
			if (!scanf("%d", &element)) exit(2);
			if (choice2 == 1) {
				printf("Brisemo element %d iz skupa %d\n", element, choice2);
				deleteNode(&head1, element);
				break;
			}
			else if (choice2 == 2) {
				printf("Brisemo element %d iz skupa %d\n", element, choice2);
				deleteNode(&head2, element);
				break;
			}
			else if (choice2 == 3) {
				printf("Brisemo element %d iz skupa %d\n", element, choice2);
				deleteNode(&head3, element);
				break;
			}
			else if (choice2 == 4) {
				printf("Brisemo element %d iz skupa %d\n", element, choice2);
				deleteNode(&head4, element);
				break;
			}
			else if (choice2 == 5) {
				printf("Brisemo element %d iz skupa %d\n", element, choice2);
				deleteNode(&head5, element);
				break;
			}
			else {
				printf("Niste uneli validnu opciju.\n");
				break;
			}
		case 6:
			printf("Izaberite jednu od ponudjenih operacija\n");
			printf("1. Unija\n");
			printf("2. Presek\n");
			printf("3. Razlika\n");
			printf("4. Pripadnost\n");
			printf("5. Kardinalnost\n");
			if (!scanf("%d", &choice2)) exit(1);
			if (choice2 == 1) {
				printf("Unesite celobrojne vrednosti za skupove sa kojima cemo raditi uniju po rastucem poretku\n");
				printf("Prvi skup: ");
				if (!scanf("%d", &skup1)) exit(3);
				printf("Drugi skup: ");
				if (!scanf("%d", &skup2)) exit(3);
				if (skup1 == 1 && skup2 == 2) {
					if ((head1 == NULL) || (head2 == NULL)) {
						printf("\nSkupovi 1 ili 2 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 1 i 2\n");
						if (!head3) { printf("\nSmestamo uniju u skup 3\n"); head3 = mergeSorted(head1, head2); }
						else if (!head4) { printf("\nSmestamo uniju u skup 4\n"); head4 = mergeSorted(head1, head2); }
						else if (!head5) { printf("\nSmestamo uniju u skup 5\n"); head5 = mergeSorted(head1, head2); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 3) {
					if ((head1 == NULL) || (head3 == NULL)) {
						printf("\nSkupovi 1 ili 3 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 1 i 3\n");
						if (!head2) { printf("\nSmestamo uniju u skup 2\n"); head2 = mergeSorted(head1, head3); }
						else if (!head4) { printf("\nSmestamo uniju u skup 4\n"); head4 = mergeSorted(head1, head3); }
						else if (!head5) { printf("\nSmestamo uniju u skup 5\n"); head5 = mergeSorted(head1, head3); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 4) {
					if ((head1 == NULL) || (head4 == NULL)) {
						printf("\nSkupovi 1 ili 4 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 1 i 4\n");
						if (!head2) { printf("\nSmestamo uniju u skup 2\n"); head2 = mergeSorted(head1, head4); }
						else if (!head3) { printf("\nSmestamo uniju u skup 3\n"); head3 = mergeSorted(head1, head4); }
						else if (!head5) { printf("\nSmestamo uniju u skup 5\n"); head5 = mergeSorted(head1, head4); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 5) {
					if ((head1 == NULL) || (head5 == NULL)) {
						printf("\nSkupovi 1 ili 5 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 1 i 5\n");
						if (!head2) { printf("\nSmestamo uniju u skup 2\n"); head2 = mergeSorted(head1, head5); }
						else if (!head3) { printf("\nSmestamo uniju u skup 3\n"); head3 = mergeSorted(head1, head5); }
						else if (!head4) { printf("\nSmestamo uniju u skup 4\n"); head4 = mergeSorted(head1, head5); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 3) {
					if ((head2 == NULL) || (head3 == NULL)) {
						printf("\nSkupovi 2 ili 3 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 2 i 3\n");
						if (!head1) { printf("\nSmestamo uniju u skup 1\n"); head1 = mergeSorted(head2, head3); }
						else if (!head4) { printf("\nSmestamo uniju u skup 4\n"); head4 = mergeSorted(head2, head3); }
						else if (!head5) { printf("\nSmestamo uniju u skup 5\n"); head5 = mergeSorted(head2, head3); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 4) {
					if ((head2 == NULL) || (head4 == NULL)) {
						printf("\nSkupovi 2 ili 4 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 2 i 4\n");
						if (!head1) { printf("\nSmestamo uniju u skup 1\n"); head1 = mergeSorted(head2, head4); }
						else if (!head3) { printf("\nSmestamo uniju u skup 3\n"); head3 = mergeSorted(head2, head4); }
						else if (!head5) { printf("\nSmestamo uniju u skup 5\n"); head5 = mergeSorted(head2, head4); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 5) {
					if ((head2 == NULL) || (head5 == NULL)) {
						printf("\nSkupovi 2 ili 5 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 2 i 5\n");
						if (!head1) { printf("\nSmestamo uniju u skup 1\n"); head1 = mergeSorted(head2, head5); }
						else if (!head3) { printf("\nSmestamo uniju u skup 3\n"); head3 = mergeSorted(head2, head5); }
						else if (!head4) { printf("\nSmestamo uniju u skup 4\n"); head4 = mergeSorted(head2, head5); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 3 && skup2 == 4) {
					if ((head3 == NULL) || (head4 == NULL)) {
						printf("\nSkupovi 3 ili 4 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 3 i 4\n");
						if (!head1) { printf("\nSmestamo uniju u skup 1\n"); head1 = mergeSorted(head3, head4); }
						else if (!head2) { printf("\nSmestamo uniju u skup 2\n"); head2 = mergeSorted(head3, head4); }
						else if (!head5) { printf("\nSmestamo uniju u skup 5\n"); head5 = mergeSorted(head3, head4); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 3 && skup2 == 5) {
					if ((head3 == NULL) || (head5 == NULL)) {
						printf("\nSkupovi 3 ili 5 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 3 i 5\n");
						if (!head1) { printf("\nSmestamo uniju u skup 1\n"); head1 = mergeSorted(head3, head5); }
						else if (!head2) { printf("\nSmestamo uniju u skup 2\n"); head2 = mergeSorted(head3, head5); }
						else if (!head4) { printf("\nSmestamo uniju u skup 4\n"); head4 = mergeSorted(head3, head5); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 4 && skup2 == 5) {
					if ((head3 == NULL) || (head5 == NULL)) {
						printf("\nSkupovi 4 ili 5 nisu popunjeni\n");
					}
					else {
						printf("\nRadimo uniju za skupove 4 i 5\n");
						if (!head1) { printf("\nSmestamo uniju u skup 1\n"); head1 = mergeSorted(head4, head5); }
						else if (!head2) { printf("\nSmestamo uniju u skup 2\n"); head2 = mergeSorted(head4, head5); }
						else if (!head3) { printf("\nSmestamo uniju u skup 3\n"); head3 = mergeSorted(head4, head5); }
						else {
							printf("\nNemoguce odraditi uniju, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else {
					printf("\nNekorektan unos.\n");
					break;
				}
			}
			else if (choice2 == 2) {
				printf("Unesite celobrojne vrednosti za skupove sa kojima cemo raditi presek po rastucem poretku\n");
				printf("Prvi skup: ");
				if (!scanf("%d", &skup1)) exit(3);
				printf("Drugi skup: ");
				if (!scanf("%d", &skup2)) exit(3);
				if (skup1 == 1 && skup2 == 2) {
					if ((head1 == NULL) || (head2 == NULL)) {
						printf("Skupovi 1 ili 2 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 1 i 2\n");
						if (!head3) { printf("\nSmestamo presek u skup 3\n"); head3 = intersection(head1, head2); }
						else if (!head4) { printf("\nSmestamo presek u skup 4\n"); head4 = intersection(head1, head2); }
						else if (!head5) { printf("\nSmestamo presek u skup 5\n"); head5 = intersection(head1, head2); }
						else {
							printf("\nNemoguce odraditi presek, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 3) {
					if ((head1 == NULL) || (head3 == NULL)) {
						printf("Skupovi 1 ili 3 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 1 i 3\n");
						if (!head2) { printf("\nSmestamo presek u skup 2\n"); head2 = intersection(head1, head3); }
						else if (!head4) { printf("\nSmestamo presek u skup 4\n"); head4 = intersection(head1, head3); }
						else if (!head5) { printf("\nSmestamo presek u skup 5\n"); head5 = intersection(head1, head3); }
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 4) {
					if ((head1 == NULL) || (head4 == NULL)) {
						printf("Skupovi 1 ili 4 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 1 i 4\n");
						if (!head2) { printf("\nSmestamo presek u skup 2\n"); head2 = intersection(head1, head4); }
						else if (!head3) { printf("\nSmestamo presek u skup 3\n"); head3 = intersection(head1, head4); }
						else if (!head5) { printf("\nSmestamo presek u skup 5\n"); head5 = intersection(head1, head4); }
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 5) {
					if ((head1 == NULL) || (head5 == NULL)) {
						printf("Skupovi 1 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 1 i 5\n");
						if (!head2) { printf("\nSmestamo presek u skup2\n"); head2 = intersection(head1, head5); }
						else if (!head3) { printf("\nSmestamo presek u skup 3\n"); head3 = intersection(head1, head5); }
						else if (!head4) { printf("\nSmestamo presek u skup 4\n"); head4 = intersection(head1, head5); }
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 3) {
					if ((head2 == NULL) || (head3 == NULL)) {
						printf("Skupovi 2 ili 3 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 2 i 3\n");
						if (!head1) { printf("\nSmestamo presek u skup1\n"); head1 = intersection(head2, head3); }
						else if (!head4) { printf("\nSmestamo presek u skup 4\n"); head4 = intersection(head2, head3); }
						else if (!head5) { printf("\nSmestamo presek u skup 5\n"); head5 = intersection(head2, head3); }
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 4) {
					if ((head2 == NULL) || (head4 == NULL)) {
						printf("Skupovi 2 ili 4 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 2 i 4\n");
						if (!head1) { printf("\nSmestamo presek u skup1\n"); head1 = intersection(head2, head4); }
						else if (!head3) { printf("\nSmestamo presek u skup 3\n"); head3 = intersection(head2, head4); }
						else if (!head5) { printf("\nSmestamo presek u skup 5\n"); head5 = intersection(head2, head4); }
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 5) {
					if ((head2 == NULL) || (head5 == NULL)) {
						printf("Skupovi 2 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 2 i 5\n");
						if (!head1) { printf("\nSmestamo presek u skup1\n"); head1 = intersection(head2, head5); }
						else if (!head3) { printf("\nSmestamo presek u skup 3\n"); head3 = intersection(head2, head5); }
						else if (!head4) { printf("\nSmestamo presek u skup 4\n"); head4 = intersection(head2, head5); }
					}
					break;
				}
				else if (skup1 == 3 && skup2 == 4) {
					if ((head3 == NULL) || (head4 == NULL)) {
						printf("Skupovi 3 ili 4 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 3 i 4\n");
						if (!head1) { printf("\nSmestamo presek u skup 1\n"); head1 = intersection(head3, head4); }
						else if (!head2) { printf("\nSmestamo presek u skup 2\n"); head2 = intersection(head3, head4); }
						else if (!head5) { printf("\nSmestamo presek u skup 5\n"); head5 = intersection(head3, head4); }
					}
					break;
				}
				else if (skup1 == 3 && skup2 == 5) {
					if ((head3 == NULL) || (head4 == NULL)) {
						printf("Skupovi 3 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 3 i 5\n");
						if (!head1) { printf("\nSmestamo presek u skup 1\n"); head1 = intersection(head3, head5); }
						else if (!head2) { printf("\nSmestamo presek u skup 2\n"); head2 = intersection(head3, head5); }
						else if (!head4) { printf("\nSmestamo presek u skup 4\n"); head4 = intersection(head3, head5); }
					}
					break;
				}
				else if (skup1 == 4 && skup2 == 5) {
					if ((head4 == NULL) || (head5 == NULL)) {
						printf("Skupovi 4 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo presek za skupove 4 i 5\n");
						if (!head1) { printf("\nSmestamo presek u skup 1\n"); head1 = intersection(head4, head5); }
						else if (!head2) { printf("\nSmestamo presek u skup 2\n"); head2 = intersection(head4, head5); }
						else if (!head3) { printf("\nSmestamo presek u skup 3\n"); head3 = intersection(head4, head5); }
					}
					break;
				}
				else {
					printf("\nNekorektan unos.\n");
					break;
				}
			}
			else if (choice2 == 3) {
				printf("Unesite celobrojne vrednosti za skupove sa kojima cemo raditi razliku po rastucem poretku\n");
				printf("Prvi skup: ");
				if (!scanf("%d", &skup1)) exit(3);
				printf("Drugi skup: ");
				if (!scanf("%d", &skup2)) exit(3);
				if (skup1 == 1 && skup2 == 2) {
					if ((head1 == NULL) || (head2 == NULL)) {
						printf("Skupovi 1 ili 2 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 1 i 2\n");
						if (!head3) { printf("\nSmestamo razliku u skup 3\n"); head3 = razlika(head1, head2); }
						else if (!head4) { printf("\nSmestamo razliku u skup 4\n"); head4 = razlika(head1, head2); }
						else if (!head5) { printf("\nSmestamo razliku u skup 5\n"); head5 = razlika(head1, head2); }
						else {
							printf("\nNemoguce odraditi razliku, svi skupovi su zauzeti.\n");
							break;
						}
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 3) {
					if ((head1 == NULL) || (head3 == NULL)) {
						printf("Skupovi 1 ili 3 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 1 i 3\n");
						if (!head2) { printf("\nSmestamo razliku u skup 2\n"); head2 = razlika(head1, head3); }
						else if (!head4) { printf("\nSmestamo razliku u skup 4\n"); head4 = razlika(head1, head3); }
						else if (!head5) { printf("\nSmestamo razliku u skup 5\n"); head5 = razlika(head1, head3); }
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 4) {
					if ((head1 == NULL) || (head4 == NULL)) {
						printf("Skupovi 1 ili 4 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 1 i 4\n");
						if (!head2) { printf("\nSmestamo razliku u skup 2\n"); head2 = razlika(head1, head4); }
						else if (!head3) { printf("\nSmestamo razliku u skup 3\n"); head3 = razlika(head1, head4); }
						else if (!head5) { printf("\nSmestamo razliku u skup 5\n"); head5 = razlika(head1, head4); }
					}
					break;
				}
				else if (skup1 == 1 && skup2 == 5) {
					if ((head1 == NULL) || (head5 == NULL)) {
						printf("Skupovi 1 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 1 i 5\n");
						if (!head2) { printf("\nSmestamo razliku u skup2\n"); head2 = razlika(head1, head5); }
						else if (!head3) { printf("\nSmestamo razliku u skup 3\n"); head3 = razlika(head1, head5); }
						else if (!head4) { printf("\nSmestamo razliku u skup 4\n"); head4 = razlika(head1, head5); }
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 3) {
					if ((head2 == NULL) || (head3 == NULL)) {
						printf("Skupovi 2 ili 3 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 2 i 3\n");
						if (!head1) { printf("\nSmestamo razliku u skup1\n"); head1 = razlika(head2, head3); }
						else if (!head4) { printf("\nSmestamo razliku u skup 4\n"); head4 = razlika(head2, head3); }
						else if (!head5) { printf("\nSmestamo razliku u skup 5\n"); head5 = razlika(head2, head3); }
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 4) {
					if ((head2 == NULL) || (head4 == NULL)) {
						printf("Skupovi 2 ili 4 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 2 i 4\n");
						if (!head1) { printf("\nSmestamo razliku u skup1\n"); head1 = razlika(head2, head4); }
						else if (!head3) { printf("\nSmestamo razliku u skup 3\n"); head3 = razlika(head2, head4); }
						else if (!head5) { printf("\nSmestamo razliku u skup 5\n"); head5 = razlika(head2, head4); }
					}
					break;
				}
				else if (skup1 == 2 && skup2 == 5) {
					if ((head2 == NULL) || (head5 == NULL)) {
						printf("Skupovi 2 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 2 i 5\n");
						if (!head1) { printf("\nSmestamo razliku u skup1\n"); head1 = razlika(head2, head5); }
						else if (!head3) { printf("\nSmestamo razliku u skup 3\n"); head3 = razlika(head2, head5); }
						else if (!head4) { printf("\nSmestamo razliku u skup 4\n"); head4 = razlika(head2, head5); }
					}
					break;
				}
				else if (skup1 == 3 && skup2 == 4) {
					if ((head3 == NULL) || (head4 == NULL)) {
						printf("Skupovi 3 ili 4 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 3 i 4\n");
						if (!head1) { printf("\nSmestamo razliku u skup 1\n"); head1 = razlika(head3, head4); }
						else if (!head2) { printf("\nSmestamo razliku u skup 2\n"); head2 = razlika(head3, head4); }
						else if (!head5) { printf("\nSmestamo razliku u skup 5\n"); head5 = razlika(head3, head4); }
					}
					break;
				}
				else if (skup1 == 3 && skup2 == 5) {
					if ((head3 == NULL) || (head4 == NULL)) {
						printf("Skupovi 3 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 3 i 5\n");
						if (!head1) { printf("\nSmestamo razliku u skup 1\n"); head1 = razlika(head3, head5); }
						else if (!head2) { printf("\nSmestamo razliku u skup 2\n"); head2 = razlika(head3, head5); }
						else if (!head4) { printf("\nSmestamo razliku u skup 4\n"); head4 = razlika(head3, head5); }
					}
					break;
				}
				else if (skup1 == 4 && skup2 == 5) {
					if ((head4 == NULL) || (head5 == NULL)) {
						printf("Skupovi 4 ili 5 nisu popunjeni\n");
					}
					else {
						printf("Radimo razliku za skupove 4 i 5\n");
						if (!head1) { printf("\nSmestamo razliku u skup 1\n"); head1 = razlika(head4, head5); }
						else if (!head2) { printf("\nSmestamo razliku u skup 2\n"); head2 = razlika(head4, head5); }
						else if (!head3) { printf("\nSmestamo razliku u skup 3\n"); head3 = razlika(head4, head5); }
					}
					break;
				}
				else {
					printf("\nNekorektan unos.\n");
					break;
				}
			}
			else if (choice2 == 4) {
				printf("Izaberite broj za koji odredjujemo da li pripada skupu: ");
				if (!scanf("%d", &element)) exit(3);
				printf("Unesite celobrojnu vrednost od 1-5 za skup za koji odredjujemo pripadnost broja %d: ", element);
				if (!scanf("%d", &skup1)) exit(3);
				if (skup1 == 1) {
					int broj = isElement(head1, element);
					if (broj == 1) printf("\nBroj %d pripada skupu 1\n", element);
					else printf("\nBroj %d ne pripada skupu 1\n", element);
				}
				else if (skup1 == 2) {
					int broj = isElement(head2, element);
					if (broj == 1) printf("\nBroj %d pripada skupu 1\n", element);
					else printf("\nBroj %d ne pripada skupu 1\n", element);
				}
				else if (skup1 == 3) {
					int broj = isElement(head3, element);
					if (broj == 1) printf("\nBroj %d pripada skupu 1\n", element);
					else printf("\nBroj %d ne pripada skupu 1\n", element);
				}
				else if (skup1 == 4) {
					int broj = isElement(head4, element);
					if (broj == 1) printf("\nBroj %d pripada skupu 1\n", element);
					else printf("\nBroj %d ne pripada skupu 1\n", element);
				}
				else if (skup1 == 5) {
					int broj = isElement(head5, element);
					if (broj == 1) printf("\nBroj %d pripada skupu 1\n", element);
					else printf("\nBroj %d ne pripada skupu 1\n", element);
				}
				else {
					printf("Nekorektan unos.\n");
				}
				break;
			}
			else if (choice2 == 5) {
				printf("Izaberite skup za koji odredjujemo kardinalnost: ");
				if (!scanf("%d", &skup1)) exit(3);
				if (skup1 == 1) {
					int broj = length(head1);
					printf("Skup 1 ima %d elemenata\n", broj);
				}
				else if (skup1 == 2) {
					int broj = length(head2);
					printf("Skup 1 ima %d elemenata\n", broj);
				}
				else if (skup1 == 3) {
					int broj = length(head3);
					printf("Skup 1 ima %d elemenata\n", broj);
				}
				else if (skup1 == 4) {
					int broj = length(head4);
					printf("Skup 1 ima %d elemenata\n", broj);
				}
				else if (skup1 == 5) {
					int broj = length(head5);
					printf("Skup 1 ima %d elemenata\n", broj);
				}
				else {
					printf("Nekorektan unos.\n");
				}
				break;
			}
			else {
				printf("Nekorektan unos.\n");
				break;
			}
		case 7:
			printf("Izabrali ste izlazak iz programa\n");
			printf("Dovidjenja!\n");
			if (head1) freeList(head1);
			if (head2) freeList(head2);
			if (head3) freeList(head3);
			if (head4) freeList(head4);
			if (head5) freeList(head5);
			return 0;
		}
	}
	return 0;
}

Node* getNode(int data, Node* next, Node* prev)
{
	Node* node = (Node*)malloc(sizeof(Node));
	if (!node) exit(-1);
	node->data = data;
	node->next = next;
	node->prev = prev;
	return node;
}

Node* formList()
{
	Node* head = NULL, * tail = NULL, * prev = NULL;
	int n, data;
	printf("Unesite broj elemenata skupa: ");
	if (!scanf("%d", &n)) exit(2);
	for (int i = 0; i < n; i++) {
		printf("Unesite %d. element skupa: ", i);
		if (!scanf("%d", &data)) exit(2);
		int element = isElement(head, data);
		if (element == 0) {
			Node* node = getNode(data, NULL, NULL);
			if (!head) head = node;
			else {
				tail->next = node;
				node->prev = tail;
			}
			node->next = head;
			tail = node;
			prev = node;
		}
	}
	head->prev = tail;
	sortList(head);
	return head;
	return NULL;
}

void printList(Node* head)
{
	if (head) {
		Node* temp = head, * tail = head->prev;
		while (temp && temp != tail) {
			printf("%d ", temp->data);
			temp = temp->next;
		}
		printf("%d", temp->data);
	}
}

Node* freeList(Node* head)
{
	if (!head) return NULL;
	Node* temp = head, * tail = head->prev;
	tail->next = NULL;
	while (temp) {
		Node* p = temp;
		temp = temp->next;
		free(p);
	}
	printf("\nUspesno dealociranje skupa.\n");
	return NULL;
}

int isElement(Node* head, int data)
{
	if (head) {
		Node* temp = head, * tail = head->prev;
		if (temp->data == data) return 1;
		else {
			temp = temp->next;
			while (temp && temp != head) {
				if (temp->data == data) return 1;
				temp = temp->next;
			}
		}
	}
	return 0;
}

void sortList(Node* head)
{
	if (!head) return;
	Node* tail = head->prev;
	head->prev = NULL;
	tail->next = NULL;
	Node* i, * j;
	for (i = head; i; i = i->next) {
		for (j = i->next; j; j = j->next) {
			if (i->data > j->data) {
				int t = i->data;
				i->data = j->data;
				j->data = t;
			}
		}
	}
	head->prev = tail;
	tail->next = head;
}

Node* mergeSorted(Node* head1, Node* head2)
{
	Node* head = NULL, * tail = NULL, * prev = NULL;
	Node* tail1 = head1->prev;
	Node* tail2 = head2->prev;
	head1->prev = NULL;
	tail1->next = NULL;
	head2->prev = NULL;
	tail2->next = NULL;
	for (Node* i = head1; i; i = i->next) {
		Node* node = getNode(i->data, NULL, NULL);
		if (!head) head = node;
		else {
			tail->next = node;
			node->prev = tail;
		}
		node->next = head;
		tail = node;
		prev = node;
	}
	for (Node* i = head2; i; i = i->next) {
		int element = isElement(head, i->data);
		if (element == 0) {
			Node* node = getNode(i->data, NULL, NULL);
			if (!head) head = node;
			else {
				tail->next = node;
				node->prev = tail;
			}
			node->next = head;
			tail = node;
			prev = node;
		}
	}
	head->prev = tail;
	head1->prev = tail1;
	tail1->next = head1;
	head2->prev = tail2;
	tail2->next = head2;
	sortList(head);
	return head;
}

int length(Node* head)
{
	Node* tail = head->prev;
	head->prev = NULL;
	tail->next = NULL;
	Node* temp = head;
	int n = 0;
	while (temp) {
		n++;
		temp = temp->next;
	}
	head->prev = tail;
	tail->next = head;
	return n;
}

void deleteNode(Node** head, int key)
{
	if (*head == NULL) return;
	Node* curr = *head, * prev = NULL;
	while (curr->data != key) {
		if (curr->next == *head) return;
		prev = curr;
		curr = curr->next;
	}
	if (curr->next == *head && prev == NULL) {
		(*head) = NULL;
		free(curr);
		return;
	}
	if (curr == *head) {
		prev = (*head)->prev;
		*head = (*head)->next;
		prev->next = *head;
		(*head)->prev = prev;
		free(curr);
	}
	else if (curr->next == *head) {
		prev->next = *head;
		(*head)->prev = prev;
		free(curr);
	}
	else {
		Node* temp = curr->next;
		prev->next = temp;
		temp->prev = prev;
		free(curr);
	}
}

Node* insertEnd(Node* head, int data)
{
	if (!head) {
		printf("Prvo formirajte skup\n");
		return NULL;
	}
	else {
		if (!isElement(head, data)) {
			Node* node = getNode(data, NULL, NULL);
			Node* tail = head->prev;
			node->prev = tail;
			node->next = tail->next;
			tail->next = node;
			head->prev = node;
		}
		else return head;
	}
}

Node* intersection(Node* head1, Node* head2)
{
	Node* head = NULL, * tail = NULL, * prev = NULL;
	Node* tail1 = head1->prev;
	head1->prev = NULL;
	tail1->next = NULL;
	int element;
	for (Node* i = head1; i; i = i->next) {
		element = isElement(head2, i->data);
		if (element == 1) {
			Node* node = getNode(i->data, NULL, NULL);
			if (!head) head = node;
			else {
				tail->next = node;
				node->prev = tail;
			}
			node->next = head;
			tail = node;
			prev = node;
		}
	}
	head1->prev = tail1;
	tail1->next = head1;
	head->prev = tail;
	sortList(head);
	return head;
}

Node* razlika(Node* head1, Node* head2)
{
	Node* head = NULL, * tail = NULL, * prev = NULL;
	Node* tail1 = head1->prev;
	head1->prev = NULL;
	tail1->next = NULL;
	int element;
	for (Node* i = head1; i; i = i->next) {
		element = isElement(head2, i->data);
		if (element == 0) {
			Node* node = getNode(i->data, NULL, NULL);
			if (!head) head = node;
			else {
				tail->next = node;
				node->prev = tail;
			}
			node->next = head;
			tail = node;
			prev = node;
		}
	}
	head1->prev = tail1;
	tail1->next = head1;
	head->prev = tail;
	sortList(head);
	return head;
}