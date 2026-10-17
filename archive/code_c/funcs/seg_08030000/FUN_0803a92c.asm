; undefined FUN_0803a92c(void)
; entry 0x803a92c  size 22 bytes

0803A92C: 00b5         push {lr}
0803A92E: 011c         add r1,r0,#0x0
0803A930: 0448         ldr r0,[0x0803a944]
0803A932: 0068         ldr r0,[r0,#0x0]
0803A934: e2f7fcf8     bl 0x0801cb30
0803A938: 0028         cmp r0,#0x0
0803A93A: 00d1         bne 0x0803a93e
0803A93C: 0020         mov r0,#0x0
0803A93E: 02bc         pop {r1}
0803A940: 0847         bx r1
