; undefined FUN_080ed974(void)
; entry 0x80ed974  size 38 bytes

080ED974: 70b5         push {r4,r5,r6,lr}
080ED976: 041c         add r4,r0,#0x0
080ED978: 0904         lsl r1,r1,#0x10
080ED97A: 0e0c         lsr r6,r1,#0x10
080ED97C: 1206         lsl r2,r2,#0x18
080ED97E: 150e         lsr r5,r2,#0x18
080ED980: e07b         ldrb r0,[r4,#0xf]
080ED982: 0528         cmp r0,#0x5
080ED984: 00d9         bls 0x080ed988
080ED986: b0e0         b 0x080edaea
080ED988: 8000         lsl r0,r0,#0x2
080ED98A: 0249         ldr r1,[0x080ed994]
080ED98C: 4018         add r0,r0,r1
080ED98E: 0068         ldr r0,[r0,#0x0]
080ED990: 8746         mov pc,r0
080EDAEA: 0020         mov r0,#0x0
080EDAEC: 70bc         pop {r4,r5,r6}
080EDAEE: 02bc         pop {r1}
080EDAF0: 0847         bx r1
