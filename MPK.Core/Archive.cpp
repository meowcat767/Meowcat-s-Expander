#include <utility>
#include "Archive.hpp"

namespace mpk {

    const std::vector<Entry>& Archive::entries() const noexcept {
        return entries_;
    }

    void Archive::addEntry(Entry entry) {
        entries_.push_back(std::move(entry));
    }

    void Archive::clear() noexcept {
        entries_.clear();
    }

}