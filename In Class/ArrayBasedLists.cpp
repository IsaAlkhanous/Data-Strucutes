template <class elemType>
void arrayListType<elemType>::retrieveAt
    (int location, elemType& retItem) const
{
    if (location < 0 || location >= length)
        cerr << "The location of the item to be retrieved is "
             << "out of range." << endl;
    else
        retItem = list[location];
} //end retrieveAt

template <class elemType>
void arrayListType<elemType>::replaceAt
    (int location, const elemType& repItem)
{
    if (location < 0 || location >= length)
        cerr << "The location of the item to be replaced is "
             << "out of range." << endl;
    else
        list[location] = repItem;
} //end replaceAt

template <class elemType>
void arrayListType<elemType>::clearList()
{
    length = 0;
} //end clearList
