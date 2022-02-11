vector<int> lps(string newstring)
{
    vector<int> LPS(newstring.length(), 0);
    LPS[0] = 0;
    int i = 1, len = 0;
    while (i < newstring.length())
    {
        if (newstring[i] == newstring[len])
        {
            len++;
            LPS[i] = len;
            i++;
        }
        else
        {
            if (len > 0)
            {
                len = LPS[len - 1];
            }
            else
            {
                LPS[i] = 0;
                i++;
            }
        }
    }
    return LPS;
}