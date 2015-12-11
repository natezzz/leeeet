class MinStack {
public:
    MinStack() {
        min.push_back(std::numeric_limits<int>::max());
    }

    void push(int x) {
        s.push_back(x);
        if (x < min.back()) {
            min.push_back(x);
        } else {
            min.push_back(min.back());
        }
    }

    void pop() {
        s.pop_back();
        min.pop_back();
    }

    int top() {
        return s.back();
    }

    int getMin() {
        return min.back();
    }
    
private:
    std::deque<int> s;
    std::deque<int> min;
};
