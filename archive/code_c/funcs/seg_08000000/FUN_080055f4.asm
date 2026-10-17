; undefined FUN_080055f4(void)
; entry 0x80055f4  size 20 bytes

080055F4: 00b5         push {lr}
080055F6: 0449         ldr r1,[0x08005608]
080055F8: 0020         mov r0,#0x0
080055FA: 0870         strb r0,[r1,#0x0]
080055FC: 4870         strb r0,[r1,#0x1]
080055FE: 8870         strb r0,[r1,#0x2]
08005600: 00f004f8     bl 0x0800560c
08005604: 01bc         pop {r0}
08005606: 0047         bx r0
