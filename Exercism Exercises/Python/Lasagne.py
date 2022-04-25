"""Functions used in preparing Guido's gorgeous lasagna.
Learn about Guido, the creator of the Python language: https://en.wikipedia.org/wiki/Guido_van_Rossum
"""

EXPECTED_BAKE_TIME = 40
PREPARATION_TIME = 2

def bake_time_remaining(minutes_in_oven):
    """Calculate the bake time remaining.
    :param elapsed_bake_time: int - baking time already elapsed.
    :return: int - remaining bake time (in minutes) derived from 'EXPECTED_BAKE_TIME'.
    Function that takes the actual minutes the lasagna has been in the oven as
    an argument and returns how many minutes the lasagna still needs to bake
    based on the `EXPECTED_BAKE_TIME`.
    """
    return EXPECTED_BAKE_TIME - minutes_in_oven

def preparation_time_in_minutes(number_of_layers):
    """Calculate preparation time in minutes.
    :param number_of_layers: number of layers in lasagne
    :return: number of layers of lasagne multiplied by time it takes to prepare one layer
    """
    return number_of_layers * PREPARATION_TIME

def elapsed_time_in_minutes(number_of_layers,elapsed_bake_time):
    """Calculate total elapsed time in minutes
    :number_of_layers: total number of layers in lasagne
    :elapsed_bake_time: total time elapsed in baking lasagne so far
    :return: total time taken to prepare all layers of lasagne and total elapsed time so far
    """
    return preparation_time_in_minutes(number_of_layers) + elapsed_bake_time
