; undefined FUN_08049dec(void)
; entry 0x8049dec  size 40 bytes

08049DEC: 00b5         push {lr}
08049DEE: bdf745ff     bl 0x08007c7c
08049DF2: 0004         lsl r0,r0,#0x10
08049DF4: 000c         lsr r0,r0,#0x10
08049DF6: 011c         add r1,r0,#0x0
08049DF8: 0f20         mov r0,#0xf
08049DFA: 0840         and r0,r1
08049DFC: 0f28         cmp r0,#0xf
08049DFE: 06d0         beq 0x08049e0e
08049E00: 8020         mov r0,#0x80
08049E02: 0002         lsl r0,r0,#0x8
08049E04: 0840         and r0,r1
08049E06: 0028         cmp r0,#0x0
08049E08: 01d1         bne 0x08049e0e
08049E0A: 081c         add r0,r1,#0x0
08049E0C: 00e0         b 0x08049e10
08049E0E: 0020         mov r0,#0x0
08049E10: 02bc         pop {r1}
08049E12: 0847         bx r1
