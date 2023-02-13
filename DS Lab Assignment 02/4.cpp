#include <bits/stdc++.h>
using namespace std;

bool is_operand(char s)
{
    return s >= '0' && s <= '9';
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string gettting_Postfix(string s)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push('(');
        }
        else if (s[i] == ')')
        {
            while (st.size() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }

            if (st.size() && st.top() == '(')
            {
                st.pop();
            }
        }
        else
        {
            while (st.size() && precedence(st.top()) >= precedence(s[i]))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (st.size())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int calculate(string str)
{
    stack<int> st;

    for (int i = 0; i < str.size(); i++)
    {
        if (is_operand(str[i]))
            st.push(str[i] - '0');
        else
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (str[i])
            {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    string str;
    cin >> str;

    cout << calculate(gettting_Postfix(str)) << "\n";

    return 0;
}


/* #include <bits/stdc++.h>
using namespace std;

bool is_operand(char s)
{
    return s >= '0' && s <= '9';
}

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string getPostfix(string str)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (is_operand(str[i]))
        {
            ans += str[i];
        }
        else if (str[i] == '(')
        {
            st.push('(');
        }
        else if (str[i] == ')')
        {
            while (st.size() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }

            if (st.size() && st.top() == '(')
            {
                st.pop();
            }
        }
        else
        {
            while (st.size() && prec(st.top()) >= prec(str[i]))
            {
                ans += st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }

    while (st.size())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int calculate(string str)
{
    stack<int> st;

    for (int i = 0; i < str.size(); i++)
    {
        if (is_operand(str[i]))
            st.push(str[i] - '0');
        else
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (str[i])
            {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    string str;
    cin >> str;

    cout << calculate(getPostfix(str)) << "\n";

    return 0;
}
 */