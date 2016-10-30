void evil()
{
 cout << "goto";
 evil();
}


int main()
{
  string secret = "super secret string";
  evil();
  return 0;
}
