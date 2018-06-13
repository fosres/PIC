#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int findWord(const char * word, const char * document)
{
  int len_word = 0; const char * w_len = word;

  while (*w_len++ != '\0') 
  {
    len_word++;
  }

  vector<char> checking(len_word);
  vector<char> v_word(len_word);
  const char * w = word; int i = 0;
  while (*w != '\0')
  {v_word[i++] = *w++;}

  const char * doc = document; int index = -1;
  while (*doc != '\0')
  {
    if(*doc == v_word[0])
    {
      i = 0; index = (int)(doc-document);
      while (i < v_word.size() )
      {
        checking[i++] = *doc++;
      }
      if (v_word != checking) 
      {
        index = -1;
        continue;
        #if 0
        checking.clear(); // You can insert this if you wish. Not necessary.
        #endif
      }
      else
        return index;
    }
    doc++;
  }

  return index;
}

int main()
{
  char a[1000] = "Zack";
  char b[1000] = "ack";
  cout << findWord(b,a) << endl;
}

