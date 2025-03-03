# Digispark ATTiny85 BadKeyBoard
[Amazon link](https://www.amazon.de/-/en/AZDelivery-Digispark-Rev-3-Kickstarter/dp/B076KVKHH1?crid=39C8OK2WRQMGY&dib=eyJ2IjoiMSJ9.RWgN6LjMAahvh3dKhwTqxlc7_awgEnFYRj4LxNiTYUA1LPZz82cT7JALDszVmtwXLL87JsfNdNrZxFIYgD5O465_08dscdYk_GHI4a5IteVhb35sJKE4dRcMUDhtw6as5hOi7aRwi1p02gKKMHNy1c2tKqqmotLOulRxWhGTY6hkw75gxzWlVavPwzPQC142FVwSuJ8XxRmtJYSxg18j8gftO2MEipdUYQsZrO-u__I.rUFJ36HWC5KflD6XVeHNqK9IQHSlm0CMaCgzj7SYgo0&dib_tag=se&keywords=digispark%2Battiny85&qid=1741012321&sprefix=digispark%2Bat%2Caps%2C184&sr=8-4&th=1)

## Setup

### 1. Install [Arduino IDE](https://www.arduino.cc/en/software)

### 2. Get [ATTinyCore](https://github.com/SpenceKonde/ATTinyCore/tree/v2.0.0-devThis-is-the-head-submit-PRs-against-this)
Since Digistump and Digispark abandoned their project we need to use the ATTinyCore board manager package based on their [installation manual](https://github.com/SpenceKonde/ATTinyCore/blob/v2.0.0-devThis-is-the-head-submit-PRs-against-this/Installation.md).
Open preferences in Arduino IDE and paste the following link into the _Additional boards manager URLs_ input field:
```
http://drazzy.com/package_drazzy.com_index.json
```

### 3. Install ATTinyCore by Spence Konde Board Manager
Go to `Tools` > `Board` > `Boards manager` and search for `ATTinyCore` and install it.

### 4. Use ATTiny85 Board
Go to `Tools` > `Board` > `ATTinyCore` and select `ATTiny85`.


## Usage
We need to put the `DigisparkKeyboard` directory into Arduino IDE's `libraries` directory:
- Windows: `Documents\Arduino\libraries\`
- macOS: `~/Documents/Arduino/libraries/`
- Linux: `~/Arduino/libraries/`

The library was stolen and modified from [Digistump's repo](https://github.com/digistump/DigisparkArduinoIntegration/tree/master/libraries/DigisparkKeyboard).

Go to `Sketch` > `Include Library` and select `DigisparkKeyboard`.

Now check if it works:
``` c
#include <DigiKeyboard.h>

void setup() {
    DigiKeyboard.sendKeyStroke(KEY_A); // Sends 'A' key
}

void loop() {
}
```

The `DigiKeyboard.h` was modified based on [this image](https://user-images.githubusercontent.com/105805614/187154741-442ef53d-9aaf-45a6-9be6-37a1aa3fc4cd.jpg). You can extend it freely.
