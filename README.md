# Zephyr Application Unit Tests Example
This respository is intended to show how to create a simple unit test for zephyr application code. The application is a modified version of the zephyr application example found [here](https://github.com/zephyrproject-rtos/example-application).

The application provides unit tests examples of:
- Basic Application code
- TODO: Application code that interacts with Zephyr subsystem
- TODO: Mocking example

## Getting Started
Follow the Zephyr getting started guide to configure your zephyr on your system.
[Zephyr Getting Started Guide](https://docs.zephyrproject.org/latest/getting_started/index.html).

### Initialization
Create an empty director to house the workspace
```shell
mkdir my-workspace
cd my-workspace
```
Initialize and update the workspace
```shell
west init -m git@github.com:brian-greeson/unit-test-example
# update Zephyr modules
west update
```

### Running tests
To run the tests use zephyr's test runner **Twister**.
```shell
cd unit-test-example
west twister -vv -i -c -T tests/unit/
```
Quick note on twister extensions used:
- -vv enables verbose output.
- -i overwrites the output directory, otherwise you end up with a lot of `twister.out.#` folders.
- -T specify the tests to run, without twister would run **all** of zephyrs tests.

### Running the Application
The application is not designed to do anything. But if you want to run it and look at the console output use the following.
````shell
west build -p always -b native_posix app/
./build/zephyr/zephyr.exe
```