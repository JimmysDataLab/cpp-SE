import random
import os

TEST_SIZE = 1000
SIZE_L, SIZE_U = 5, 1000
RANGE_L, RANGE_U = -10000, 10000

def make_input():

    size = random.randint(SIZE_L,SIZE_U)
    arr = [random.randint(RANGE_L,RANGE_U) for _ in range(size)]
    sorted_arr = arr.copy()
    sorted_arr.sort()
    arr.insert(0,size)
    sorted_arr.insert(0,size)

    return " ".join([str(e) for e in arr]), " ".join([str(e) for e in sorted_arr])

with open("input.txt","w") as input, open("output_python.txt","w") as output:
    for _ in range(TEST_SIZE):
        arr, sorted_arr = make_input()
        input.write(f"{arr}\n")
        output.write(f"{sorted_arr}\n")

    




