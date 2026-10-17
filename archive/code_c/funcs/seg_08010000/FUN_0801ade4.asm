; undefined FUN_0801ade4(void)
; entry 0x801ade4  size 36 bytes

0801ADE4: 00b5         push {lr}
0801ADE6: 011c         add r1,r0,#0x0
0801ADE8: 8b7b         ldrb r3,[r1,#0xe]
0801ADEA: 1a1c         add r2,r3,#0x0
0801ADEC: 002a         cmp r2,#0x0
0801ADEE: 09d1         bne 0x0801ae04
0801ADF0: f020         mov r0,#0xf0
0801ADF2: 8000         lsl r0,r0,#0x2
0801ADF4: c864         str r0,[r1,#0x4c]
0801ADF6: a020         mov r0,#0xa0
0801ADF8: 4000         lsl r0,r0,#0x1
0801ADFA: 0865         str r0,[r1,#0x50]
0801ADFC: 4a64         str r2,[r1,#0x44]
0801ADFE: 8a64         str r2,[r1,#0x48]
0801AE00: 581c         add r0,r3,#0x1
0801AE02: 8873         strb r0,[r1,#0xe]
0801AE04: 01bc         pop {r0}
0801AE06: 0047         bx r0
