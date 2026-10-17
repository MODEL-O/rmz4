; undefined FUN_0801fba8(void)
; entry 0x801fba8  size 66 bytes

0801FBA8: 10b5         push {r4,lr}
0801FBAA: 021c         add r2,r0,#0x0
0801FBAC: 107f         ldrb r0,[r2,#0x1c]
0801FBAE: 011c         add r1,r0,#0x0
0801FBB0: 0029         cmp r1,#0x0
0801FBB2: 02d1         bne 0x0801fbba
0801FBB4: 5184         strh r1,[r2,#0x22]
0801FBB6: 0130         add r0,#0x1
0801FBB8: 1077         strb r0,[r2,#0x1c]
0801FBBA: d16c         ldr r1,[r2,#0x4c]
0801FBBC: 106d         ldr r0,[r2,#0x50]
0801FBBE: 0c18         add r4,r1,r0
0801FBC0: d464         str r4,[r2,#0x4c]
0801FBC2: 516d         ldr r1,[r2,#0x54]
0801FBC4: 906d         ldr r0,[r2,#0x58]
0801FBC6: 0918         add r1,r1,r0
0801FBC8: 5165         str r1,[r2,#0x54]
0801FBCA: 936c         ldr r3,[r2,#0x48]
0801FBCC: 002b         cmp r3,#0x0
0801FBCE: 05d0         beq 0x0801fbdc
0801FBD0: 1868         ldr r0,[r3,#0x0]
0801FBD2: 0019         add r0,r0,r4
0801FBD4: 1063         str r0,[r2,#0x30]
0801FBD6: 5868         ldr r0,[r3,#0x4]
0801FBD8: 4018         add r0,r0,r1
0801FBDA: 5063         str r0,[r2,#0x34]
0801FBDC: 517e         ldrb r1,[r2,#0x19]
0801FBDE: 101c         add r0,r2,#0x0
0801FBE0: fff7dafe     bl 0x0801f998
0801FBE4: 10bc         pop {r4}
0801FBE6: 01bc         pop {r0}
0801FBE8: 0047         bx r0
