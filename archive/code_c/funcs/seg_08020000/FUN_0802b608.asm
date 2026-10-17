; undefined FUN_0802b608(void)
; entry 0x802b608  size 20 bytes

0802B608: 00b5         push {lr}
0802B60A: f130         add r0,#0xf1
0802B60C: 0078         ldrb r0,[r0,#0x0]
0802B60E: 0628         cmp r0,#0x6
0802B610: 01d8         bhi 0x0802b616
0802B612: 0020         mov r0,#0x0
0802B614: 00e0         b 0x0802b618
0802B616: 0120         mov r0,#0x1
0802B618: 02bc         pop {r1}
0802B61A: 0847         bx r1
