; undefined FUN_08041608(void)
; entry 0x8041608  size 42 bytes

08041608: 00b5         push {lr}
0804160A: 021c         add r2,r0,#0x0
0804160C: 5069         ldr r0,[r2,#0x14]
0804160E: 0121         mov r1,#0x1
08041610: 0840         and r0,r1
08041612: 0028         cmp r0,#0x0
08041614: 0bd0         beq 0x0804162e
08041616: d068         ldr r0,[r2,#0xc]
08041618: c06a         ldr r0,[r0,#0x2c]
0804161A: d26a         ldr r2,[r2,#0x2c]
0804161C: 0023         mov r3,#0x0
0804161E: 416d         ldr r1,[r0,#0x54]
08041620: 506d         ldr r0,[r2,#0x54]
08041622: 8142         cmp r1,r0
08041624: 00dd         ble 0x08041628
08041626: 0123         mov r3,#0x1
08041628: 101c         add r0,r2,#0x0
0804162A: bc30         add r0,#0xbc
0804162C: 0370         strb r3,[r0,#0x0]
0804162E: 01bc         pop {r0}
08041630: 0047         bx r0
