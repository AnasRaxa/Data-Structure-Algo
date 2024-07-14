class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int>answer;         // Creating a vector name answer
        long first = 1;
        for (int j = 0; j <= rowIndex; j++)
        {
            answer.push_back(first);
            first = first * (rowIndex - j) / (j + 1);
        }
        return answer;
    }
};