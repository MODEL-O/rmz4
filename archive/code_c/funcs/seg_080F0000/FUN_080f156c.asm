; undefined FUN_080f156c(void)
; entry 0x80f156c  size 34 bytes

080F156C: 10b5         push {r4,lr}
080F156E: 041c         add r4,r0,#0x0
080F1570: 607c         ldrb r0,[r4,#0x11]
080F1572: 0628         cmp r0,#0x6
080F1574: 00d9         bls 0x080f1578
080F1576: 84e0         b 0x080f1682
080F1578: 8000         lsl r0,r0,#0x2
080F157A: 0249         ldr r1,[0x080f1584]
080F157C: 4018         add r0,r0,r1
080F157E: 0068         ldr r0,[r0,#0x0]
080F1580: 8746         mov pc,r0
080F1682: 201c         add r0,r4,#0x0
080F1684: 2bf7b4fc     bl 0x0801cff0
080F1688: 10bc         pop {r4}
080F168A: 01bc         pop {r0}
080F168C: 0047         bx r0
