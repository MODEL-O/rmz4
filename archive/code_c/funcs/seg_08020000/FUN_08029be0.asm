; undefined FUN_08029be0(void)
; entry 0x8029be0  size 38 bytes

08029BE0: f0b5         push {r4,r5,r6,r7,lr}
08029BE2: 81b0         sub sp,#0x4
08029BE4: 061c         add r6,r0,#0x0
08029BE6: 3078         ldrb r0,[r6,#0x0]
08029BE8: 0828         cmp r0,#0x8
08029BEA: 00d9         bls 0x08029bee
08029BEC: 20e2         b 0x0802a030
08029BEE: 8000         lsl r0,r0,#0x2
08029BF0: 0149         ldr r1,[0x08029bf8]
08029BF2: 4018         add r0,r0,r1
08029BF4: 0068         ldr r0,[r0,#0x0]
08029BF6: 8746         mov pc,r0
0802A030: 00f034fd     bl 0x0802aa9c
0802A034: 0120         mov r0,#0x1
0802A036: 01b0         add sp,#0x4
0802A038: f0bc         pop {r4,r5,r6,r7}
0802A03A: 02bc         pop {r1}
0802A03C: 0847         bx r1
