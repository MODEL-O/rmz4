; undefined FUN_0804beb4(void)
; entry 0x804beb4  size 42 bytes

0804BEB4: 00b5         push {lr}
0804BEB6: 021c         add r2,r0,#0x0
0804BEB8: 5069         ldr r0,[r2,#0x14]
0804BEBA: 0121         mov r1,#0x1
0804BEBC: 0840         and r0,r1
0804BEBE: 0028         cmp r0,#0x0
0804BEC0: 0bd0         beq 0x0804beda
0804BEC2: d068         ldr r0,[r2,#0xc]
0804BEC4: c06a         ldr r0,[r0,#0x2c]
0804BEC6: d26a         ldr r2,[r2,#0x2c]
0804BEC8: 0023         mov r3,#0x0
0804BECA: 416d         ldr r1,[r0,#0x54]
0804BECC: 506d         ldr r0,[r2,#0x54]
0804BECE: 8142         cmp r1,r0
0804BED0: 00dd         ble 0x0804bed4
0804BED2: 0123         mov r3,#0x1
0804BED4: 101c         add r0,r2,#0x0
0804BED6: bc30         add r0,#0xbc
0804BED8: 0370         strb r3,[r0,#0x0]
0804BEDA: 01bc         pop {r0}
0804BEDC: 0047         bx r0
