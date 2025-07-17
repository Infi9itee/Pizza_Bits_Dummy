#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// Multiset like behaviour with O(logK) access for kth element.
template<typename T>
using ordered_multiset = tree<
  pair<T, int>, 
  null_type,
  less<pair<T, int>>,
  rb_tree_tag,
  tree_order_statistics_node_update
  // ordered_multiset<int> ost;
  // int timer = 0;
  // ms.insert({val, timer++});           // insert duplicate-safe
  // int rank = ms.order_of_key({val, 0}); // how many elements < val
  // auto it = ms.find_by_order(k);        // get k-th element 
  // ms.erase(ms.lower_bound({val, 0}));   // erase one copy of val
  // ordered_multiset<int> ost;
>;