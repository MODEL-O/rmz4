; undefined FUN_0800f0ec(void)
; entry 0x800f0ec  size 58 bytes

0800F0EC: 00b5         push {lr}
0800F0EE: 021c         add r2,r0,#0x0
0800F0F0: 0b1c         add r3,r1,#0x0
0800F0F2: 516c         ldr r1,[r2,#0x44]
0800F0F4: 8020         mov r0,#0x80
0800F0F6: 4000         lsl r0,r0,#0x1
0800F0F8: 8142         cmp r1,r0
0800F0FA: 0ed1         bne 0x0800f11a
0800F0FC: 101c         add r0,r2,#0x0
0800F0FE: 6c30         add r0,#0x6c
0800F100: 0088         ldrh r0,[r0,#0x0]
0800F102: 0009         lsr r0,r0,#0x4
0800F104: d064         str r0,[r2,#0x4c]
0800F106: 0849         ldr r1,[0x0800f128]
0800F108: 107c         ldrb r0,[r2,#0x10]
0800F10A: 4030         add r0,#0x40
0800F10C: 0006         lsl r0,r0,#0x18
0800F10E: c00d         lsr r0,r0,#0x17
0800F110: 4018         add r0,r0,r1
0800F112: 0088         ldrh r0,[r0,#0x0]
0800F114: 0004         lsl r0,r0,#0x10
0800F116: 8015         asr r0,r0,#0x16
0800F118: 1065         str r0,[r2,#0x50]
0800F11A: 101c         add r0,r2,#0x0
0800F11C: 191c         add r1,r3,#0x0
0800F11E: f8f78bfa     bl 0x08007638
0800F122: 01bc         pop {r0}
0800F124: 0047         bx r0
