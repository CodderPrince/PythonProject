'''initialize'''
queue = []
front = 0  # 0 index
rear = -1 

'''create enqueue function'''


def enqueue(val):
    global rear
    rear += 1
    if rear < len(queue):
        queue[rear] = val 
    else:
        queue.append(val)  


'''create dequeue function'''


def dequeue():
    global front
    if front <= rear:  
        val = queue[front]
        front += 1  
        return val
    else:
        return None  


'''create peek function'''


def peek():
    if front <= rear:  
        return queue[front]  
    else:
        return None  


'''create print function'''


def print_queue():
    if front > rear:  
        print("Queue: []")
    else:
        print(f"Queue: {queue[front: rear + 1]}")  

# Input 3 numbers
for i in range(3):
    val = int(input(f"Value {i+1}: "))  
    enqueue(val)

# Dequeue values
dequeueVal = dequeue()
if dequeueVal is not None:
    print(f"Dequeued: {dequeueVal}")
else:
    print("Queue is empty!")

print_queue()  
