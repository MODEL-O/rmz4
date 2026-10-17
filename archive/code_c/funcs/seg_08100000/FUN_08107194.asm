; undefined FUN_08107194(void)
; entry 0x8107194  size 28 bytes

08107194: 10b5         push {r4,lr}
08107196: 041c         add r4,r0,#0x0
08107198: 607b         ldrb r0,[r4,#0xd]
0810719A: 0f28         cmp r0,#0xf
0810719C: 00d9         bls 0x081071a0
0810719E: 3be1         b 0x08107418
081071A0: 8000         lsl r0,r0,#0x2
081071A2: 0249         ldr r1,[0x081071ac]
081071A4: 4018         add r0,r0,r1
081071A6: 0068         ldr r0,[r0,#0x0]
081071A8: 8746         mov pc,r0
08107418: 10bc         pop {r4}
0810741A: 01bc         pop {r0}
0810741C: 0047         bx r0
