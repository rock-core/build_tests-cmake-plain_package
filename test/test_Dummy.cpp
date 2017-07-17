#include <boost/test/unit_test.hpp>
#include <plain_package/Dummy.hpp>

using namespace plain_package;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    plain_package::DummyClass dummy;
    dummy.welcome();
}
