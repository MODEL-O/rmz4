; undefined FUN_080333a8(void)
; entry 0x80333a8  size 48 bytes

080333A8: 10b5         push {r4,lr}
080333AA: 041c         add r4,r0,#0x0
080333AC: e07b         ldrb r0,[r4,#0xf]
080333AE: 0028         cmp r0,#0x0
080333B0: 06d1         bne 0x080333c0
080333B2: 0949         ldr r1,[0x080333d8]
080333B4: 201c         add r0,r4,#0x0
080333B6: e9f7a3fd     bl 0x0801cf00
080333BA: e07b         ldrb r0,[r4,#0xf]
080333BC: 0130         add r0,#0x1
080333BE: e073         strb r0,[r4,#0xf]
080333C0: 201c         add r0,r4,#0x0
080333C2: 7330         add r0,#0x73
080333C4: 0078         ldrb r0,[r0,#0x0]
080333C6: 0328         cmp r0,#0x3
080333C8: 03d1         bne 0x080333d2
080333CA: 0020         mov r0,#0x0
080333CC: 6073         strb r0,[r4,#0xd]
080333CE: a073         strb r0,[r4,#0xe]
080333D0: e073         strb r0,[r4,#0xf]
080333D2: 10bc         pop {r4}
080333D4: 01bc         pop {r0}
080333D6: 0047         bx r0
