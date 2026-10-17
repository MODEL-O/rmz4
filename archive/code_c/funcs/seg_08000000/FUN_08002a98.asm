; undefined FUN_08002a98(void)
; entry 0x8002a98  size 48 bytes

08002A98: 10b5         push {r4,lr}
08002A9A: 0004         lsl r0,r0,#0x10
08002A9C: 040c         lsr r4,r0,#0x10
08002A9E: 201c         add r0,r4,#0x0
08002AA0: 00f016f8     bl 0x08002ad0
08002AA4: 0028         cmp r0,#0x0
08002AA6: 0cd0         beq 0x08002ac2
08002AA8: 074a         ldr r2,[0x08002ac8]
08002AAA: 0849         ldr r1,[0x08002acc]
08002AAC: e000         lsl r0,r4,#0x3
08002AAE: 4018         add r0,r0,r1
08002AB0: 8188         ldrh r1,[r0,#0x4]
08002AB2: 4800         lsl r0,r1,#0x1
08002AB4: 4018         add r0,r0,r1
08002AB6: 8000         lsl r0,r0,#0x2
08002AB8: 8018         add r0,r0,r2
08002ABA: 0068         ldr r0,[r0,#0x0]
08002ABC: 0621         mov r1,#0x6
08002ABE: 24f145ff     bl 0x0812794c
08002AC2: 10bc         pop {r4}
08002AC4: 01bc         pop {r0}
08002AC6: 0047         bx r0
