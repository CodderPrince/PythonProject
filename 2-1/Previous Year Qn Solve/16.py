import numpy as np

def average_score_per_test(scores):
    """
    Finds the average score for each test.

    Parameters:
    scores (numpy.ndarray): 2D array of shape (30, 6) containing test scores.

    Returns:
    numpy.ndarray: 1D array of shape (6,) containing the average score for each test.
    """
    return np.mean(scores, axis=0)

def highest_score_per_student(scores):
    """
    Finds the highest score for each student.

    Parameters:
    scores (numpy.ndarray): 2D array of shape (30, 6) containing test scores.

    Returns:
    numpy.ndarray: 1D array of shape (30,) containing the highest score for each student.
    """
    return np.max(scores, axis=1)

# Example usage:
if __name__ == "__main__":
    # Generate random test scores for demonstration purposes
    np.random.seed(0)  # for reproducibility
    test_scores = np.random.randint(0, 101, size=(30, 6))

    # Calculate average score per test
    avg_scores = average_score_per_test(test_scores)
    print("Average score for each test:", avg_scores)

    # Calculate highest score per student
    highest_scores = highest_score_per_student(test_scores)
    print("Highest score for each student:", highest_scores)
