//
// Created by zhoujie on 2018/1/6.
//

//程序清单17.8 use_q.c 程序
//use_q.c -- 驱动程序测试Queue接口
//与queue.c 一起编译
#include <stdio.h>
#include <stdlib.h>
#include "queue.h" //定义Queue，Item
#include "queue.c"

int main(void) {
    Queue line;
    Item temp;
    char ch;

    InitializeQueue(&line);
    puts("Testing the Queue interface. Type a to add a value,");
    puts("type d to delete a value, and type q to quit.");
    while ((ch = getchar()) != 'q') {
        if (ch != 'a' && ch != 'd') //忽略其它输出
            continue;
        if (ch == 'a') {
            printf("Integer to add: ");
            scanf("%d", &temp);
            if (!QueueIsFull(&line)) {
                printf("Putting %d into queue\n", temp);
                EnQueue(temp, &line);
            }
            else
                puts("Queue is full!");
        }
        else
        {
            if (QueueIsEmpty(&line))
                puts("Nothing to delete");
            else {
                DeQueue(&temp, &line);
                printf("Removing %d from queue\n", temp);
            }
        }
        printf("%d items in queue\n", QueueItemCount(&line));
        puts("Type a to add, d to delete, q to quit:");
    }
    EmptyTheQueue(&line);
    puts("Bye!");

    return EXIT_SUCCESS;
}
