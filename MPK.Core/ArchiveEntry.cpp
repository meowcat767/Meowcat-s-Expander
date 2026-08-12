#include "ArchiveEntry.hpp"
#include <utility>

namespace mpk {

    ArchiveEntry::ArchiveEntry(
        std::string path,
        EntryType type,
        std::uint64_t originalSize,
        std::uint64_t storedSize,
        Compression compression
    )
        : path_(std::move(path)),
        type_(type),
        originalSize_(originalSize),
        storedSize_(storedSize),
        compression_(compression) {
    }

    const std::string& ArchiveEntry::path() const noexcept {
        return path_;
    }

    EntryType ArchiveEntry::type() const noexcept {
        return type_;
    }

    std::uint64_t ArchiveEntry::originalSize() const noexcept {
        return originalSize_;
    }

    std::uint64_t ArchiveEntry::storedSize() const noexcept {
        return storedSize_;
    }

    Compression ArchiveEntry::compression() const noexcept {
        return compression_;
    }

}