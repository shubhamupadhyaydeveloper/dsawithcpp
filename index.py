# selection sort
def lowestValue(searchArray):
    assumeSmallest = 0
    for value in range(1, len(searchArray)):
        if searchArray[assumeSmallest] > searchArray[value]:
            assumeSmallest = value
    return assumeSmallest


def selectionSort(searchArray):
    sortedArray = []
    copiedArray = searchArray
    for value in range(len(searchArray)):
        currentLowest = lowestValue(searchArray)
        sortedArray.append(copiedArray.pop(currentLowest))
    return sortedArray

print(selectionSort([2,6,9,3,1,0]))
        
# bubble sort

# def bubbleSort(searchArray):
#     allSorted = True
#     while(allSorted):
#         allSorted = False
#         for value in range


