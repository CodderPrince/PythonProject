# Initialize the stacks for back and forward history
back_history = []
forward_history = []

# Function to visit a new site
def visit_site(site):
    if back_history:
        back_history.append(site)
    else:
        back_history.append(site)
    forward_history.clear()  # Clear forward history

# Function to go back to the previous site
def go_back():
    if len(back_history) > 1:
        site = back_history.pop()
        forward_history.append(site)
        return back_history[-1]
    return None

# Function to go forward to the next site
def go_forward():
    if forward_history:
        site = forward_history.pop()
        back_history.append(site)
        return site
    return None

# Visit some sites
visit_site("google.com")
visit_site("youtube.com")
visit_site("wikipedia.org")

# Go back to the previous site
print(go_back())  # Output: youtube.com

# Go forward to the next site
print(go_forward())  # Output: wikipedia.org
