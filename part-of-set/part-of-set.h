#pragma once

#include <vector>
#include <algorithm>
#include <set>

template <typename T>
std::vector<T> FindGreaterElement(const std::set<T>& elements, const T& threshold) {
    std::vector<T> ans;
    for (T elem : elements)
        if (elem > threshold)
            ans.push_back(elem);
    std::sort(ans.begin(), ans.end());
    return ans;
}