; undefined FUN_0801fb78(void)
; entry 0x801fb78  size 46 bytes

0801FB78: 00b5         push {lr}
0801FB7A: 021c         add r2,r0,#0x0
0801FB7C: 107f         ldrb r0,[r2,#0x1c]
0801FB7E: 011c         add r1,r0,#0x0
0801FB80: 0029         cmp r1,#0x0
0801FB82: 02d1         bne 0x0801fb8a
0801FB84: 5184         strh r1,[r2,#0x22]
0801FB86: 0130         add r0,#0x1
0801FB88: 1077         strb r0,[r2,#0x1c]
0801FB8A: 106b         ldr r0,[r2,#0x30]
0801FB8C: 116c         ldr r1,[r2,#0x40]
0801FB8E: 4018         add r0,r0,r1
0801FB90: 1063         str r0,[r2,#0x30]
0801FB92: 506b         ldr r0,[r2,#0x34]
0801FB94: 516c         ldr r1,[r2,#0x44]
0801FB96: 4018         add r0,r0,r1
0801FB98: 5063         str r0,[r2,#0x34]
0801FB9A: 517e         ldrb r1,[r2,#0x19]
0801FB9C: 101c         add r0,r2,#0x0
0801FB9E: fff7fbfe     bl 0x0801f998
0801FBA2: 01bc         pop {r0}
0801FBA4: 0047         bx r0
