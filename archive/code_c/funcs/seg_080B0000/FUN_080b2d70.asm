; undefined FUN_080b2d70(void)
; entry 0x80b2d70  size 66 bytes

080B2D70: 00b5         push {lr}
080B2D72: 021c         add r2,r0,#0x0
080B2D74: 917a         ldrb r1,[r2,#0xa]
080B2D76: 1020         mov r0,#0x10
080B2D78: 0840         and r0,r1
080B2D7A: 0028         cmp r0,#0x0
080B2D7C: 10d1         bne 0x080b2da0
080B2D7E: 0648         ldr r0,[0x080b2d98]
080B2D80: 0068         ldr r0,[r0,#0x0]
080B2D82: 416d         ldr r1,[r0,#0x54]
080B2D84: 506d         ldr r0,[r2,#0x54]
080B2D86: 8142         cmp r1,r0
080B2D88: 15da         bge 0x080b2db6
080B2D8A: 044a         ldr r2,[0x080b2d9c]
080B2D8C: 8018         add r0,r0,r2
080B2D8E: 8142         cmp r1,r0
080B2D90: 11dd         ble 0x080b2db6
080B2D92: 0120         mov r0,#0x1
080B2D94: 10e0         b 0x080b2db8
080B2DA0: 0648         ldr r0,[0x080b2dbc]
080B2DA2: 0068         ldr r0,[r0,#0x0]
080B2DA4: 416d         ldr r1,[r0,#0x54]
080B2DA6: 506d         ldr r0,[r2,#0x54]
080B2DA8: 8142         cmp r1,r0
080B2DAA: 04dd         ble 0x080b2db6
080B2DAC: 9022         mov r2,#0x90
080B2DAE: d201         lsl r2,r2,#0x7
080B2DB0: 8018         add r0,r0,r2
080B2DB2: 8142         cmp r1,r0
080B2DB4: eddb         blt 0x080b2d92
080B2DB6: 0020         mov r0,#0x0
080B2DB8: 02bc         pop {r1}
080B2DBA: 0847         bx r1
