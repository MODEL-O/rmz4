; undefined FUN_080b3804(void)
; entry 0x80b3804  size 24 bytes

080B3804: 00b5         push {lr}
080B3806: 011c         add r1,r0,#0x0
080B3808: c87c         ldrb r0,[r1,#0x13]
080B380A: 0028         cmp r0,#0x0
080B380C: 03d0         beq 0x080b3816
080B380E: 0138         sub r0,#0x1
080B3810: c874         strb r0,[r1,#0x13]
080B3812: 0020         mov r0,#0x0
080B3814: 00e0         b 0x080b3818
080B3816: 0120         mov r0,#0x1
080B3818: 02bc         pop {r1}
080B381A: 0847         bx r1
