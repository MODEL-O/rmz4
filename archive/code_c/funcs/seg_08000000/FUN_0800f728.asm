; undefined FUN_0800f728(void)
; entry 0x800f728  size 28 bytes

0800F728: 10b5         push {r4,lr}
0800F72A: 041c         add r4,r0,#0x0
0800F72C: a07b         ldrb r0,[r4,#0xe]
0800F72E: 0028         cmp r0,#0x0
0800F730: 05d1         bne 0x0800f73e
0800F732: 7920         mov r0,#0x79
0800F734: f3f7ecf9     bl 0x08002b10
0800F738: a07b         ldrb r0,[r4,#0xe]
0800F73A: 0130         add r0,#0x1
0800F73C: a073         strb r0,[r4,#0xe]
0800F73E: 10bc         pop {r4}
0800F740: 01bc         pop {r0}
0800F742: 0047         bx r0
