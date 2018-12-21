[![Build Status](https://travis-ci.org/pqrs-org/cpp-osx-iokit_hid_queue_value_monitor.svg?branch=master)](https://travis-ci.org/pqrs-org/cpp-osx-iokit_hid_queue_value_monitor)
[![License](https://img.shields.io/badge/license-Boost%20Software%20License-blue.svg)](https://github.com/pqrs-org/cpp-osx-iokit_hid_queue_value_monitor/blob/master/LICENSE.md)

# cpp-osx-iokit_hid_queue_value_monitor

A wrapper of `IOHIDQueueRegisterValueAvailableCallback`.

## Requirements

cpp-osx-iokit_hid_queue_value_monitor depends the following classes.

- [Nod](https://github.com/fr00b0/nod)
- [pqrs::cf::run_loop_thread](https://github.com/pqrs-org/cpp-cf-run_loop_thread)
- [pqrs::dispatcher](https://github.com/pqrs-org/cpp-dispatcher)
- [pqrs::osx::iokit_hid_device](https://github.com/pqrs-org/cpp-osx-iokit_hid_device)
- [pqrs::osx::iokit_return](https://github.com/pqrs-org/cpp-osx-iokit_return)

## Install

### Using package manager

You can install `include/pqrs` by using [cget](https://github.com/pfultz2/cget).

```shell
cget install pqrs-org/cpp-cget-recipes
cget install pqrs-org/cpp-osx-iokit_hid_queue_value_monitor
```

### Manual install

Copy `include/pqrs` directory into your include directory.
