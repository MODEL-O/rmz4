; undefined FUN_0802c62c(void)
; entry 0x802c62c  size 68 bytes

0802C62C: 00b5         push {lr}
0802C62E: 021c         add r2,r0,#0x0
0802C630: 917a         ldrb r1,[r2,#0xa]
0802C632: 1023         mov r3,#0x10
0802C634: 181c         add r0,r3,#0x0
0802C636: 0840         and r0,r1
0802C638: 0028         cmp r0,#0x0
0802C63A: 07d0         beq 0x0802c64c
0802C63C: 9621         mov r1,#0x96
0802C63E: 8900         lsl r1,r1,#0x2
0802C640: 5018         add r0,r2,r1
0802C642: 0068         ldr r0,[r0,#0x0]
0802C644: 1840         and r0,r3
0802C646: 0028         cmp r0,#0x0
0802C648: 07d1         bne 0x0802c65a
0802C64A: 0ee0         b 0x0802c66a
0802C64C: 9621         mov r1,#0x96
0802C64E: 8900         lsl r1,r1,#0x2
0802C650: 5018         add r0,r2,r1
0802C652: 0068         ldr r0,[r0,#0x0]
0802C654: 2021         mov r1,#0x20
0802C656: 0840         and r0,r1
0802C658: f5e7         b 0x0802c646
0802C65A: 9e21         mov r1,#0x9e
0802C65C: 8900         lsl r1,r1,#0x2
0802C65E: 5018         add r0,r2,r1
0802C660: 0078         ldrb r0,[r0,#0x0]
0802C662: 0028         cmp r0,#0x0
0802C664: 01d1         bne 0x0802c66a
0802C666: 0120         mov r0,#0x1
0802C668: 00e0         b 0x0802c66c
0802C66A: 0020         mov r0,#0x0
0802C66C: 02bc         pop {r1}
0802C66E: 0847         bx r1
