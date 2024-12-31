class Solution {
public:
    bool checkOverlap(int radius, int xcenter, int ycenter, int x1, int y1, int x2, int y2) {
        int x = xcenter - max(x1, min(xcenter, x2));
        int y= ycenter - max(y1, min(ycenter, y2));
        return (x * x + y * y) <= (radius * radius);
    }
};