; undefined FUN_08113fa4(void)
; entry 0x8113fa4  size 32 bytes

08113FA4: 70b5         push {r4,r5,r6,lr}
08113FA6: 061c         add r6,r0,#0x0
08113FA8: b078         ldrb r0,[r6,#0x2]
08113FAA: 0928         cmp r0,#0x9
08113FAC: 00d9         bls 0x08113fb0
08113FAE: a5e1         b 0x081142fc
08113FB0: 8000         lsl r0,r0,#0x2
08113FB2: 0249         ldr r1,[0x08113fbc]
08113FB4: 4018         add r0,r0,r1
08113FB6: 0068         ldr r0,[r0,#0x0]
08113FB8: 8746         mov pc,r0
081142FC: faf7e6f8     bl 0x0810e4cc
08114300: 70bc         pop {r4,r5,r6}
08114302: 01bc         pop {r0}
08114304: 0047         bx r0
