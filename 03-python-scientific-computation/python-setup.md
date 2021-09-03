# Python Setup

## Windows Instalation

1. Download Python 3.9.6 from [https://www.python.org](https://www.python.org)

2. Select the option `Add Python 3.x to PATH` during installation.

3. After installation click the `Disable path length limit` option.

4. Validate installation with

    ```bash
    python --version
    ```

## Linux Instalation

1. Install python through terminal

    ```bash
    sudo apt-get install python3 python3-pip
    ```

2. Validate installation with

    ```bash
    python3 --version
    ```

## MacOS Instalation

1. Install [Homebrew](https://brew.sh) package manager.

    ```bash
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrewinstall/HEAD/install.sh)"
    ```

2. Update Homebrew and validate brew instalation

    ```bash
    brew update
    brew upgrade
    ```

    ```bash
    brew --version
    ```

3. Install Python environtment via Homebrew and validate the instalation

    ```bash
    brew install pyenv
    ```

    ```bash
    pyenv --version
    ```

    To check python installed on device

    ```bash
    pyenv versions
    ```

4. Install Python via pyenv and change the global setting

    ```bash
    pyenv version 3.9.6
    ```

    ```bash
    pyenv global 3.9.6
    ```

    Restart the terminal to see changes

5. Validate installation

    ```bash
    python3 --version
    pyenv versions
    ```

6. To complete installation add `eval "$(pyenv init -)"` to the very last line of `.bash_profile` if using bash shell or `.zshrc` if using zsh shell.
