//ID:221405
//Name:Asatullaev Fayzulloh

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Akbar
{
    int n;
    int m_n;
    vector < vector < int >>m_grades;
public:
void setvector(){
    cin >> n;
  vector < vector < int >>grades (n, vector < int >(3));
  for (int i = 0; i < n; i++)
    {
      cin >> grades[i][0] >> grades[i][1] >> grades[i][2];
    }
}
  Akbar():m_n (n),
    m_grades ()
  {
  }

  int findPosition() const
  {
    vector < int >sum_of_grades (m_n);
    for (int i = 0; i < m_n; i++)
      {
	sum_of_grades[i] = m_grades[i][0] + m_grades[i][1] + m_grades[i][2];
      }
    vector < pair < int, int >>id_sum (m_n);
    for (int i = 0; i < m_n; i++)
      {
	id_sum[i] = make_pair (i + 1, sum_of_grades[i]);
      }
    sort (id_sum.begin (), id_sum.end (),
	  [](const pair < int, int >&a, const pair < int, int >&b)
	  {
	  if (a.second != b.second)
	  {
	  return a.second > b.second;}
	  return a.first < b.first;
	      
	  }
    );


    int position = -1;

    for (int i = 0; i < m_n; i++)
      {

	if (id_sum[i].first == 2)
	  {

	    position = i + 1;

	    break;

	  }

      }

    return position;
  }

};

int
main ()
{
    Akbar a;
    a.setvector();
    cout << a.findPosition();

  return 0;
}
