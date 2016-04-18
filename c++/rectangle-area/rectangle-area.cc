class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        return totalArea(A, B, C, D, E, F, G, H) - intersectArea(A, B, C, D, E, F, G, H);
    }
    
    int totalArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        return (C-A)*(D-B) + (G-E)*(H-F);
    }
    
    bool intersect(int A, int B, int C, int D, int E, int F, int G, int H) {
        return ((A < G) && (C > E) && (B < H) && (D > F));
    }
    
    int intersectArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        if (!intersect(A, B, C, D, E, F, G, H)) {
            return 0;
        }
        int intersectX;   // bottom length of intersection
        int intersectY;   // side length of intersection
        if ((A < E) && (C > G)) {
            intersectX = (G - E);
        } else if ((A > E) && (C < G)) {
            intersectX = (C - A);
        } else {
            intersectX = std::min(C, G) - std::max(A, E);
        }
        
        if ((B < F) && (D > H)) {
            intersectY = (H - F);
        } else if ((B > F) && (D < H)) {
            intersectY = (D - B);
        } else {
            intersectY = std::min(D, H) - std::max(B, F);
        }
        
        return intersectX*intersectY;
    }
};
