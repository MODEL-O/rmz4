; undefined FUN_080ef148(void)
; entry 0x80ef148  size 38 bytes

080EF148: 00b5         push {lr}
080EF14A: 021c         add r2,r0,#0x0
080EF14C: 517b         ldrb r1,[r2,#0xd]
080EF14E: 0029         cmp r1,#0x0
080EF150: 04d1         bne 0x080ef15c
080EF152: e020         mov r0,#0xe0
080EF154: c000         lsl r0,r0,#0x3
080EF156: d065         str r0,[r2,#0x5c]
080EF158: 481c         add r0,r1,#0x1
080EF15A: 5073         strb r0,[r2,#0xd]
080EF15C: 506d         ldr r0,[r2,#0x54]
080EF15E: d16d         ldr r1,[r2,#0x5c]
080EF160: 4018         add r0,r0,r1
080EF162: 5065         str r0,[r2,#0x54]
080EF164: 101c         add r0,r2,#0x0
080EF166: 2df743ff     bl 0x0801cff0
080EF16A: 01bc         pop {r0}
080EF16C: 0047         bx r0
