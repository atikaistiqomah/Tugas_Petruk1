//1817051047 Mutiara Widdi Ayunintyas
#include <iostream>
#include <cstring>
using namespace std; 
int main () {
  
  int periksa;                                                                               //Deklarasi variabel untuk mengecek keberadaan kata
  int cari;                                                                                  //Deklarasi variabel untuk banyaknya kata yang akan diinputkan
  int length_word;
  char input[200];                                                                           //Deklarasi variabel string dengan batas karakter sebanyak 200
  int word_finded=0;
  cout<<"\t\t\t\t\t\t===Selamat Datang di Finder Word==="<<endl<<endl;
  char table[15][15] = {{'t','g','b','w','w','i','n','t','e','r','w','s','e','s','n'},       //Tampilan Papan Tabel
                        {'a','a','u','n','t','t','m','m','h','f','o','o','d','n','b'},
                        {'j','l','w','c','q','l','d','z','m','p','m','v','d','m','r'},
                        {'a','s','a','g','m','q','u','w','v','v','b','s','o','h','i'},
                        {'b','w','p','l','o','t','a','n','a','d','t','p','g','n','c'},
                        {'r','e','w','n','g','o','d','j','c','p','n','a','t','n','k'},
                        {'e','e','o','t','w','o','s','b','q','h','a','r','r','s','a'},
                        {'a','z','c','g','e','s','w','e','w','n','a','k','n','p','b'},
                        {'d','i','n','n','e','r','q','o','d','l','w','d','c','a','r'},
                        {'o','n','o','p','k','w','m','p','a','r','k','t','z','c','c'},
                        {'q','b','f','r','o','g','m','a','m','w','p','w','e','e','y'},
                        {'l','q','z','q','n','n','m','r','z','j','j','s','c','l','g'},
                        {'m','o','s','g','z','c','z','d','t','d','b','o','o','t','o'},
                        {'p','d','c','r','z','m','s','n','g','r','d','n','r','p','z'},
                        {'o','h','n','k','z','w','a','t','e','r','j','g','t','r','a'}};
  for(int x=0;x<15;x++)
  {
    for(int y=0;y<15;y++)
    {
      cout<<table[x][y]<<"  ";
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<"Cari berapa kali : ";
  cin>>cari;
  for(int i=0;i<cari;i++)                                                                    
      {                                                                                      //Perulangan dalam banyaknya kata yang diinputkan
      cout<<"Masukkan kata : ";
      cin>>input;
      length_word = strlen(input);
    
          for (int z=0;z<15;z++)
          {
              for (int p=0;p<15;p++)
              {
                  if (input[0]==table[z][p])
                  {
                      for (int k=0;k<length_word;k++)
                      }
                          if (input[k]==table[z][p+k])
                          {
                          periksa=k;
                          }
                  else
                          {
                          break;
                          }
                
                    }
                if (periksa==length_word-1)
                    {
                        word_finded+=1;
                    }
                else
                    {
                     word_finded+=0;
                    }
                    periksa=0;
            
 //1817051007 anisa raden
                      for(int k=0;k<length_word;k++)
                      {
                        if(input[k]==table[z][p-k])
                        {
                          periksa=k;
                        }
                        else
                        {
                          break;
                        }
                      }
            if(periksa==length_word-1)
            {
              word_finded+=1;
            }
            else
            {
              word_finded+=0;
            }
            periksa=0;
            for(int k=0;k<length_word;k++)
            {
              if(input[k]==table[z+k][p])
              {
                periksa=k;
              }
              else
              {
                break;
              }
            }
            if(periksa==length_word-1)
            {
              word_finded+=1;
            }
            else
            {
              word_finded+=0;
            }
            periksa=0;
            
//1817051004 Atika Istiqomah
for (int k=0;k<length_word;k++) {
  if (input[k]==table[z-k][z]) {
    periksa=k;
  } else {break;}
}
if (periksa==length_word-1) {
  word_finded+=1;
  } else {word_finded+=0;}

periksa=0;
            
for (int k=0;k<length_word;k++) {
  if (input[k]==table[z-k][p-k]) {
    periksa=k;
  } else {break;}
}
if (periksa==length_word-1) {
  word_finded+=1;
  } else {word_finded+=0;}

periksa=0;
            
for (int k=0;k<length_word;k++) {
  if (input[k]==table[z-k][p+k]) {
    periksa=k;
  }else {break;}
}
//1817051031 livia ayu istoria hernani
            if(periksa==length_word-1)
            {
              word_finded+=1;
            }
            else
            {
              word_finded+=0;
            }
            periksa=0;
            
            for(int k=0;k<length_word;k++)
            {
              if(input[k]==table[z+k][p-k])
              {
                periksa=k;
              }
              else
              {
                break;
              }
            }
            if(periksa==length_word-1)
            {
              word_finded+=1;
            }
            else
            {
              word_finded+=0;
            }
            periksa=0;
            for (int k=0;k<length_word;k++)
            {
              if(input[k]==table[z+k][p+k])
              {
                periksa=k;
              }
              else
              {
                break;
              }
            }
            if (periksa==length_word-1)
            {
              word_finded+=1;
            }
            else
            {
              word_finded+=0;
            }
            periksa=0;
          }
  }
}
if(word_finded>0){
  cout<<"Status Keberadaan : ADA\n\n";
}
else
{
  cout<<"Status Keberadaan : TIDAK ADA\n\n";
}
}
}

             
            
            
                  
