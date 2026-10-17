; undefined FUN_081057e8(void)
; entry 0x81057e8  size 38 bytes

081057E8: 70b5         push {r4,r5,r6,lr}
081057EA: 041c         add r4,r0,#0x0
081057EC: 0904         lsl r1,r1,#0x10
081057EE: 0e0c         lsr r6,r1,#0x10
081057F0: 1206         lsl r2,r2,#0x18
081057F2: 150e         lsr r5,r2,#0x18
081057F4: e07b         ldrb r0,[r4,#0xf]
081057F6: 0528         cmp r0,#0x5
081057F8: 00d9         bls 0x081057fc
081057FA: a7e0         b 0x0810594c
081057FC: 8000         lsl r0,r0,#0x2
081057FE: 0249         ldr r1,[0x08105808]
08105800: 4018         add r0,r0,r1
08105802: 0068         ldr r0,[r0,#0x0]
08105804: 8746         mov pc,r0
0810594C: 0020         mov r0,#0x0
0810594E: 70bc         pop {r4,r5,r6}
08105950: 02bc         pop {r1}
08105952: 0847         bx r1
