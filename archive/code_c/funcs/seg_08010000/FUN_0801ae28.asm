; undefined FUN_0801ae28(void)
; entry 0x801ae28  size 58 bytes

0801AE28: 10b5         push {r4,lr}
0801AE2A: 031c         add r3,r0,#0x0
0801AE2C: 9c7b         ldrb r4,[r3,#0xe]
0801AE2E: 002c         cmp r4,#0x0
0801AE30: 14d1         bne 0x0801ae5c
0801AE32: d96d         ldr r1,[r3,#0x5c]
0801AE34: 0909         lsr r1,r1,#0x4
0801AE36: 4900         lsl r1,r1,#0x1
0801AE38: 0a48         ldr r0,[0x0801ae64]
0801AE3A: 0918         add r1,r1,r0
0801AE3C: 0a88         ldrh r2,[r1,#0x0]
0801AE3E: 0a48         ldr r0,[0x0801ae68]
0801AE40: 1040         and r0,r2
0801AE42: 0322         mov r2,#0x3
0801AE44: 1043         orr r0,r2
0801AE46: 0880         strh r0,[r1,#0x0]
0801AE48: 0848         ldr r0,[0x0801ae6c]
0801AE4A: d864         str r0,[r3,#0x4c]
0801AE4C: a020         mov r0,#0xa0
0801AE4E: 4000         lsl r0,r0,#0x1
0801AE50: 1865         str r0,[r3,#0x50]
0801AE52: 5c64         str r4,[r3,#0x44]
0801AE54: 9c64         str r4,[r3,#0x48]
0801AE56: 987b         ldrb r0,[r3,#0xe]
0801AE58: 0130         add r0,#0x1
0801AE5A: 9873         strb r0,[r3,#0xe]
0801AE5C: 10bc         pop {r4}
0801AE5E: 01bc         pop {r0}
0801AE60: 0047         bx r0
