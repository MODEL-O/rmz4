; undefined FUN_080ed7f8(void)
; entry 0x80ed7f8  size 38 bytes

080ED7F8: 70b5         push {r4,r5,r6,lr}
080ED7FA: 041c         add r4,r0,#0x0
080ED7FC: 0904         lsl r1,r1,#0x10
080ED7FE: 0e0c         lsr r6,r1,#0x10
080ED800: 1206         lsl r2,r2,#0x18
080ED802: 150e         lsr r5,r2,#0x18
080ED804: e07b         ldrb r0,[r4,#0xf]
080ED806: 0528         cmp r0,#0x5
080ED808: 00d9         bls 0x080ed80c
080ED80A: afe0         b 0x080ed96c
080ED80C: 8000         lsl r0,r0,#0x2
080ED80E: 0249         ldr r1,[0x080ed818]
080ED810: 4018         add r0,r0,r1
080ED812: 0068         ldr r0,[r0,#0x0]
080ED814: 8746         mov pc,r0
080ED96C: 0020         mov r0,#0x0
080ED96E: 70bc         pop {r4,r5,r6}
080ED970: 02bc         pop {r1}
080ED972: 0847         bx r1
