; undefined FUN_08038b0c(void)
; entry 0x8038b0c  size 42 bytes

08038B0C: 00b5         push {lr}
08038B0E: 011c         add r1,r0,#0x0
08038B10: b430         add r0,#0xb4
08038B12: c07c         ldrb r0,[r0,#0x13]
08038B14: 0228         cmp r0,#0x2
08038B16: 06d1         bne 0x08038b26
08038B18: 081c         add r0,r1,#0x0
08038B1A: f230         add r0,#0xf2
08038B1C: 0078         ldrb r0,[r0,#0x0]
08038B1E: 0128         cmp r0,#0x1
08038B20: 06d9         bls 0x08038b30
08038B22: 0120         mov r0,#0x1
08038B24: 05e0         b 0x08038b32
08038B26: 081c         add r0,r1,#0x0
08038B28: f230         add r0,#0xf2
08038B2A: 0078         ldrb r0,[r0,#0x0]
08038B2C: 0228         cmp r0,#0x2
08038B2E: f8d0         beq 0x08038b22
08038B30: 0020         mov r0,#0x0
08038B32: 02bc         pop {r1}
08038B34: 0847         bx r1
