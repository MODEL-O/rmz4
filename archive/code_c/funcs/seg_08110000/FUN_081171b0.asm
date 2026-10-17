; undefined FUN_081171b0(void)
; entry 0x81171b0  size 28 bytes

081171B0: 30b5         push {r4,r5,lr}
081171B2: 051c         add r5,r0,#0x0
081171B4: e878         ldrb r0,[r5,#0x3]
081171B6: 0928         cmp r0,#0x9
081171B8: 00d9         bls 0x081171bc
081171BA: 11e1         b 0x081173e0
081171BC: 8000         lsl r0,r0,#0x2
081171BE: 0249         ldr r1,[0x081171c8]
081171C0: 4018         add r0,r0,r1
081171C2: 0068         ldr r0,[r0,#0x0]
081171C4: 8746         mov pc,r0
081173E0: 30bc         pop {r4,r5}
081173E2: 01bc         pop {r0}
081173E4: 0047         bx r0
