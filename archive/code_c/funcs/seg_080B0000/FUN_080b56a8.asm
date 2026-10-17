; undefined FUN_080b56a8(void)
; entry 0x80b56a8  size 24 bytes

080B56A8: 00b5         push {lr}
080B56AA: 011c         add r1,r0,#0x0
080B56AC: 887c         ldrb r0,[r1,#0x12]
080B56AE: 0028         cmp r0,#0x0
080B56B0: 03d0         beq 0x080b56ba
080B56B2: 0138         sub r0,#0x1
080B56B4: 8874         strb r0,[r1,#0x12]
080B56B6: 0020         mov r0,#0x0
080B56B8: 00e0         b 0x080b56bc
080B56BA: 0120         mov r0,#0x1
080B56BC: 02bc         pop {r1}
080B56BE: 0847         bx r1
