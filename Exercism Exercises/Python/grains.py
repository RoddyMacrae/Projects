def square(number):
    """
    Function to calculate the number of grain(s) in a square
    Formula to calculate this is a geometric sequence: a_n = a * r^(n-1)
    where a is the scale factor, r is the common ratio,
    n is the number of square being considered
    e.g. the 5th square has a_5 = 1 * 2^(4) = 16
    """

    if number > 0 and number < 65:
        number = 2**(number - 1)
    else:
        raise ValueError("square must be between 1 and 64")
    return number

def total():
    """
    Function to sum the total number of grain on the chess board
    Uses the square() function to sum over the grain in the range
    of total squares on a chess board (64)
    """

    sum_grain = 0
    for i in range(1,65):
        sum_grain += square(i)
    return sum_grain
