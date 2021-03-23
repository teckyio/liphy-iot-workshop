# LiPHY SDK Coding Exercise

1. Make sure to rebuild the app 

2. Add this line to the top of `App.js`

```js
import Liphy from "react-native-liphy";
```

3. Add these lines inside the App function in `App.js`

```js
const [result, setResult] = React.useState();

React.useEffect(() => {
  Liphy.startTracking();
  const removeListener = Liphy.addEventListener((data) => {
    setResult(data.lightId);
  });
  return () => {
    removeListener();
  };
}, []);
```

4. Follow the instruction to put this code to the App component. This will show the scanning result of the LiPHY.

```jsx
<Text>{result}</Text>
```

5. Follow the instruction to put this code to the App component. This will show different wordings depending on the light scanned.

```jsx
<View>
  {result === '53' && <Text>You are scanning the blue light</Text>}
  {result === '54' && <Text>You are scanning the yellow light</Text>}
</View>
```

6. Follow the instruction to put this code to the App component. We should only show the image if one of the light is scanned.

```jsx
import thebase from './thebase.jpg'

// ...

<Image source={thebase} />
```

7. Read https://www.notion.so/Rest-API-for-LiPHY-Cloud-Test-Server-34c1530589434ca6bc2a37ef319a9120 and try to integrate LiPHY with the cloud