; undefined FUN_080e1ee4(void)
; entry 0x80e1ee4  size 64 bytes

080E1EE4: 10b5         push {r4,lr}
080E1EE6: 041c         add r4,r0,#0x0
080E1EE8: 3bf782f8     bl 0x0801cff0
080E1EEC: 606d         ldr r0,[r4,#0x54]
080E1EEE: e16d         ldr r1,[r4,#0x5c]
080E1EF0: 4018         add r0,r0,r1
080E1EF2: 6065         str r0,[r4,#0x54]
080E1EF4: a06d         ldr r0,[r4,#0x58]
080E1EF6: 216e         ldr r1,[r4,#0x60]
080E1EF8: 4018         add r0,r0,r1
080E1EFA: a065         str r0,[r4,#0x58]
080E1EFC: 201c         add r0,r4,#0x0
080E1EFE: 7330         add r0,#0x73
080E1F00: 0078         ldrb r0,[r0,#0x0]
080E1F02: 0328         cmp r0,#0x3
080E1F04: 0bd1         bne 0x080e1f1e
080E1F06: 0749         ldr r1,[0x080e1f24]
080E1F08: 607a         ldrb r0,[r4,#0x9]
080E1F0A: 8000         lsl r0,r0,#0x2
080E1F0C: 4018         add r0,r0,r1
080E1F0E: 0221         mov r1,#0x2
080E1F10: e160         str r1,[r4,#0xc]
080E1F12: 0068         ldr r0,[r0,#0x0]
080E1F14: 8068         ldr r0,[r0,#0x8]
080E1F16: 6061         str r0,[r4,#0x14]
080E1F18: 201c         add r0,r4,#0x0
080E1F1A: fff747ff     bl 0x080e1dac
080E1F1E: 10bc         pop {r4}
080E1F20: 01bc         pop {r0}
080E1F22: 0047         bx r0
