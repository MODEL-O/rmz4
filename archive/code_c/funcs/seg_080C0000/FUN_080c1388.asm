; undefined FUN_080c1388(void)
; entry 0x80c1388  size 38 bytes

080C1388: 00b5         push {lr}
080C138A: 021c         add r2,r0,#0x0
080C138C: d17b         ldrb r1,[r2,#0xf]
080C138E: 0029         cmp r1,#0x0
080C1390: 0bd1         bne 0x080c13aa
080C1392: 8c30         add r0,#0x8c
080C1394: 0160         str r1,[r0,#0x0]
080C1396: 0430         add r0,#0x4
080C1398: 0160         str r1,[r0,#0x0]
080C139A: 0430         add r0,#0x4
080C139C: 0170         strb r1,[r0,#0x0]
080C139E: 917a         ldrb r1,[r2,#0xa]
080C13A0: fb20         mov r0,#0xfb
080C13A2: 0840         and r0,r1
080C13A4: fe21         mov r1,#0xfe
080C13A6: 0840         and r0,r1
080C13A8: 9072         strb r0,[r2,#0xa]
080C13AA: 01bc         pop {r0}
080C13AC: 0047         bx r0
