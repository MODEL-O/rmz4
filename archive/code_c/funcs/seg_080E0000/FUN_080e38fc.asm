; undefined FUN_080e38fc(void)
; entry 0x80e38fc  size 24 bytes

080E38FC: 00b5         push {lr}
080E38FE: 011c         add r1,r0,#0x0
080E3900: 887c         ldrb r0,[r1,#0x12]
080E3902: 0028         cmp r0,#0x0
080E3904: 03d0         beq 0x080e390e
080E3906: 0138         sub r0,#0x1
080E3908: 8874         strb r0,[r1,#0x12]
080E390A: 0020         mov r0,#0x0
080E390C: 00e0         b 0x080e3910
080E390E: 0120         mov r0,#0x1
080E3910: 02bc         pop {r1}
080E3912: 0847         bx r1
