# fast-mod-inverses
Find inverses of all numbers 1 through P-1 where P is a prime number in `O(P)` time. One can find mod inverses of all numbers from 1 to P-1 by using Fermat's little theorem but that takes time `(P lg P)`. This technique is much more efficient. This is based on the following recurrence relation:

<pre>
inverse[1] = 1
inverse[i] = -(P / i) * inverse[P mod i];
</pre>
