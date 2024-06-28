class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {


  sort(intervals.begin(), intervals.end());

  vector<vector<int>> mergedIntervals;
  int start = intervals[0][0];
  int end = intervals[0][1];

  for (int i = 1; i < intervals.size(); i++) {
    int intervalStart = intervals[i][0];
    int intervalEnd = intervals[i][1];


    if (intervalStart <= end) {
      end = max(end, intervalEnd);
    } else {

      mergedIntervals.push_back({start, end});
      start = intervalStart;
      end = intervalEnd;
    }
  }


  mergedIntervals.push_back({start, end});

  return mergedIntervals;


    }
};
