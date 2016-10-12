char num[201];  //large number
long long remainder = 0;
for (int i = 0; num[i] != '\0'; ++i)
    remainder = (remainder * 10 + num[i] - '0') % 1000000007;