; undefined FUN_080387e4(void)
; entry 0x80387e4  size 36 bytes

080387E4: 00b5         push {lr}
080387E6: 9f22         mov r2,#0x9f
080387E8: 5200         lsl r2,r2,#0x1
080387EA: 8118         add r1,r0,r2
080387EC: 0878         ldrb r0,[r1,#0x0]
080387EE: 0028         cmp r0,#0x0
080387F0: 02d1         bne 0x080387f8
080387F2: a020         mov r0,#0xa0
080387F4: c000         lsl r0,r0,#0x3
080387F6: 05e0         b 0x08038804
080387F8: 0878         ldrb r0,[r1,#0x0]
080387FA: 8021         mov r1,#0x80
080387FC: 4900         lsl r1,r1,#0x1
080387FE: 091a         sub r1,r1,r0
08038800: 8800         lsl r0,r1,#0x2
08038802: 4018         add r0,r0,r1
08038804: 02bc         pop {r1}
08038806: 0847         bx r1
