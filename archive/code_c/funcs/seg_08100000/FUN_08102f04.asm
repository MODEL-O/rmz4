; undefined FUN_08102f04(void)
; entry 0x8102f04  size 46 bytes

08102F04: 00b5         push {lr}
08102F06: 011c         add r1,r0,#0x0
08102F08: 0023         mov r3,#0x0
08102F0A: bc31         add r1,#0xbc
08102F0C: 0a88         ldrh r2,[r1,#0x0]
08102F0E: 0949         ldr r1,[0x08102f34]
08102F10: 8a42         cmp r2,r1
08102F12: 07d1         bne 0x08102f24
08102F14: 0849         ldr r1,[0x08102f38]
08102F16: 0968         ldr r1,[r1,#0x0]
08102F18: 8a79         ldrb r2,[r1,#0x6]
08102F1A: 0121         mov r1,#0x1
08102F1C: 1140         and r1,r2
08102F1E: 0029         cmp r1,#0x0
08102F20: 00d1         bne 0x08102f24
08102F22: 1823         mov r3,#0x18
08102F24: 002b         cmp r3,#0x0
08102F26: 02d0         beq 0x08102f2e
08102F28: 181c         add r0,r3,#0x0
08102F2A: 06f077f8     bl 0x0810901c
08102F2E: 02bc         pop {r1}
08102F30: 0847         bx r1
