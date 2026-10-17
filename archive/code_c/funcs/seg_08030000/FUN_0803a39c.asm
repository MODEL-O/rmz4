; undefined FUN_0803a39c(void)
; entry 0x803a39c  size 20 bytes

0803A39C: 00b5         push {lr}
0803A39E: 0a06         lsl r2,r1,#0x18
0803A3A0: 120e         lsr r2,r2,#0x18
0803A3A2: 011c         add r1,r0,#0x0
0803A3A4: b431         add r1,#0xb4
0803A3A6: c97b         ldrb r1,[r1,#0xf]
0803A3A8: 0af05af9     bl 0x08044660
0803A3AC: 02bc         pop {r1}
0803A3AE: 0847         bx r1
