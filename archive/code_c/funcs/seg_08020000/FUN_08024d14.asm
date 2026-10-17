; undefined FUN_08024d14(void)
; entry 0x8024d14  size 64 bytes

08024D14: 70b5         push {r4,r5,r6,lr}
08024D16: be21         mov r1,#0xbe
08024D18: 4900         lsl r1,r1,#0x1
08024D1A: 4618         add r6,r0,r1
08024D1C: 3078         ldrb r0,[r6,#0x0]
08024D1E: 0028         cmp r0,#0x0
08024D20: 14d1         bne 0x08024d4c
08024D22: 0c4c         ldr r4,[0x08024d54]
08024D24: 2089         ldrh r0,[r4,#0x8]
08024D26: 0125         mov r5,#0x1
08024D28: 2843         orr r0,r5
08024D2A: 2081         strh r0,[r4,#0x8]
08024D2C: 0a4a         ldr r2,[0x08024d58]
08024D2E: 1179         ldrb r1,[r2,#0x4]
08024D30: f720         mov r0,#0xf7
08024D32: 0840         and r0,r1
08024D34: 1071         strb r0,[r2,#0x4]
08024D36: 0120         mov r0,#0x1
08024D38: faf780fc     bl 0x0801f63c
08024D3C: 1034         add r4,#0x10
08024D3E: 0748         ldr r0,[0x08024d5c]
08024D40: c06a         ldr r0,[r0,#0x2c]
08024D42: 4168         ldr r1,[r0,#0x4]
08024D44: 201c         add r0,r4,#0x0
08024D46: 02f053fc     bl 0x080275f0
08024D4A: 3570         strb r5,[r6,#0x0]
08024D4C: 0020         mov r0,#0x0
08024D4E: 70bc         pop {r4,r5,r6}
08024D50: 02bc         pop {r1}
08024D52: 0847         bx r1
