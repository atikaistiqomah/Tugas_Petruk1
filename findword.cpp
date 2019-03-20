#include <iostream>
#include <cstring>
using namespace std; 



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
  } else {break;}
}
