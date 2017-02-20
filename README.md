# nat-device-battery

## Installation
```
weexpack plugin add nat-device-battery
```

```
npm install weex-nat --save
```

## Usage

Use in weex file (.we)

```html
<script>
import 'Nat' from 'weex-nat'

// get battery status
Nat.battery.status((err, ret) => {
    console.log(ret)
})

</script>
```

See the Nat [Documentation](http://natjs.com/) for more details.
