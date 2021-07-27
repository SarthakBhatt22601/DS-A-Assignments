class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        string s;
        vector<string> v;
        for(int i=0;i<12;i++){
            bitset<4> hour(i);
            for(int j=0;j<60;++j){
                bitset<6>min(j);
                if(hour.count()+min.count()==turnedOn){
                    s+=to_string(i);
                    s+=(j<10)?":0":":";
                    s+=to_string(j);
                    v.push_back(s);
                    s="";
                }
            }
        }
        return v;
    }
};