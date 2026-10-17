; undefined FUN_080388fc(void)
; entry 0x80388fc  size 32 bytes

080388FC: 00b5         push {lr}
080388FE: 9f22         mov r2,#0x9f
08038900: 5200         lsl r2,r2,#0x1
08038902: 8118         add r1,r0,r2
08038904: 0878         ldrb r0,[r1,#0x0]
08038906: 0028         cmp r0,#0x0
08038908: 02d1         bne 0x08038910
0803890A: 8020         mov r0,#0x80
0803890C: 4000         lsl r0,r0,#0x1
0803890E: 03e0         b 0x08038918
08038910: 0978         ldrb r1,[r1,#0x0]
08038912: 8020         mov r0,#0x80
08038914: 4000         lsl r0,r0,#0x1
08038916: 401a         sub r0,r0,r1
08038918: 02bc         pop {r1}
0803891A: 0847         bx r1
