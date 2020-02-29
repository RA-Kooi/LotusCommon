#ifndef bc3d0b3b_ed29_4f59_933d_bac86198468f
#define bc3d0b3b_ed29_4f59_933d_bac86198468f

#include <EASTL/string.h>

#include "../api.hpp"

namespace LotusEngine
{
namespace Exceptions
{
class LOTUSCOMMON_API RuntimeError
{
public:
	explicit RuntimeError(eastl::string const &error);
	virtual ~RuntimeError() noexcept = default;

	char const *what() const noexcept;

	inline eastl::string Message() const noexcept;

private:
	eastl::string message;
};

static_assert(eastl::is_copy_constructible_v<RuntimeError>);
static_assert(eastl::is_copy_assignable_v<RuntimeError>);
static_assert(!eastl::is_trivially_copyable_v<RuntimeError>);

static_assert(eastl::is_move_constructible_v<RuntimeError>);
static_assert(eastl::is_move_assignable_v<RuntimeError>);

inline eastl::string RuntimeError::Message() const noexcept
{
	return message;
}

class LOTUSCOMMON_API InvalidArgument final: public RuntimeError
{
public:
	using RuntimeError::RuntimeError;
	~InvalidArgument() noexcept override;
};

class LOTUSCOMMON_API NotImplemented final: public RuntimeError
{
public:
	using RuntimeError::RuntimeError;
	~NotImplemented() noexcept override;
};

static_assert(eastl::is_copy_constructible_v<InvalidArgument>);
static_assert(eastl::is_copy_assignable_v<InvalidArgument>);
static_assert(!eastl::is_trivially_copyable_v<InvalidArgument>);

static_assert(eastl::is_move_constructible_v<InvalidArgument>);
static_assert(eastl::is_move_assignable_v<InvalidArgument>);
} // namespace Exceptions
} // namespace LotusEngine

#endif // bc3d0b3b_ed29_4f59_933d_bac86198468f
