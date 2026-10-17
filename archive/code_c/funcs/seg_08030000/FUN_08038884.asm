; undefined FUN_08038884(void)
; entry 0x8038884  size 36 bytes

08038884: 00b5         push {lr}
08038886: 9f22         mov r2,#0x9f
08038888: 5200         lsl r2,r2,#0x1
0803888A: 8118         add r1,r0,r2
0803888C: 0878         ldrb r0,[r1,#0x0]
0803888E: 0028         cmp r0,#0x0
08038890: 02d1         bne 0x08038898
08038892: e020         mov r0,#0xe0
08038894: c000         lsl r0,r0,#0x3
08038896: 05e0         b 0x080388a4
08038898: 0878         ldrb r0,[r1,#0x0]
0803889A: 8021         mov r1,#0x80
0803889C: 4900         lsl r1,r1,#0x1
0803889E: 091a         sub r1,r1,r0
080388A0: c800         lsl r0,r1,#0x3
080388A2: 401a         sub r0,r0,r1
080388A4: 02bc         pop {r1}
080388A6: 0847         bx r1
