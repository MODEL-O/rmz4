; undefined FUN_08048cec(void)
; entry 0x8048cec  size 40 bytes

08048CEC: 00b5         push {lr}
08048CEE: bef7c5ff     bl 0x08007c7c
08048CF2: 0004         lsl r0,r0,#0x10
08048CF4: 000c         lsr r0,r0,#0x10
08048CF6: 011c         add r1,r0,#0x0
08048CF8: 0f20         mov r0,#0xf
08048CFA: 0840         and r0,r1
08048CFC: 0f28         cmp r0,#0xf
08048CFE: 06d0         beq 0x08048d0e
08048D00: 8020         mov r0,#0x80
08048D02: 0002         lsl r0,r0,#0x8
08048D04: 0840         and r0,r1
08048D06: 0028         cmp r0,#0x0
08048D08: 01d1         bne 0x08048d0e
08048D0A: 081c         add r0,r1,#0x0
08048D0C: 00e0         b 0x08048d10
08048D0E: 0020         mov r0,#0x0
08048D10: 02bc         pop {r1}
08048D12: 0847         bx r1
