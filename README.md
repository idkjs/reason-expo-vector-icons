# Reason @expo/vector-icons

This library is the bindings for @expo/vector-icons which is a compatibility layer around @oblador/react-native-vector-icons to work with the Expo asset system. If you're using Javascript/Typescript, you have no need for this library -- carry on! (or maybe check out [@expo/vector-icons](https://github.com/expo/vector-icons)).

If you're not using Expo, then check out [Astrocoders/bs-react-native-vector-icons](https://github.com/Astrocoders/bs-react-native-vector-icons) instead.

The main difference is that the icons have been updated to current version, `reason` syntax has been updated to latest, this project uses the the latest `reason-react-native` and the `api` has slightly changed in the you can now call any of the icon templates with:

```reason
open ReasonExpoVectorIcons;

// or
<ReasonExpoVectorIcons.Ionicons>

```

## Resources

- [@expo/vector-icons directory](https://expo.github.io/vector-icons/) - a searchable list of all included icons.
  ![Screenshot of website](https://raw.githubusercontent.com/expo/vector-icons/master/website-screenshot.png)
- [Expo documentation](https://docs.expo.io/)

## Live App

Run the example on your phone or simulator with `yarn example` from the root directory.

Run it on web with `cd example && yarn install && yarn build`. Then in the terminal run `expo start --web`. Running `web` with `expo` is in active development and it doesn't seem to work from `npm scripts`.

See the demo on [snack.io](www.snack.io) at <https://expo.io/@idkjs/ReasonExpoVectorIconsTestApp>

## Installation

With yarn

`yarn add @idkjs/reason-expo-vector-icons`

With npm

`npm i @idkjs/reason-expo-vector-icons`

Then add it to your `bsconfig.json`

```json
  ...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    "reason-expo-vector-icons"
  ],
  ...
```

## Usage

```reason
open ReasonExpoVectorIcons;
[@react.component]
let make = () => {
  <Ionicons name=`iosAddCircle size=32 color="magenta" />
};
```

## Credits

Thanks to [Astrocoders/bs-react-native-vector-icons](https://github.com/Astrocoders/bs-react-native-vector-icons) for
providing an example of how to generate this from glyphmap files.

Thanks to [oblador/react-native-vector-icons](https://github.com/oblador/react-native-vector-icons) for the icons.

Thanks to [@expo/vector-icons](https://github.com/expo/vector-icons) for expo.
Thanks to [lewisf/reason-expo-vector-icons](https://github.com/lewisf/reason-expo-vector-icons) for original version of this program.

![ios-screenshot](./ios-screenshot.png)
