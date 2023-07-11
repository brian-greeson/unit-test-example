# Zephyr Application Unit Tests Example
This respository is intended to show how to create a simple unit test for zephyr application code. It is a modified version of the zephyr applicaiton example found [here](https://github.com/zephyrproject-rtos/example-application).

The application provides unit tests examples of:
- Basic Application code
- TODO: Application code that interacts with Zephyr subsystem
- TODO: Mocking Cal

## Getting Started
Follow the Zephyr getting started guide to configure your zephyr on your system.
[Zephyr Getting Started Guide](https://docs.zephyrproject.org/latest/getting_started/index.html).

### Initialization

The first step is to initialize the workspace folder (``my-workspace``) where
the ``example-application`` and all Zephyr modules will be cloned. Run the following
command:

```shell
# initialize my-workspace for the example-application (main branch)
west init -m https://github.com/zephyrproject-rtos/example-application --mr main my-workspace
# update Zephyr modules
cd my-workspace
west update
```

### Running tests
To run the tests use zephyr's test runner **Twister**.
```shell
west twister -c -T tests/
```

