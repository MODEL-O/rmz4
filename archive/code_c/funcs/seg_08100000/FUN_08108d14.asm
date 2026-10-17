; undefined FUN_08108d14(void)
; entry 0x8108d14  size 60 bytes

08108D14: 70b5         push {r4,r5,r6,lr}
08108D16: 041c         add r4,r0,#0x0
08108D18: 0d1c         add r5,r1,#0x0
08108D1A: 0d49         ldr r1,[0x08108d50]
08108D1C: 6018         add r0,r4,r1
08108D1E: 291c         add r1,r5,#0x0
08108D20: fef6acff     bl 0x08007c7c
08108D24: 0004         lsl r0,r0,#0x10
08108D26: 060c         lsr r6,r0,#0x10
08108D28: e020         mov r0,#0xe0
08108D2A: c000         lsl r0,r0,#0x3
08108D2C: 2418         add r4,r4,r0
08108D2E: 201c         add r0,r4,#0x0
08108D30: 291c         add r1,r5,#0x0
08108D32: fef6a3ff     bl 0x08007c7c
08108D36: 0004         lsl r0,r0,#0x10
08108D38: 000c         lsr r0,r0,#0x10
08108D3A: 0f2e         cmp r6,#0xf
08108D3C: 00d1         bne 0x08108d40
08108D3E: 0026         mov r6,#0x0
08108D40: 0f28         cmp r0,#0xf
08108D42: 00d1         bne 0x08108d46
08108D44: 0020         mov r0,#0x0
08108D46: 0643         orr r6,r0
08108D48: 301c         add r0,r6,#0x0
08108D4A: 70bc         pop {r4,r5,r6}
08108D4C: 02bc         pop {r1}
08108D4E: 0847         bx r1
