; undefined FUN_08040d54(void)
; entry 0x8040d54  size 64 bytes

08040D54: 00b5         push {lr}
08040D56: 021c         add r2,r0,#0x0
08040D58: 8c30         add r0,#0x8c
08040D5A: 0068         ldr r0,[r0,#0x0]
08040D5C: 8021         mov r1,#0x80
08040D5E: 8900         lsl r1,r1,#0x2
08040D60: 0840         and r0,r1
08040D62: 0028         cmp r0,#0x0
08040D64: 0ed0         beq 0x08040d84
08040D66: 0649         ldr r1,[0x08040d80]
08040D68: 507a         ldrb r0,[r2,#0x9]
08040D6A: 8000         lsl r0,r0,#0x2
08040D6C: 4018         add r0,r0,r1
08040D6E: 0221         mov r1,#0x2
08040D70: d160         str r1,[r2,#0xc]
08040D72: 0068         ldr r0,[r0,#0x0]
08040D74: 8068         ldr r0,[r0,#0x8]
08040D76: 5061         str r0,[r2,#0x14]
08040D78: 101c         add r0,r2,#0x0
08040D7A: 00f00ff8     bl 0x08040d9c
08040D7E: 09e0         b 0x08040d94
08040D84: 0448         ldr r0,[0x08040d98]
08040D86: 117c         ldrb r1,[r2,#0x10]
08040D88: 8900         lsl r1,r1,#0x2
08040D8A: 0918         add r1,r1,r0
08040D8C: 0968         ldr r1,[r1,#0x0]
08040D8E: 101c         add r0,r2,#0x0
08040D90: e8f0f6f8     bl 0x08128f80
08040D94: 01bc         pop {r0}
08040D96: 0047         bx r0
