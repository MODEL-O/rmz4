; undefined FUN_08038a78(void)
; entry 0x8038a78  size 38 bytes

08038A78: 00b5         push {lr}
08038A7A: 021c         add r2,r0,#0x0
08038A7C: b432         add r2,#0xb4
08038A7E: 1069         ldr r0,[r2,#0x10]
08038A80: 0549         ldr r1,[0x08038a98]
08038A82: 0840         and r0,r1
08038A84: 0549         ldr r1,[0x08038a9c]
08038A86: 8842         cmp r0,r1
08038A88: 0cd1         bne 0x08038aa4
08038A8A: d06b         ldr r0,[r2,#0x3c]
08038A8C: 0449         ldr r1,[0x08038aa0]
08038A8E: 0840         and r0,r1
08038A90: 0028         cmp r0,#0x0
08038A92: 07d1         bne 0x08038aa4
08038A94: 0120         mov r0,#0x1
08038A96: 06e0         b 0x08038aa6
08038AA4: 0020         mov r0,#0x0
08038AA6: 02bc         pop {r1}
08038AA8: 0847         bx r1
