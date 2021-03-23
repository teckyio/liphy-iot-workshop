# LiPHY SDK Setup

### All users

1. Go to your project folder (`cd AwesomeLiPHYDemo`)

1. Run `npm install react-native-liphy`

### iPhone users

1. Put `LightFlySDK` of this project to `AwesomeLiPHYDemo/ios/`.

2. Add this line to the bottom of `AwesomeLiPHYDemo/ios/Podfile`

```
pod 'LightFlySDK', :path => './LightFlySDK'
```

3. Run `npx pod-install`

4. Add `Privacy - Camera Usage Description` to the `Info.plist`

### Android users

1. You are good to go!