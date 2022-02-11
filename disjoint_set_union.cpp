
int find_parent(vii &nodes, int x)
{
    if (nodes[x].first == x)
        return x;
    return nodes[x].first = find_parent(nodes, nodes[x].first);
}

void unite(vii &nodes, int x, int y)
{
    int par_x = find_parent(nodes, x);
    int par_y = find_parent(nodes, y);
    if (nodes[par_x].second < nodes[par_y].second)
    {
        nodes[par_x].first = par_y;
    }
    else if (nodes[par_x].second > nodes[par_y].second)
    {
        nodes[par_y].first = par_x;
    }
    else
    {
        nodes[par_y].first = par_x;
        nodes[par_x].second++;
    }
}
