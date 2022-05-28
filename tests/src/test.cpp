#include <boost/ut.hpp>
#include <pqrs/osx/iokit_hid_queue_value_monitor.hpp>

int main(void) {
  using namespace boost::ut;
  using namespace boost::ut::literals;

  "iokit_hid_queue_value_monitor"_test = [] {
    auto time_source = std::make_shared<pqrs::dispatcher::hardware_time_source>();
    auto dispatcher = std::make_shared<pqrs::dispatcher::dispatcher>(time_source);

    auto monitor = std::make_unique<pqrs::osx::iokit_hid_queue_value_monitor>(dispatcher,
                                                                              nullptr);

    monitor->async_start(kIOHIDOptionsTypeNone,
                         std::chrono::milliseconds(3000));
    monitor->async_stop();

    monitor = nullptr;

    dispatcher->terminate();
    dispatcher = nullptr;
  };

  return 0;
}
