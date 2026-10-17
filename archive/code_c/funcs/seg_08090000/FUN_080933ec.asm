; undefined FUN_080933ec(void)
; entry 0x80933ec  size 32 bytes

080933EC: 10b5         push {r4,lr}
080933EE: 041c         add r4,r0,#0x0
080933F0: 616d         ldr r1,[r4,#0x54]
080933F2: a26d         ldr r2,[r4,#0x58]
080933F4: 01f0def9     bl 0x080947b4
080933F8: 011c         add r1,r0,#0x0
080933FA: 0029         cmp r1,#0x0
080933FC: 03d1         bne 0x08093406
080933FE: 0820         mov r0,#0x8
08093400: 6073         strb r0,[r4,#0xd]
08093402: a173         strb r1,[r4,#0xe]
08093404: e173         strb r1,[r4,#0xf]
08093406: 10bc         pop {r4}
08093408: 01bc         pop {r0}
0809340A: 0047         bx r0
