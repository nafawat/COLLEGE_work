#include <stdio.h>
#include <stdlib.h>

// 1. Define the structure of a Node
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;  // Global pointer to the first node (head)

// 2. Function to insert a node at the beginning
void insertAtBeginning(int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = value;      // Assign value to the node
    newNode->next = head;       // Link new node to the old head
    head = newNode;             // Update head to new node

    printf("Inserted %d at the beginning.\n", value);
}

// 3. Function to insert at the end
void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty, new node becomes head
    if (head == NULL) {
        head = newNode;
        printf("Inserted %d at the end (was empty).\n", value);
        return;
    }

    // Traverse to the end
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;  // Link last node to new node
    printf("Inserted %d at the end.\n", value);
}

// 4. Function to delete a node by value
void deleteNode(int value) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    // Case: list is empty
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    // Case: first node to be deleted
    if (head->data == value) {
        head = head->next;  // Move head to next node
        free(temp);         // Free memory
        printf("Deleted %d from the beginning.\n", value);
        return;
    }

    // Search for the node
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // Node not found
    if (temp == NULL) {
        printf("Value %d not found.\n", value);
        return;
    }

    // Node found — delete it
    prev->next = temp->next;
    free(temp);
    printf("Deleted %d from the list.\n", value);
}

// 5. Display the linked list
void displayList() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);  // Print data
        temp = temp->next;             // Move to next
    }
    printf("NULL\n");
}

// 6. Main function
int main() {
    int choice, value;

    printf("=== Singly Linked List Program ===\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete a Node\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtBeginning(value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insertAtEnd(value);
                break;
            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;
            case 4:
                displayList();
                break;
            case 5:
                printf("Exiting.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}