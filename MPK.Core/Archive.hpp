#pragma once

#include <cstdint>
#include <random>
#include <string>
#include <vector>

namespace mpk
{
	enum class Compression : std::uint32_t
	{
		Store = 0,
	};

	struct Entry
	{
		std::string path;

		std::uint64_t originalSize = 0;
		std::uint64_t storedSize = 0;

		Compression compression = Compression::Store;
	};

	class Archive
	{
	public:
		Archive() = default;

		[[nodiscard]]
		const std::vector<Entry>& entries() const noexcept;

		void addEntry(Entry entry);

		void clear() noexcept;

	private:
		std::vector<Entry> entries_;
	};
}