; undefined FUN_08117660(void)
; entry 0x8117660  size 28 bytes

08117660: f0b5         push {r4,r5,r6,r7,lr}
08117662: 051c         add r5,r0,#0x0
08117664: e878         ldrb r0,[r5,#0x3]
08117666: 1528         cmp r0,#0x15
08117668: 00d9         bls 0x0811766c
0811766A: 19e1         b 0x081178a0
0811766C: 8000         lsl r0,r0,#0x2
0811766E: 0249         ldr r1,[0x08117678]
08117670: 4018         add r0,r0,r1
08117672: 0068         ldr r0,[r0,#0x0]
08117674: 8746         mov pc,r0
081178A0: f0bc         pop {r4,r5,r6,r7}
081178A2: 01bc         pop {r0}
081178A4: 0047         bx r0
