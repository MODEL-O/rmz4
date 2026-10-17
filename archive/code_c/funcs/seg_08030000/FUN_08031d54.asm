; undefined FUN_08031d54(void)
; entry 0x8031d54  size 36 bytes

08031D54: 00b5         push {lr}
08031D56: a121         mov r1,#0xa1
08031D58: 4900         lsl r1,r1,#0x1
08031D5A: 4318         add r3,r0,r1
08031D5C: 1a78         ldrb r2,[r3,#0x0]
08031D5E: 0321         mov r1,#0x3
08031D60: 4942         rsb r1,r1
08031D62: 1140         and r1,r2
08031D64: 1970         strb r1,[r3,#0x0]
08031D66: 044a         ldr r2,[0x08031d78]
08031D68: 817b         ldrb r1,[r0,#0xe]
08031D6A: 8900         lsl r1,r1,#0x2
08031D6C: 8918         add r1,r1,r2
08031D6E: 0968         ldr r1,[r1,#0x0]
08031D70: f7f006f9     bl 0x08128f80
08031D74: 01bc         pop {r0}
08031D76: 0047         bx r0
