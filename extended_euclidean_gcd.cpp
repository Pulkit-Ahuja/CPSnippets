ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll g = egcd(b, a % b, x, y);
    ll x1 = x, y1 = y;
    x = y1;
    y = x1 - y1 * (a / b);
    return g;
}