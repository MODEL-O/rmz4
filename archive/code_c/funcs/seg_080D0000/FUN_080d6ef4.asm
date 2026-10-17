; undefined FUN_080d6ef4(void)
; entry 0x80d6ef4  size 68 bytes

080D6EF4: 00b5         push {lr}
080D6EF6: 021c         add r2,r0,#0x0
080D6EF8: 0a48         ldr r0,[0x080d6f24]
080D6EFA: 417a         ldrb r1,[r0,#0x9]
080D6EFC: 0420         mov r0,#0x4
080D6EFE: 0840         and r0,r1
080D6F00: 0028         cmp r0,#0x0
080D6F02: 13d0         beq 0x080d6f2c
080D6F04: 917a         ldrb r1,[r2,#0xa]
080D6F06: fe20         mov r0,#0xfe
080D6F08: 0840         and r0,r1
080D6F0A: fd21         mov r1,#0xfd
080D6F0C: 0840         and r0,r1
080D6F0E: 9072         strb r0,[r2,#0xa]
080D6F10: 0549         ldr r1,[0x080d6f28]
080D6F12: 507a         ldrb r0,[r2,#0x9]
080D6F14: 8000         lsl r0,r0,#0x2
080D6F16: 4018         add r0,r0,r1
080D6F18: 0321         mov r1,#0x3
080D6F1A: d160         str r1,[r2,#0xc]
080D6F1C: 0068         ldr r0,[r0,#0x0]
080D6F1E: c068         ldr r0,[r0,#0xc]
080D6F20: 5061         str r0,[r2,#0x14]
080D6F22: 0be0         b 0x080d6f3c
080D6F2C: 0448         ldr r0,[0x080d6f40]
080D6F2E: 117c         ldrb r1,[r2,#0x10]
080D6F30: 8900         lsl r1,r1,#0x2
080D6F32: 0918         add r1,r1,r0
080D6F34: 0968         ldr r1,[r1,#0x0]
080D6F36: 101c         add r0,r2,#0x0
080D6F38: 52f022f8     bl 0x08128f80
080D6F3C: 01bc         pop {r0}
080D6F3E: 0047         bx r0
