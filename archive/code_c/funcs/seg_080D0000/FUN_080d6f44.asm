; undefined FUN_080d6f44(void)
; entry 0x80d6f44  size 68 bytes

080D6F44: 00b5         push {lr}
080D6F46: 021c         add r2,r0,#0x0
080D6F48: 0a48         ldr r0,[0x080d6f74]
080D6F4A: 417a         ldrb r1,[r0,#0x9]
080D6F4C: 0420         mov r0,#0x4
080D6F4E: 0840         and r0,r1
080D6F50: 0028         cmp r0,#0x0
080D6F52: 13d0         beq 0x080d6f7c
080D6F54: 917a         ldrb r1,[r2,#0xa]
080D6F56: fe20         mov r0,#0xfe
080D6F58: 0840         and r0,r1
080D6F5A: fd21         mov r1,#0xfd
080D6F5C: 0840         and r0,r1
080D6F5E: 9072         strb r0,[r2,#0xa]
080D6F60: 0549         ldr r1,[0x080d6f78]
080D6F62: 507a         ldrb r0,[r2,#0x9]
080D6F64: 8000         lsl r0,r0,#0x2
080D6F66: 4018         add r0,r0,r1
080D6F68: 0321         mov r1,#0x3
080D6F6A: d160         str r1,[r2,#0xc]
080D6F6C: 0068         ldr r0,[r0,#0x0]
080D6F6E: c068         ldr r0,[r0,#0xc]
080D6F70: 5061         str r0,[r2,#0x14]
080D6F72: 0be0         b 0x080d6f8c
080D6F7C: 0448         ldr r0,[0x080d6f90]
080D6F7E: 117c         ldrb r1,[r2,#0x10]
080D6F80: 8900         lsl r1,r1,#0x2
080D6F82: 0918         add r1,r1,r0
080D6F84: 0968         ldr r1,[r1,#0x0]
080D6F86: 101c         add r0,r2,#0x0
080D6F88: 51f0faff     bl 0x08128f80
080D6F8C: 01bc         pop {r0}
080D6F8E: 0047         bx r0
