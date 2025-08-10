import heapq

# Initialize the priority queue
task_queue = []

# Function to add a task with priority
def add_task(priority, task):
    heapq.heappush(task_queue, (priority, task))

# Function to get the highest priority task
def get_task():
    return heapq.heappop(task_queue)[1] if task_queue else None

# Add tasks with priorities
add_task(1, "Complete assignment")
add_task(3, "Read book")
add_task(2, "Go shopping")

#
