; undefined FUN_0803a948(void)
; entry 0x803a948  size 22 bytes

0803A948: 00b5         push {lr}
0803A94A: 011c         add r1,r0,#0x0
0803A94C: 0448         ldr r0,[0x0803a960]
0803A94E: 0068         ldr r0,[r0,#0x0]
0803A950: e2f7eef8     bl 0x0801cb30
0803A954: 0028         cmp r0,#0x0
0803A956: 00d1         bne 0x0803a95a
0803A958: 0020         mov r0,#0x0
0803A95A: 02bc         pop {r1}
0803A95C: 0847         bx r1
