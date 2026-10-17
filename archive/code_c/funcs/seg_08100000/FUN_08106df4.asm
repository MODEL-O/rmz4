; undefined FUN_08106df4(void)
; entry 0x8106df4  size 28 bytes

08106DF4: 10b5         push {r4,lr}
08106DF6: 041c         add r4,r0,#0x0
08106DF8: 607b         ldrb r0,[r4,#0xd]
08106DFA: 0728         cmp r0,#0x7
08106DFC: 00d9         bls 0x08106e00
08106DFE: 8fe0         b 0x08106f20
08106E00: 8000         lsl r0,r0,#0x2
08106E02: 0249         ldr r1,[0x08106e0c]
08106E04: 4018         add r0,r0,r1
08106E06: 0068         ldr r0,[r0,#0x0]
08106E08: 8746         mov pc,r0
08106F20: 10bc         pop {r4}
08106F22: 01bc         pop {r0}
08106F24: 0047         bx r0
