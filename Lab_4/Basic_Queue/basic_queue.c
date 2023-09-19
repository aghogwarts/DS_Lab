#include <stdio.h>
#define Q_SIZE 10

struct Queue {
    int front, rear;
    int q[Q_SIZE];
};

void insertq(struct Queue *queue, int item);
int delq(struct Queue *queue);
void display(struct Queue *queue);

int main() {
    struct Queue queue;
    queue.front = 0;
    queue.rear = -1;
    int choice, item;
    while (1) {
        printf("\n ----------------------------------------\n 1. Insert an element\n");
        printf(" 2. Delete an element\n");
        printf(" 3. Display the queue\n");
        printf(" 4. Exit\n ----------------------------------------\n");
        printf(" >> Enter your choice: ");
        scanf("%d", &choice);
        printf(" ----------------------------------------\n");
        fflush(stdin);
        switch (choice) {
            case 1:
            printf("\n + Enter the element to insert: ");
            scanf("%d", &item);
            insertq(&queue, item);
            break;
            case 2:
            item = delq(&queue);
            if (item != -1) {
                printf("\n -- Deleted item: %d\n", item);
            } else {
                printf("\n -- Queue is empty !!\n");
            }
            break;
            case 3:
            display(&queue);
            break;
            case 4:
            printf("\n -- Exiting the program.\n");
            return 0;
            default:
            printf("\n -- Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void insertq(struct Queue *queue, int item) {
    if (queue->rear == Q_SIZE - 1) {
        printf("\n -- Queue overflow !!\n");
        return;
    }
    queue->rear++;
    queue->q[queue->rear] = item;
}
int delq(struct Queue *queue) {
    if (queue->front > queue->rear) {
        return -1;
    }
    int deletedItem = queue->q[queue->front];
    queue->front++;
    return deletedItem;
}

void display(struct Queue *queue) {
    if (queue->front > queue->rear) {
        printf("\n -- Empty queue !!\n");
        return;
    }
    printf("\n -- Contents:");
    for (int i = queue->front; i <= queue->rear; i++) {
        printf(" %d", queue->q[i]);
    }
    printf("\n");
}
