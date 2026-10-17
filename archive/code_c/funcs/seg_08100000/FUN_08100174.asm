; undefined FUN_08100174(void)
; entry 0x8100174  size 36 bytes

08100174: f0b5         push {r4,r5,r6,r7,lr}
08100176: 4746         mov r7,r8
08100178: 80b4         push {r7}
0810017A: 061c         add r6,r0,#0x0
0810017C: b07b         ldrb r0,[r6,#0xe]
0810017E: 0528         cmp r0,#0x5
08100180: 00d9         bls 0x08100184
08100182: 13e1         b 0x081003ac
08100184: 8000         lsl r0,r0,#0x2
08100186: 0249         ldr r1,[0x08100190]
08100188: 4018         add r0,r0,r1
0810018A: 0068         ldr r0,[r0,#0x0]
0810018C: 8746         mov pc,r0
081003AC: 08bc         pop {r3}
081003AE: 9846         mov r8,r3
081003B0: f0bc         pop {r4,r5,r6,r7}
081003B2: 01bc         pop {r0}
081003B4: 0047         bx r0
