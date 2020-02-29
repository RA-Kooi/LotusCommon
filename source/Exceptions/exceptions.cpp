#include "Exceptions/exceptions.hpp"

namespace LotusEngine
{
namespace Exceptions
{
RuntimeError::RuntimeError(eastl::string const &error)
: message(error)
{
}

char const *RuntimeError::what() const noexcept
{
	return message.c_str();
}

InvalidArgument::~InvalidArgument() noexcept = default;

NotImplemented::~NotImplemented() noexcept = default;
} // namespace Exceptions
} // namespace LotusEngine
