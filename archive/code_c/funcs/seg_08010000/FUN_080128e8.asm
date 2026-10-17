; undefined FUN_080128e8(void)
; entry 0x80128e8  size 26 bytes

080128E8: 00b5         push {lr}
080128EA: 031c         add r3,r0,#0x0
080128EC: 9a7b         ldrb r2,[r3,#0xe]
080128EE: 002a         cmp r2,#0x0
080128F0: 05d1         bne 0x080128fe
080128F2: 0448         ldr r0,[0x08012904]
080128F4: f021         mov r1,#0xf0
080128F6: 4903         lsl r1,r1,#0xd
080128F8: 0160         str r1,[r0,#0x0]
080128FA: 501c         add r0,r2,#0x1
080128FC: 9873         strb r0,[r3,#0xe]
080128FE: 01bc         pop {r0}
08012900: 0047         bx r0
