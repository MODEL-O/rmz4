; undefined FUN_0801ebd0(void)
; entry 0x801ebd0  size 28 bytes

0801EBD0: 00b5         push {lr}
0801EBD2: 0004         lsl r0,r0,#0x10
0801EBD4: 010c         lsr r1,r0,#0x10
0801EBD6: 4029         cmp r1,#0x40
0801EBD8: 06d8         bhi 0x0801ebe8
0801EBDA: 044a         ldr r2,[0x0801ebec]
0801EBDC: d089         ldrh r0,[r2,#0xe]
0801EBDE: 4118         add r1,r0,r1
0801EBE0: 0348         ldr r0,[0x0801ebf0]
0801EBE2: 8142         cmp r1,r0
0801EBE4: 00dc         bgt 0x0801ebe8
0801EBE6: d181         strh r1,[r2,#0xe]
0801EBE8: 01bc         pop {r0}
0801EBEA: 0047         bx r0
