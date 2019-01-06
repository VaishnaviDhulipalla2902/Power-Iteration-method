#include "Record.h"

Record::Record(const vector<string> input)
{
    record = input;
}

Record::Record(const Record &rec)
{
    record = rec.get_record();
}
