 while (!pqueue_isEmpty(&myPque)) {
        printf("%d ", pqueue_top(&myPque));
        pqueue_pop(&myPque);
    }