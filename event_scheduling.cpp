#include <iostream>
#include <vector>
#include <algorithm>

struct Event {
    int start, end, priority;
    Event(int start, int end, int priority) : start(start), end(end), priority(priority) {}
};

bool compareEvents(const Event& e1, const Event& e2) {
    if (e1.end == e2.end) {
        return e1.priority > e2.priority; // Higher priority first if end times are equal
    }
    return e1.end < e2.end; // Sort by end time
}

int main() {
    int n;
    std::cin >> n;
    std::vector<Event> events;
    for (int i = 0; i < n; i++) {
        int start, end, priority;
        std::cin >> start >> end >> priority;
        events.emplace_back(start, end, priority);
    }
    std::sort(events.begin(), events.end(), compareEvents);
    std::vector<Event> selectedEvents;
    int lastEnd = 0;
    for (const Event& e : events) {
        if (e.start >= lastEnd) {
            selectedEvents.push_back(e);
            lastEnd = e.end;
        }
    }
    std::cout << selectedEvents.size() << std::endl;
    for (const Event& e : selectedEvents) {
        std::cout << e.start << " " << e.end << " " << e.priority << std::endl;
    }
    return 0;
}
