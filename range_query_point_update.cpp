
ll rangeSum(int node, int q_low, int q_high, int low, int high)
{

    if (q_low > high or q_high < low)
        return 0;
    else if (q_low <= low and high <= q_high)
    {
        return tree[node];
    }
    int partition = (low + high) / 2;
    return rangeSum(node * 2, q_low, q_high, low, partition) +
           rangeSum(node * 2 + 1, q_low, q_high, partition + 1, high);
    ;
}

void update(int node, ll value, int n)
{
    int target = node + n - 1;
    int temp = value - tree[target];
    while (target >= 1)
    {
        tree[target] += temp;
        target = target / 2;
    }
}
