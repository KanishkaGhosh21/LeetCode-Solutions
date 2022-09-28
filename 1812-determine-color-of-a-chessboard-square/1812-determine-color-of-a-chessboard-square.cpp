class Solution {
public:
    bool squareIsWhite(string coordinates) {
        map<char,int> m={
            {'a',0},
            {'b',1},
            {'c',2},
            {'d',3},
            {'e',4},
            {'f',5},
            {'g',6},
            {'h',7}
        };
        return ((m[coordinates[0]]+(int)coordinates[1])%2==0);
    }
};