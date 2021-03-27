
#include <iostream>
using namespace std;
 
struct Elem
{
   int data; // aaiiua
   Elem * next, * prev;
};
 
class List
{
   // Aieiaa, oaino
   Elem * Head, * Tail;
   // Eiee?anoai yeaiaioia
   int Count;
 
public:
 
   // Eiino?oeoi?
   List();
   // Eiino?oeoi? eiie?iaaiey
   List(const List&);
   // Aano?oeoi?
   ~List();
 
   // Iieo?eou eiee?anoai
   int GetCount();
   // Iieo?eou yeaiaio nienea
   Elem* GetElem(int);
 
   // Oaaeeou aanu nienie
   void DelAll();
   // Oaaeaiea yeaiaioa, anee ia?aiao? ia oeacuaaaony,
   // oi ooieoey aai cai?aoeaaao
   void Del(int pos = 0);
   // Anoaaea yeaiaioa, anee ia?aiao? ia oeacuaaaony,
   // oi ooieoey aai cai?aoeaaao
   void Insert(int pos = 0);
 
   // Aiaaaeaiea a eiiao nienea
   void AddTail(int n);
 
   // Aiaaaeaiea a ia?aei nienea
   void AddHead(int n);
 
   // Ia?aou nienea
   void Print();  
   // Ia?aou ii?aaaeaiiiai yeaiaioa
   void Print(int pos);
 
   List& operator = (const List&);
   // nei?aiea aaoo nieneia (aiienuaaiea)
   List operator + (const List&);
 
   // n?aaiaiea ii yeaiaioai
   bool operator == (const List&);
   bool operator != (const List&);
   bool operator <= (const List&);
   bool operator >= (const List&);
   bool operator < (const List&);
   bool operator > (const List&);
 
   // ia?aai?a?eaaiea nienea
   List operator - ();
};
 
List::List()
{
   // Ecia?aeuii nienie iono
   Head = Tail = NULL;
   Count = 0;
}
 
List::List(const List & L)
{
   Head = Tail = NULL;
   Count = 0;
 
   // Aieiaa nienea, ec eioi?iai eiie?oai
   Elem * temp = L.Head;
   // Iiea ia eiiao nienea
   while(temp != 0)
   {
      // Ia?aae?aai aaiiua
      AddTail(temp->data);
      temp = temp->next;
   }
}
 
List::~List()
{
   // Oaaeyai ana yeaiaiou
   DelAll();
}
 
void List::AddHead(int n)
{
   // iiaue yeaiaio
   Elem * temp = new Elem;
 
   // I?aauaouaai iao
   temp->prev = 0;
   // Caiieiyai aaiiua
   temp->data = n;
   // Neaao?uee - auaoay aieiaa
   temp->next = Head;
 
   // Anee yeaiaiou anou?
   if(Head != 0)
      Head->prev = temp;
 
   // Anee yeaiaio ia?aue, oi ii iaiia?aiaiii e aieiaa e oaino
   if(Count == 0)
      Head = Tail = temp;
   else
      // eia?a iiaue yeaiaio - aieiaiie
      Head = temp;
 
   Count++;
}
 
void List::AddTail(int n)
{
   // Nicaaai iiaue yeaiaio
   Elem * temp = new Elem;
   // Neaao?uaai iao
   temp->next = 0;
   // Caiieiyai aaiiua
   temp->data = n;
   // I?aauaouee - auaoee oaino
   temp->prev = Tail;
 
   // Anee yeaiaiou anou?
   if(Tail != 0)
      Tail->next = temp;
 
   // Anee yeaiaio ia?aue, oi ii iaiia?aiaiii e aieiaa e oaino
   if(Count == 0)
      Head = Tail = temp;
   else
      // eia?a iiaue yeaiaio - oainoiaie
   Tail = temp;      
 
   Count++;
}
 
void List::Insert(int pos)
{
   // anee ia?aiao? ionoonoaoao eee ?aaai 0, oi cai?aoeaaai aai
   if(pos == 0)
   {
      cout << "Input position: ";
      cin >> pos;
   }
 
  // Iiceoey io 1 ai Count?
   if(pos < 1 || pos > Count + 1)
   {
      // Iaaa?iay iiceoey
      cout << "Incorrect position !!!\n";
      return;
   }
 
   // Anee anoaaea a eiiao nienea
   if(pos == Count + 1)
   {
      // Anoaaeyaiua aaiiua
      int data;
      cout << "Input new number: ";
      cin >> data;
      // Aiaaaeaiea a eiiao nienea
      AddTail(data);
      return;
   }
   else if(pos == 1)
   {
      // Anoaaeyaiua aaiiua
      int data;
      cout << "Input new number: ";
      cin >> data;
      // Aiaaaeaiea a ia?aei nienea
      AddHead(data);
      return;
   }
 
   // N?ao?ee
   int i = 1;
 
   // Ion?eouaaai io aieiau n - 1 yeaiaioia
   Elem * Ins = Head;
 
   while(i < pos)
   {
      // Aioiaei ai yeaiaioa, 
      // ia?aa eioi?ui anoaaeyainy
      Ins = Ins->next;
      i++;
   }
 
   // Aioiaei ai yeaiaioa, 
   // eioi?ue i?aaoanoaoao
   Elem * PrevIns = Ins->prev;
 
   // Nicaaai iiaue yeaiaio
   Elem * temp = new Elem;
 
   // Aaiaei aaiiua
   cout << "Input new number: ";
   cin >> temp->data;
 
   // iano?ieea naycae
   if(PrevIns != 0 && Count != 1)
      PrevIns->next = temp;
 
   temp->next = Ins;
   temp->prev = PrevIns;
   Ins->prev = temp;


Count++;
}
 
void List::Del(int pos)
{
   // anee ia?aiao? ionoonoaoao eee ?aaai 0, oi cai?aoeaaai aai
   if(pos == 0)
   {
       cout << "Input position: ";
       cin >> pos;
   }
   // Iiceoey io 1 ai Count?
   if(pos < 1 || pos > Count)
   {
      // Iaaa?iay iiceoey
      cout << "Incorrect position !!!\n";
      return;
   }
 
   // N?ao?ee
   int i = 1;
 
   Elem * Del = Head;
 
   while(i < pos)
   {
      // Aioiaei ai yeaiaioa, 
      // eioi?ue oaaeyaony
      Del = Del->next;
      i++;
   }
 
   // Aioiaei ai yeaiaioa, 
   // eioi?ue i?aaoanoaoao oaaeyaiiio
   Elem * PrevDel = Del->prev;
   // Aioiaei ai yeaiaioa, eioi?ue neaaoao ca oaaeyaiui
   Elem * AfterDel = Del->next;
 
   // Anee oaaeyai ia aieiao
   if(PrevDel != 0 && Count != 1)
      PrevDel->next = AfterDel;
   // Anee oaaeyai ia oaino
    if(AfterDel != 0 && Count != 1)
      AfterDel->prev = PrevDel;
 
   // Oaaey?ony e?aeiea?
   if(pos == 1)
       Head = AfterDel;
   if(pos == Count)
       Tail = PrevDel;
 
   // Oaaeaiea yeaiaioa
   delete Del;
 
   Count--;
}
 
void List::Print(int pos)
{
   // Iiceoey io 1 ai Count?
   if(pos < 1 || pos > Count)
   {
      // Iaaa?iay iiceoey
      cout << "Incorrect position !!!\n";
      return;
   }
 
   Elem * temp;
 
   // Ii?aaaeyai n eaeie noi?iiu 
   // auno?aa aaeaaouny
   if(pos <= Count / 2)
   {
      // Ion?ao n aieiau
      temp = Head;
      int i = 1;
 
      while(i < pos)
      {
         // Aaeaaainy ai io?iiai yeaiaioa
         temp = temp->next;
         i++;
      }
   }
   else
   {
       // Ion?ao n oainoa
      temp = Tail;
      int i = 1;
 
      while(i <= Count - pos)
      {
         // Aaeaaainy ai io?iiai yeaiaioa
         temp = temp->prev;
         i++;
      }
   }
   // Auaia yeaiaioa
   cout << pos << " element: ";
   cout << temp->data << endl;
}
 
void List::Print()
{
   // Anee a nienea i?enoonoao?o yeaiaiou, oi i?iaaaaai ii iaio
   // e ia?aoaai yeaiaiou, ia?eiay n aieiaiiai
   if(Count != 0)
   {
      Elem * temp = Head;
      cout << "( ";
      while(temp->next != 0)
      {
          cout << temp->data << ", ";
          temp = temp->next;
      }
 
      cout << temp->data << " )\n";
   }
}
 
void List::DelAll()
{
   // Iiea inoa?ony yeaiaiou, oaaeyai ii iaiiio n aieiau
   while(Count != 0)
      Del(1);
}
 
int List::GetCount()
{
    return Count;
}
 
Elem * List::GetElem(int pos)
{
   Elem *temp = Head;
 
   // Iiceoey io 1 ai Count?
   if(pos < 1 || pos > Count)
   {
      // Iaaa?iay iiceoey
      cout << "Incorrect position !!!\n";
      return 0;
   }
 
   int i = 1;
   // Euai io?iue iai yeaiaio
   while(i < pos && temp != 0)
   {
      temp = temp->next;
      i++;
   }
 
   if(temp == 0)
      return 0;
   else
      return temp;
}
 
List & List::operator = (const List & L)
{
    // I?iaa?ea i?enaaeaaiey yeaiaioa "naiiio naaa"
    if(this == &L)
       return *this;
 
   // oaaeaiea noa?iai nienea
   this->~List(); // DelAll();
 
   Elem * temp = L.Head;
 
   // Eiie?oai yeaiaiou
   while(temp != 0)
   {
      AddTail(temp->data);
      temp = temp->next;
   }
 
   return *this;
}
// nei?aiea aaoo nieneia
List List::operator + (const List& L)
{
   // Caiinei ai a?aiaiiue nienie yeaiaiou ia?aiai nienea
   List Result(*this);
   // List Result = *this;
 
   Elem * temp = L.Head;
 
   // Aiaaaeyai ai a?aiaiiue nienie yeaiaiou aoi?iai nienea
   while(temp != 0)
   {
      Result.AddTail(temp->data);
      temp = temp->next;
   }
 
   return Result;
}
 
bool List::operator == (const List& L)
{
   // N?aaiaiea ii eiee?anoao
   if(Count != L.Count)
      return false;
 
   Elem *t1, *t2;
 
   t1 = Head;
   t2 = L.Head;
 
   // N?aaiaiea ii niaa??aie?
   while(t1 != 0)
   {
      // Naa?yai aaiiua, eioi?ua
      // iaoiayony ia iaeiaeiauo iiceoeyo
      if(t1->data != t2->data)
         return false;
 
      t1 = t1->next;
      t2 = t2->next;
  }
 
   return true;
}
 
bool List::operator != (const List& L)
{
   // Eniieucoai i?aauaouo? ooieoe? n?aaiaiey
   return !(*this == L);
}
 
bool List::operator >= (const List& L)
{
   // N?aaiaiea ii eiee?anoao


if(Count > L.Count)
      return true;
   // N?aaiaiea ii niaa??aie?
   if(*this == L)
      return true;
 
   return false;
}
 
bool List::operator <= (const List& L)
{
   // N?aaiaiea ii eiee?anoao
   if(Count < L.Count)
      return true;
   // N?aaiaiea ii niaa??aie?
   if(*this == L)
       return true;
 
   return false;
}
 
bool List::operator > (const List& L)
{
   if(Count > L.Count)
     return true;
 
   return false;
}
 
bool List::operator < (const List& L)
{
   if(Count < L.Count)
       return true;
 
   return false;
}
 
// ia?aai?io
List List::operator - ()
{
   List Result;
 
   Elem * temp = Head;
   // Eiie?oai yeaiaiou nienea, ia?eiay n aieiaiiai,
   // a naie iooai aiaaaeaiey yeaiaioia a aieiao,
   // oaeei ia?acii a?aiaiiue nienie Result aoaao niaa??aou
   // yeaiaiou a ia?aoiii ii?yaea
   while(temp != 0)
   {
       Result.AddHead(temp->data);
       temp = temp->next;
   }
 
   return Result;
}
 
// Oanoiaue i?eia?
int main()
{
   List L;
 
   const int n = 10;
   int a[n] = {0,1,2,3,4,5,6,7,8,9};
 
   // Aiaaaeyai yeaiaiou, noiyuea ia ?aoiuo eiaaenao, a aieiao,
   // ia ia?aoiuo - a oaino
   for(int i = 0; i < n; i++)
      if(i % 2 == 0)
         L.AddHead(a[i]);
      else
         L.AddTail(a[i]);
 
   // ?ania?aoea nienea
   cout << "List L:\n";
   L.Print();
 
   cout << endl;
 
   // Anoaaea yeaiaioa a nienie
   L.Insert();
   // ?ania?aoea nienea
   cout << "List L:\n";
   L.Print();
 
   // ?ania?aoea 2-ai e 8-ai yeaiaioia nienea
   L.Print(2);
   L.Print(8);
 
   List T;
 
   // Eiie?oai nienie
   T = L;
   // ?ania?aoea eiiee
   cout << "List T:\n";
   T.Print();
 
   // Neeaauaaai aaa nienea (ia?aue a ia?aaa?iooii ninoiyiee)
   cout << "List Sum:\n";
   List Sum = -L + T;
   // ?ania?aoea nienea
   Sum.Print();
}
