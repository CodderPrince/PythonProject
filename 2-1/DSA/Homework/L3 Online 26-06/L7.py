'''
Function to perform activity selection
def activity_selection(activities):
    Sort activities by end time
    sorted_activities = sorted(activities, key=lambda x: x[1])
    
    List to store selected activities
    selected_activities = []
    
    The end time of the last selected activity
    last_end_time = 0
    
    Select activities
    for activity in sorted_activities:
        start, end = activity
        If the start time is greater than or equal to the last end time, select it
        if start >= last_end_time:
            selected_activities.append(activity)
            last_end_time = end
    
    return selected_activities

Example usage
activities = [(1, 3), (2, 5), (0, 6), (5, 7), (8, 9), (5, 9)]
selected_activities = activity_selection(activities)

print("Selected activities:", selected_activities)
'''

