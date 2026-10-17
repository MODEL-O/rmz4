; undefined FUN_080145d8(void)
; entry 0x80145d8  size 32 bytes

080145D8: 00b5         push {lr}
080145DA: 011c         add r1,r0,#0x0
080145DC: 8a7b         ldrb r2,[r1,#0xe]
080145DE: 002a         cmp r2,#0x0
080145E0: 08d1         bne 0x080145f4
080145E2: e120         mov r0,#0xe1
080145E4: 8000         lsl r0,r0,#0x2
080145E6: c864         str r0,[r1,#0x4c]
080145E8: c020         mov r0,#0xc0
080145EA: 4864         str r0,[r1,#0x44]
080145EC: 4030         add r0,#0x40
080145EE: 8864         str r0,[r1,#0x48]
080145F0: 501c         add r0,r2,#0x1
080145F2: 8873         strb r0,[r1,#0xe]
080145F4: 01bc         pop {r0}
080145F6: 0047         bx r0
