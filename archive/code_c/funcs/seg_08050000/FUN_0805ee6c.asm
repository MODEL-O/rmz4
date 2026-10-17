; undefined FUN_0805ee6c(void)
; entry 0x805ee6c  size 50 bytes

0805EE6C: f0b5         push {r4,r5,r6,r7,lr}
0805EE6E: 061c         add r6,r0,#0x0
0805EE70: 0906         lsl r1,r1,#0x18
0805EE72: 0d0e         lsr r5,r1,#0x18
0805EE74: 044f         ldr r7,[0x0805ee88]
0805EE76: 2a2d         cmp r5,#0x2a
0805EE78: 6cd8         bhi 0x0805ef54
0805EE7A: a800         lsl r0,r5,#0x2
0805EE7C: 0349         ldr r1,[0x0805ee8c]
0805EE7E: 4118         add r1,r0,r1
0805EE80: 0968         ldr r1,[r1,#0x0]
0805EE82: 021c         add r2,r0,#0x0
0805EE84: 8f46         mov pc,r1
0805EF54: a800         lsl r0,r5,#0x2
0805EF56: c019         add r0,r0,r7
0805EF58: 0188         ldrh r1,[r0,#0x0]
0805EF5A: 301c         add r0,r6,#0x0
0805EF5C: bdf7d0ff     bl 0x0801cf00
0805EF60: 341c         add r4,r6,#0x0
0805EF62: b834         add r4,#0xb8
0805EF64: 2570         strb r5,[r4,#0x0]
0805EF66: f0bc         pop {r4,r5,r6,r7}
0805EF68: 01bc         pop {r0}
0805EF6A: 0047         bx r0
