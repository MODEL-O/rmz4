; undefined FUN_0800dfe0(void)
; entry 0x800dfe0  size 60 bytes

0800DFE0: 10b5         push {r4,lr}
0800DFE2: 031c         add r3,r0,#0x0
0800DFE4: 9c7b         ldrb r4,[r3,#0xe]
0800DFE6: 002c         cmp r4,#0x0
0800DFE8: 15d1         bne 0x0800e016
0800DFEA: d96d         ldr r1,[r3,#0x5c]
0800DFEC: 0909         lsr r1,r1,#0x4
0800DFEE: 4900         lsl r1,r1,#0x1
0800DFF0: 0a48         ldr r0,[0x0800e01c]
0800DFF2: 0918         add r1,r1,r0
0800DFF4: 0a88         ldrh r2,[r1,#0x0]
0800DFF6: 0a48         ldr r0,[0x0800e020]
0800DFF8: 1040         and r0,r2
0800DFFA: 0322         mov r2,#0x3
0800DFFC: 1043         orr r0,r2
0800DFFE: 0880         strh r0,[r1,#0x0]
0800E000: a020         mov r0,#0xa0
0800E002: 0001         lsl r0,r0,#0x4
0800E004: d864         str r0,[r3,#0x4c]
0800E006: 1c65         str r4,[r3,#0x50]
0800E008: 5520         mov r0,#0x55
0800E00A: 5864         str r0,[r3,#0x44]
0800E00C: ab30         add r0,#0xab
0800E00E: 9864         str r0,[r3,#0x48]
0800E010: 987b         ldrb r0,[r3,#0xe]
0800E012: 0130         add r0,#0x1
0800E014: 9873         strb r0,[r3,#0xe]
0800E016: 10bc         pop {r4}
0800E018: 01bc         pop {r0}
0800E01A: 0047         bx r0
