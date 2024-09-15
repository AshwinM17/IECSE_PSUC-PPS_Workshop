#include <stdio.h>
#include <string.h>

int main() {
  char str[200], toFind[100], toReplace[100], result[200];
  int i, j, k;
  int strLen, toFindLen, toReplaceLen;
    
  printf("Enter a string: ");
  gets(str);  

  printf("Enter substring to find: ");
  gets(toFind); 

  printf("Enter substring to replace with: ");
  gets(toReplace);

  strLen = strlen(str);
  toFindLen = strlen(toFind);
  toReplaceLen = strlen(toReplace);

  k = 0;
  for (i = 0; i < strLen; i++) {
    if (strncmp(&str[i], toFind, toFindLen) == 0) {
      for (j = 0; j < toReplaceLen; j++) {
        result[k++] = toReplace[j];
      }
      i += toFindLen - 1;
    } else {
      result[k++] = str[i];
    }
  }
  result[k] = '\0';  

  printf("Modified string: %s\n", result);

  return 0;
}
