//L526_205
//процедура обработки ребра
//мх-201 Лазуков Никита Владимирович

const int MAX_V = 1000;
vector<int> low(MAX_V + 1); 
vector<int> scc(MAX_V + 1, -1); 

void process_edge(int x, int y, vector<int>& entry_time, vector<int>& low, vector<int>& scc) {
    int classification = edge_classification(x, y);

    if (classification == BACK) {
        if (entry_time[y] < entry_time[low[x]]) {
            low[x] = y;
        }
    }
    else if (classification == CROSS) {
        if (scc[y] == -1) {
            if (entry_time[y] < entry_time[low[x]]) {
                low[x] = y;
            }
        }
    }
}