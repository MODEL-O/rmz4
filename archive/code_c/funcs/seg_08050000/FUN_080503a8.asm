; undefined FUN_080503a8(void)
; entry 0x80503a8  size 28 bytes

080503A8: 00b5         push {lr}
080503AA: 011c         add r1,r0,#0x0
080503AC: 0448         ldr r0,[0x080503c0]
080503AE: 0068         ldr r0,[r0,#0x0]
080503B0: 5431         add r1,#0x54
080503B2: ccf7bdfb     bl 0x0801cb30
080503B6: 0028         cmp r0,#0x0
080503B8: 04d1         bne 0x080503c4
080503BA: 0020         mov r0,#0x0
080503BC: 03e0         b 0x080503c6
080503C4: 5430         add r0,#0x54
080503C6: 02bc         pop {r1}
080503C8: 0847         bx r1
