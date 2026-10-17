; undefined FUN_08000a70(void)
; entry 0x8000a70  size 60 bytes

08000A70: 30b5         push {r4,r5,lr}
08000A72: 0b4b         ldr r3,[0x08000aa0]
08000A74: 0b4a         ldr r2,[0x08000aa4]
08000A76: 9918         add r1,r3,r2
08000A78: 0988         ldrh r1,[r1,#0x0]
08000A7A: ca00         lsl r2,r1,#0x3
08000A7C: 5218         add r2,r2,r1
08000A7E: 1202         lsl r2,r2,#0x8
08000A80: 9021         mov r1,#0x90
08000A82: 4901         lsl r1,r1,#0x5
08000A84: 5d18         add r5,r3,r1
08000A86: 2c88         ldrh r4,[r5,#0x0]
08000A88: a100         lsl r1,r4,#0x2
08000A8A: c918         add r1,r1,r3
08000A8C: 5218         add r2,r2,r1
08000A8E: 9021         mov r1,#0x90
08000A90: 8900         lsl r1,r1,#0x2
08000A92: 091b         sub r1,r1,r4
08000A94: 0330         add r0,#0x3
08000A96: 8008         lsr r0,r0,#0x2
08000A98: 8142         cmp r1,r0
08000A9A: 05d2         bcs 0x08000aa8
08000A9C: 0020         mov r0,#0x0
08000A9E: 06e0         b 0x08000aae
08000AA8: 2018         add r0,r4,r0
08000AAA: 2880         strh r0,[r5,#0x0]
08000AAC: 101c         add r0,r2,#0x0
08000AAE: 30bc         pop {r4,r5}
08000AB0: 02bc         pop {r1}
08000AB2: 0847         bx r1
