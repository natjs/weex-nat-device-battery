# nat-device-battery

- [Documentation](http://natjs.com/#/reference/battery)
- [Github](https://github.com/natjs/weex-nat-device-battery)

## Installation
```
weexpack plugin add nat-device-battery
```

```
npm install natjs --save
```

## Usage

Use in weex project (`.vue`/`.we`)

```html
<script>
import Nat from 'natjs'

// get battery status
Nat.battery.status((err, ret) => {
    console.log(ret)
})

</script>
```

See the Nat [Documentation](http://natjs.com/) for more details.
