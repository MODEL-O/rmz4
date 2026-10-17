; undefined FUN_080e8ee0(void)
; entry 0x80e8ee0  size 56 bytes

080E8EE0: 10b5         push {r4,lr}
080E8EE2: 031c         add r3,r0,#0x0
080E8EE4: da6a         ldr r2,[r3,#0x2c]
080E8EE6: 0c4c         ldr r4,[0x080e8f18]
080E8EE8: 002a         cmp r2,#0x0
080E8EEA: 0ad0         beq 0x080e8f02
080E8EEC: 107b         ldrb r0,[r2,#0xc]
080E8EEE: 0128         cmp r0,#0x1
080E8EF0: 07d8         bhi 0x080e8f02
080E8EF2: 507a         ldrb r0,[r2,#0x9]
080E8EF4: 8000         lsl r0,r0,#0x2
080E8EF6: 0019         add r0,r0,r4
080E8EF8: 0221         mov r1,#0x2
080E8EFA: d160         str r1,[r2,#0xc]
080E8EFC: 0068         ldr r0,[r0,#0x0]
080E8EFE: 8068         ldr r0,[r0,#0x8]
080E8F00: 5061         str r0,[r2,#0x14]
080E8F02: 587a         ldrb r0,[r3,#0x9]
080E8F04: 8000         lsl r0,r0,#0x2
080E8F06: 0019         add r0,r0,r4
080E8F08: 0421         mov r1,#0x4
080E8F0A: d960         str r1,[r3,#0xc]
080E8F0C: 0068         ldr r0,[r0,#0x0]
080E8F0E: 0069         ldr r0,[r0,#0x10]
080E8F10: 5861         str r0,[r3,#0x14]
080E8F12: 10bc         pop {r4}
080E8F14: 01bc         pop {r0}
080E8F16: 0047         bx r0
