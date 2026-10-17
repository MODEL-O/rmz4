; undefined FUN_08105bb0(void)
; entry 0x8105bb0  size 28 bytes

08105BB0: 10b5         push {r4,lr}
08105BB2: 041c         add r4,r0,#0x0
08105BB4: 607b         ldrb r0,[r4,#0xd]
08105BB6: 0928         cmp r0,#0x9
08105BB8: 00d9         bls 0x08105bbc
08105BBA: e3e0         b 0x08105d84
08105BBC: 8000         lsl r0,r0,#0x2
08105BBE: 0249         ldr r1,[0x08105bc8]
08105BC0: 4018         add r0,r0,r1
08105BC2: 0068         ldr r0,[r0,#0x0]
08105BC4: 8746         mov pc,r0
08105D84: 10bc         pop {r4}
08105D86: 01bc         pop {r0}
08105D88: 0047         bx r0
