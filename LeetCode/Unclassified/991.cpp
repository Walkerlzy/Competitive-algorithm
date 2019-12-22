/*
 * @Descripttion: boring life && prevent age-related memory loss.
 * @Version: 1.0.0
 * @Author: zhaoyang.liang
 * @Github: https://github.com/LzyRapx
 * @Date: 2019-09-14 17:52:30
 * @LastEditors: zhaoyang.liang
 * @LastEditTime: 2019-09-14 17:52:30
 */
class Solution {
public:
    int brokenCalc(int X, int Y) { // 1 <= X, Y <= 1e9
        if(X >= Y) {
            return X - Y;
        }
        int ans = 0;
        while(X < Y) {
            ans += 1;
           if(Y % 2 == 1) {
               Y++;
               continue;
           }
            Y = Y / 2;
        }
        return ans + X - Y;
        
    }
};