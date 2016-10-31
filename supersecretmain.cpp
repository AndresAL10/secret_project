void evil()
{
 cout << "Fuiste altamente troleado" << std::endl;
 cout << "goto";
 for (int i = 0; i < 1000000; i++){
  evil();
 }
}


int main()
{
  string secret = "super secret string";
  while(true)
   evil();
  return 0;
}
