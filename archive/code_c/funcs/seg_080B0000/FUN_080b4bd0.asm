; undefined FUN_080b4bd0(void)
; entry 0x80b4bd0  size 64 bytes

080B4BD0: 30b5         push {r4,r5,lr}
080B4BD2: 051c         add r5,r0,#0x0
080B4BD4: ac6a         ldr r4,[r5,#0x28]
080B4BD6: 68f70bfa     bl 0x0801cff0
080B4BDA: 606d         ldr r0,[r4,#0x54]
080B4BDC: a16d         ldr r1,[r4,#0x58]
080B4BDE: 6865         str r0,[r5,#0x54]
080B4BE0: a965         str r1,[r5,#0x58]
080B4BE2: a07f         ldrb r0,[r4,#0x1e]
080B4BE4: 0002         lsl r0,r0,#0x8
080B4BE6: 7034         add r4,#0x70
080B4BE8: 2178         ldrb r1,[r4,#0x0]
080B4BEA: 0843         orr r0,r1
080B4BEC: 0849         ldr r1,[0x080b4c10]
080B4BEE: 8842         cmp r0,r1
080B4BF0: 0bd0         beq 0x080b4c0a
080B4BF2: 0849         ldr r1,[0x080b4c14]
080B4BF4: 687a         ldrb r0,[r5,#0x9]
080B4BF6: 8000         lsl r0,r0,#0x2
080B4BF8: 4018         add r0,r0,r1
080B4BFA: 0221         mov r1,#0x2
080B4BFC: e960         str r1,[r5,#0xc]
080B4BFE: 0068         ldr r0,[r0,#0x0]
080B4C00: 8068         ldr r0,[r0,#0x8]
080B4C02: 6861         str r0,[r5,#0x14]
080B4C04: 281c         add r0,r5,#0x0
080B4C06: 00f007f8     bl 0x080b4c18
080B4C0A: 30bc         pop {r4,r5}
080B4C0C: 01bc         pop {r0}
080B4C0E: 0047         bx r0
