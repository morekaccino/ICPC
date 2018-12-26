# Given an integer array and a number k, output all pair
# that sum up to k
# (1,3,2,3,2,5,46,7,4) k = 4
# (1, 4)(3, 2)


# O(n^2) solution:

def find_pair(array, k):
    p1, p2 = 0, array.__len__()
    res = []
    for i in range(array.__len__()):
        if array[i] >= k: continue
        for j in range(array.__len__()):
            if array[j] >= k: continue
            if i != j and array[i] + array[j] == k:
                if (array[i], array[j]) not in res and (array[j], array[i]) not in res:
                    res.append((array[i], array[j]))
    return res


if __name__ == "__main__":
    k = 5
    array = [1, 3, 2, 3, 2, 5, 46, 7, 4]
    print(find_pair(array, k))

