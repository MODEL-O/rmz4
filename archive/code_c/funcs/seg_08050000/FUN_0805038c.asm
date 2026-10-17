; undefined FUN_0805038c(void)
; entry 0x805038c  size 24 bytes

0805038C: 00b5         push {lr}
0805038E: 011c         add r1,r0,#0x0
08050390: 0448         ldr r0,[0x080503a4]
08050392: 0068         ldr r0,[r0,#0x0]
08050394: 5431         add r1,#0x54
08050396: ccf7cbfb     bl 0x0801cb30
0805039A: 0028         cmp r0,#0x0
0805039C: 00d1         bne 0x080503a0
0805039E: 0020         mov r0,#0x0
080503A0: 02bc         pop {r1}
080503A2: 0847         bx r1
