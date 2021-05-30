// CODE IS IMPLEMENTED BY MOHAMMAD FAISAL ANSARI
#include <iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<new>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
 
using namespace std;
 
struct box {
   int data;
   struct box *next;
};
box *makingAlist(int *listOfElements, int len){
   box *list, *pnt;
   pnt = list = new box;
   list->data = listOfElements[0];
   list->next = NULL;
   for (int i = 1; i < len; ++i) {
      pnt->next = new box;
      pnt = pnt->next;
      pnt->data = listOfElements[i];
      pnt->next = NULL;
   }
return list;
}
void showingAList(box *list){
   while (list != NULL) {
      cout << list->data << " ";
      list = list->next;
   }
   cout << endl;
}
box *mergeLists(box *list1, box *list2){
   box *finalList = NULL;
   if (list1 == NULL) {
      return list2;
   }
   if (list2 == NULL) {
      return list1;
   }
   if (list1->data < list2->data) {
      finalList = list1;
      finalList->next = mergeLists(list1->next, list2);
   } else {
      finalList = list2;
      finalList->next = mergeLists(list1, list2->next);
   }
   return finalList;
}
int main(){
   // inputs 	
   int listOfElement1[] = {1, 2, 3, 4};
   int listOfElement2[] = {1, 3, 5, 7};
 
   box *front1, *front2, *finalList = NULL;
   front1 = makingAlist(listOfElement1, SIZE(listOfElement1));
   front2 = makingAlist(listOfElement2, SIZE(listOfElement2));
   cout << "First sorted list: " << endl;
   showingAList(front1);
   cout << "Second sorted list: " << endl;
   showingAList(front2);
   finalList = mergeLists(front1, front2);
   cout << "After Merge List Final sorted list: " << endl;
   showingAList(finalList);
   return 0;
}
