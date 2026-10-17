; undefined FUN_080b0318(void)
; entry 0x80b0318  size 24 bytes

080B0318: 00b5         push {lr}
080B031A: 011c         add r1,r0,#0x0
080B031C: 887c         ldrb r0,[r1,#0x12]
080B031E: 0028         cmp r0,#0x0
080B0320: 03d0         beq 0x080b032a
080B0322: 0138         sub r0,#0x1
080B0324: 8874         strb r0,[r1,#0x12]
080B0326: 0020         mov r0,#0x0
080B0328: 00e0         b 0x080b032c
080B032A: 0120         mov r0,#0x1
080B032C: 02bc         pop {r1}
080B032E: 0847         bx r1
