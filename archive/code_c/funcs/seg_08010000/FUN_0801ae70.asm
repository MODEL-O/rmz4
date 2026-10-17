; undefined FUN_0801ae70(void)
; entry 0x801ae70  size 58 bytes

0801AE70: 00b5         push {lr}
0801AE72: 031c         add r3,r0,#0x0
0801AE74: 987b         ldrb r0,[r3,#0xe]
0801AE76: 0028         cmp r0,#0x0
0801AE78: 15d1         bne 0x0801aea6
0801AE7A: d96d         ldr r1,[r3,#0x5c]
0801AE7C: 0909         lsr r1,r1,#0x4
0801AE7E: 4900         lsl r1,r1,#0x1
0801AE80: 0a48         ldr r0,[0x0801aeac]
0801AE82: 0918         add r1,r1,r0
0801AE84: 0a88         ldrh r2,[r1,#0x0]
0801AE86: 0a48         ldr r0,[0x0801aeb0]
0801AE88: 1040         and r0,r2
0801AE8A: 0322         mov r2,#0x3
0801AE8C: 1043         orr r0,r2
0801AE8E: 0880         strh r0,[r1,#0x0]
0801AE90: 8720         mov r0,#0x87
0801AE92: c000         lsl r0,r0,#0x3
0801AE94: d864         str r0,[r3,#0x4c]
0801AE96: 5020         mov r0,#0x50
0801AE98: 1865         str r0,[r3,#0x50]
0801AE9A: c020         mov r0,#0xc0
0801AE9C: 5864         str r0,[r3,#0x44]
0801AE9E: 9864         str r0,[r3,#0x48]
0801AEA0: 987b         ldrb r0,[r3,#0xe]
0801AEA2: 0130         add r0,#0x1
0801AEA4: 9873         strb r0,[r3,#0xe]
0801AEA6: 01bc         pop {r0}
0801AEA8: 0047         bx r0
