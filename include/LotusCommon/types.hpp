#ifndef d4a7b23a_48d7_4c0f_9e1c_4755d12b67c9
#define d4a7b23a_48d7_4c0f_9e1c_4755d12b67c9

#include <cstdint>

namespace LotusEngine::Types
{
using s8      = std::int8_t;
using sf8     = std::int_fast8_t;
using sl8     = std::int_least8_t;

using u8      = std::uint8_t;
using uf8     = std::uint_fast8_t;
using ul8     = std::uint_least8_t;

using s16     = std::int16_t;
using sf16    = std::int_fast16_t;
using sl16    = std::int_least16_t;

using u16     = std::uint16_t;
using uf16    = std::uint_fast16_t;
using ul16    = std::uint_least16_t;

using s32     = std::int32_t;
using sf32    = std::int_fast32_t;
using sl32    = std::int_least32_t;

using u32     = std::uint32_t;
using uf32    = std::uint_fast32_t;
using ul32    = std::uint_least32_t;

using s64     = std::int64_t;
using sf64    = std::int_fast64_t;
using sl64    = std::int_least64_t;

using u64     = std::uint64_t;
using uf64    = std::uint_fast64_t;
using ul64    = std::uint_least64_t;

using intptr  = std::intptr_t;
using uintptr = std::uintptr_t;

using byte    = unsigned char;
} // namespace LotusEngine

#endif // d4a7b23a_48d7_4c0f_9e1c_4755d12b67c9
