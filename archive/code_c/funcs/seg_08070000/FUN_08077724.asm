; undefined FUN_08077724(void)
; entry 0x8077724  size 30 bytes

08077724: 10b5         push {r4,lr}
08077726: 041c         add r4,r0,#0x0
08077728: 01f0a2fd     bl 0x08079270
0807772C: 0549         ldr r1,[0x08077744]
0807772E: 607b         ldrb r0,[r4,#0xd]
08077730: 8000         lsl r0,r0,#0x2
08077732: 4018         add r0,r0,r1
08077734: 0168         ldr r1,[r0,#0x0]
08077736: 201c         add r0,r4,#0x0
08077738: b1f022fc     bl 0x08128f80
0807773C: 10bc         pop {r4}
0807773E: 01bc         pop {r0}
08077740: 0047         bx r0
