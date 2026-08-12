#pragma once

#include <cstdint>
#include <string>

namespace mpk
{
	enum class EntryType : std::uint32_t
	{
		File = 0,
		Directory = 1
	};

	enum class Compression : std::uint32_t
	{
		Store = 0
	};

	class ArchiveEntry
	{
	public:
		ArchiveEntry(
			std::string path,
			EntryType type,
			std::uint64_t originalSize,
			std::uint64_t storedSize,
			Compression compression
		);

		[[nodiscard]]
		const std::string& path() const noexcept;
		[[nodiscard]]
		EntryType type() const noexcept;
		[[nodiscard]]
		std::uint64_t originalSize() const noexcept;
		[[nodiscard]]
		std::uint64_t storedSize() const noexcept;
		[[nodiscard]]
		Compression compression() const noexcept;

	private:
		std::string path_;
		EntryType type_;

		std::uint64_t originalSize_;
		std::uint64_t storedSize_;

		Compression compression_;
	};

}