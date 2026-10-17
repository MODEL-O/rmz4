; undefined FUN_080b9e58(void)
; entry 0x80b9e58  size 52 bytes

080B9E58: 00b5         push {lr}
080B9E5A: 011c         add r1,r0,#0x0
080B9E5C: 8b6d         ldr r3,[r1,#0x58]
080B9E5E: 0a48         ldr r0,[0x080b9e88]
080B9E60: 8342         cmp r3,r0
080B9E62: 19dc         bgt 0x080b9e98
080B9E64: 0948         ldr r0,[0x080b9e8c]
080B9E66: 4a6d         ldr r2,[r1,#0x54]
080B9E68: 8242         cmp r2,r0
080B9E6A: 02dd         ble 0x080b9e72
080B9E6C: 0848         ldr r0,[0x080b9e90]
080B9E6E: 8342         cmp r3,r0
080B9E70: 07dd         ble 0x080b9e82
080B9E72: 0848         ldr r0,[0x080b9e94]
080B9E74: 8242         cmp r2,r0
080B9E76: 0fdd         ble 0x080b9e98
080B9E78: 896d         ldr r1,[r1,#0x58]
080B9E7A: f020         mov r0,#0xf0
080B9E7C: 0002         lsl r0,r0,#0x8
080B9E7E: 8142         cmp r1,r0
080B9E80: 0add         ble 0x080b9e98
080B9E82: 0120         mov r0,#0x1
080B9E84: 09e0         b 0x080b9e9a
080B9E98: 0020         mov r0,#0x0
080B9E9A: 02bc         pop {r1}
080B9E9C: 0847         bx r1
