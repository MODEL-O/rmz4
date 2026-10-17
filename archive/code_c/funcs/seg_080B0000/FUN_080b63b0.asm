; undefined FUN_080b63b0(void)
; entry 0x80b63b0  size 36 bytes

080B63B0: 10b5         push {r4,lr}
080B63B2: 041c         add r4,r0,#0x0
080B63B4: e07b         ldrb r0,[r4,#0xf]
080B63B6: 0028         cmp r0,#0x0
080B63B8: 06d1         bne 0x080b63c8
080B63BA: 0649         ldr r1,[0x080b63d4]
080B63BC: 201c         add r0,r4,#0x0
080B63BE: 66f79ffd     bl 0x0801cf00
080B63C2: e07b         ldrb r0,[r4,#0xf]
080B63C4: 0130         add r0,#0x1
080B63C6: e073         strb r0,[r4,#0xf]
080B63C8: 201c         add r0,r4,#0x0
080B63CA: 66f711fe     bl 0x0801cff0
080B63CE: 10bc         pop {r4}
080B63D0: 01bc         pop {r0}
080B63D2: 0047         bx r0
