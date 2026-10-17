; undefined FUN_08053d40(void)
; entry 0x8053d40  size 62 bytes

08053D40: 10b5         push {r4,lr}
08053D42: 041c         add r4,r0,#0x0
08053D44: e07b         ldrb r0,[r4,#0xf]
08053D46: 0028         cmp r0,#0x0
08053D48: 07d1         bne 0x08053d5a
08053D4A: b021         mov r1,#0xb0
08053D4C: 8901         lsl r1,r1,#0x6
08053D4E: 201c         add r0,r4,#0x0
08053D50: c9f7d6f8     bl 0x0801cf00
08053D54: e07b         ldrb r0,[r4,#0xf]
08053D56: 0130         add r0,#0x1
08053D58: e073         strb r0,[r4,#0xf]
08053D5A: 201c         add r0,r4,#0x0
08053D5C: c9f748f9     bl 0x0801cff0
08053D60: 201c         add r0,r4,#0x0
08053D62: 01f025f9     bl 0x08054fb0
08053D66: 0648         ldr r0,[0x08053d80]
08053D68: 0189         ldrh r1,[r0,#0x8]
08053D6A: 0820         mov r0,#0x8
08053D6C: 0840         and r0,r1
08053D6E: 0028         cmp r0,#0x0
08053D70: 02d1         bne 0x08053d78
08053D72: 201c         add r0,r4,#0x0
08053D74: 01f03cf9     bl 0x08054ff0
08053D78: 10bc         pop {r4}
08053D7A: 01bc         pop {r0}
08053D7C: 0047         bx r0
