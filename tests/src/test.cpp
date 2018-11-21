#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <pqrs/osx/iokit_hid_queue_value_monitor.hpp>

TEST_CASE("iokit_hid_queue_value_monitor") {
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
}
