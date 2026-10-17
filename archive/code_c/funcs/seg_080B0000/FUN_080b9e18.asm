; undefined FUN_080b9e18(void)
; entry 0x80b9e18  size 24 bytes

080B9E18: 00b5         push {lr}
080B9E1A: 011c         add r1,r0,#0x0
080B9E1C: c87c         ldrb r0,[r1,#0x13]
080B9E1E: 0028         cmp r0,#0x0
080B9E20: 03d0         beq 0x080b9e2a
080B9E22: 0138         sub r0,#0x1
080B9E24: c874         strb r0,[r1,#0x13]
080B9E26: 0020         mov r0,#0x0
080B9E28: 00e0         b 0x080b9e2c
080B9E2A: 0120         mov r0,#0x1
080B9E2C: 02bc         pop {r1}
080B9E2E: 0847         bx r1
