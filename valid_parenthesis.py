import Queue as queue
def is_matched(expression):
    """
    Finds out how balanced an expression is.
    String contains only parenthesis

    >>> is_matched('[]()()()()((((([]))))))')
    False
    >>> is_matched('[][')
    False
    """

    opening = tuple('({[')
    closing = tuple(')}]')

    mapping = dict(zip(opening,closing))

    q = queue.Queue()

    for letter in expression:
        if letter in opening:
            q.put(mapping[letter])
        elif letter in closing:
            if not q or letter != q.get():
                return False
    return not q

if __name__=="__main__":
    import doctest
    doctest.testmod()
