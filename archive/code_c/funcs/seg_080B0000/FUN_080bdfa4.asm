; undefined FUN_080bdfa4(void)
; entry 0x80bdfa4  size 66 bytes

080BDFA4: 10b5         push {r4,lr}
080BDFA6: 041c         add r4,r0,#0x0
080BDFA8: 211c         add r1,r4,#0x0
080BDFAA: 5431         add r1,#0x54
080BDFAC: 0220         mov r0,#0x2
080BDFAE: 12f06bfe     bl 0x080d0c88
080BDFB2: 201c         add r0,r4,#0x0
080BDFB4: 8c30         add r0,#0x8c
080BDFB6: 0021         mov r1,#0x0
080BDFB8: 0160         str r1,[r0,#0x0]
080BDFBA: 0430         add r0,#0x4
080BDFBC: 0160         str r1,[r0,#0x0]
080BDFBE: 0430         add r0,#0x4
080BDFC0: 0170         strb r1,[r0,#0x0]
080BDFC2: a17a         ldrb r1,[r4,#0xa]
080BDFC4: fb20         mov r0,#0xfb
080BDFC6: 0840         and r0,r1
080BDFC8: fe21         mov r1,#0xfe
080BDFCA: 0840         and r0,r1
080BDFCC: a072         strb r0,[r4,#0xa]
080BDFCE: 0649         ldr r1,[0x080bdfe8]
080BDFD0: 607a         ldrb r0,[r4,#0x9]
080BDFD2: 8000         lsl r0,r0,#0x2
080BDFD4: 4018         add r0,r0,r1
080BDFD6: 0421         mov r1,#0x4
080BDFD8: e160         str r1,[r4,#0xc]
080BDFDA: 0068         ldr r0,[r0,#0x0]
080BDFDC: 0069         ldr r0,[r0,#0x10]
080BDFDE: 6061         str r0,[r4,#0x14]
080BDFE0: 10bc         pop {r4}
080BDFE2: 01bc         pop {r0}
080BDFE4: 0047         bx r0
