CC=gcc
ARR=-D QUEUE_ARR
LIST=-D QUEUE_LIST

arr:
	$(CC) -c main.c -o main.o $(ARR)
	$(CC) -c queue_arr.c -o queue_arr.o $(ARR)
	$(CC) -c queue_list.c -o queue_list.o $(ARR)
	$(CC) main.o queue_arr.o queue_list.o -o lab2 

list:
	$(CC) -c main.c -o main.o $(LIST)
	$(CC) -c queue_arr.c -o queue_arr.o $(LIST)
	$(CC) -c queue_list.c -o queue_list.o $(LIST)
	$(CC) main.o queue_arr.o queue_list.o -o lab2 

clean:
	rm *.o
	rm lab2
