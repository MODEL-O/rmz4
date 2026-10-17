; undefined FUN_0807db54(void)
; entry 0x807db54  size 30 bytes

0807DB54: 10b5         push {r4,lr}
0807DB56: 041c         add r4,r0,#0x0
0807DB58: 00f02aff     bl 0x0807e9b0
0807DB5C: 0549         ldr r1,[0x0807db74]
0807DB5E: 607b         ldrb r0,[r4,#0xd]
0807DB60: 8000         lsl r0,r0,#0x2
0807DB62: 4018         add r0,r0,r1
0807DB64: 0168         ldr r1,[r0,#0x0]
0807DB66: 201c         add r0,r4,#0x0
0807DB68: abf00afa     bl 0x08128f80
0807DB6C: 10bc         pop {r4}
0807DB6E: 01bc         pop {r0}
0807DB70: 0047         bx r0
