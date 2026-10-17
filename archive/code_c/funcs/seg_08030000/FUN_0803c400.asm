; undefined FUN_0803c400(void)
; entry 0x803c400  size 26 bytes

0803C400: 00b5         push {lr}
0803C402: 8c30         add r0,#0x8c
0803C404: 0068         ldr r0,[r0,#0x0]
0803C406: 8021         mov r1,#0x80
0803C408: 4901         lsl r1,r1,#0x5
0803C40A: 0840         and r0,r1
0803C40C: 0028         cmp r0,#0x0
0803C40E: 01d1         bne 0x0803c414
0803C410: 0020         mov r0,#0x0
0803C412: 00e0         b 0x0803c416
0803C414: 0120         mov r0,#0x1
0803C416: 02bc         pop {r1}
0803C418: 0847         bx r1
