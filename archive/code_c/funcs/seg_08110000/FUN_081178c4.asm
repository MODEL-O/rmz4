; undefined FUN_081178c4(void)
; entry 0x81178c4  size 28 bytes

081178C4: 30b5         push {r4,r5,lr}
081178C6: 051c         add r5,r0,#0x0
081178C8: e878         ldrb r0,[r5,#0x3]
081178CA: 1128         cmp r0,#0x11
081178CC: 00d9         bls 0x081178d0
081178CE: b9e0         b 0x08117a44
081178D0: 8000         lsl r0,r0,#0x2
081178D2: 0249         ldr r1,[0x081178dc]
081178D4: 4018         add r0,r0,r1
081178D6: 0068         ldr r0,[r0,#0x0]
081178D8: 8746         mov pc,r0
08117A44: 30bc         pop {r4,r5}
08117A46: 01bc         pop {r0}
08117A48: 0047         bx r0
