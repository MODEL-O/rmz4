; undefined FUN_08066be0(void)
; entry 0x8066be0  size 44 bytes

08066BE0: 0028         cmp r0,#0x0
08066BE2: 28d0         beq 0x08066c36
08066BE4: 0021         mov r1,#0x0
08066BE6: 0291         str r1,[sp,#0x8]
08066BE8: e87b         ldrb r0,[r5,#0xf]
08066BEA: 0028         cmp r0,#0x0
08066BEC: 00d1         bne 0x08066bf0
08066BEE: 0549         ldr r1,[0x08066c04]
08066BF0: 02a8         add r0,sp,#0x8
08066BF2: 4160         str r1,[r0,#0x4]
08066BF4: 011c         add r1,r0,#0x0
08066BF6: 281c         add r0,r5,#0x0
08066BF8: 6bf0b8fe     bl 0x080d296c
08066BFC: e862         str r0,[r5,#0x2c]
08066BFE: 0220         mov r0,#0x2
08066C00: 6873         strb r0,[r5,#0xd]
08066C02: 18e0         b 0x08066c36
08066C36: 04b0         add sp,#0x10
08066C38: 70bc         pop {r4,r5,r6}
08066C3A: 01bc         pop {r0}
08066C3C: 0047         bx r0
