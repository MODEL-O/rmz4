; undefined FUN_08094f00(void)
; entry 0x8094f00  size 50 bytes

08094F00: 00b5         push {lr}
08094F02: 82b0         sub sp,#0x8
08094F04: 027c         ldrb r2,[r0,#0x10]
08094F06: 416d         ldr r1,[r0,#0x54]
08094F08: 0091         str r1,[sp,#0x0]
08094F0A: 806d         ldr r0,[r0,#0x58]
08094F0C: 0549         ldr r1,[0x08094f24]
08094F0E: 4018         add r0,r0,r1
08094F10: 0190         str r0,[sp,#0x4]
08094F12: 022a         cmp r2,#0x2
08094F14: 08d1         bne 0x08094f28
08094F16: 0120         mov r0,#0x1
08094F18: ff21         mov r1,#0xff
08094F1A: 6a46         mov r2,sp
08094F1C: 95f734fe     bl 0x0802ab88
08094F20: 07e0         b 0x08094f32
08094F28: 0120         mov r0,#0x1
08094F2A: 1821         mov r1,#0x18
08094F2C: 6a46         mov r2,sp
08094F2E: 95f72bfe     bl 0x0802ab88
08094F32: 02b0         add sp,#0x8
08094F34: 01bc         pop {r0}
08094F36: 0047         bx r0
