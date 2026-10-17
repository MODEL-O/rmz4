; undefined FUN_080ff1e0(void)
; entry 0x80ff1e0  size 56 bytes

080FF1E0: 9cb5         push {r2,r3,r4,r7,lr}
080FF1E2: 8608         lsr r6,r0,#0x2
080FF1E4: f0db         blt 0x080ff1c8
080FF1E6: 0202         lsl r2,r0,#0x8
080FF1E8: 1806         lsl r0,r3,#0x18
080FF1EA: 040e         lsr r4,r0,#0x18
080FF1EC: 301c         add r0,r6,#0x0
080FF1EE: 391c         add r1,r7,#0x0
080FF1F0: 0022         mov r2,#0x0
080FF1F2: 231c         add r3,r4,#0x0
080FF1F4: d5f74afd     bl 0x080d4c8c
080FF1F8: a97a         ldrb r1,[r5,#0xa]
080FF1FA: fe20         mov r0,#0xfe
080FF1FC: 0840         and r0,r1
080FF1FE: a872         strb r0,[r5,#0xa]
080FF200: 0549         ldr r1,[0x080ff218]
080FF202: 687a         ldrb r0,[r5,#0x9]
080FF204: 8000         lsl r0,r0,#0x2
080FF206: 4018         add r0,r0,r1
080FF208: 0421         mov r1,#0x4
080FF20A: e960         str r1,[r5,#0xc]
080FF20C: 0068         ldr r0,[r0,#0x0]
080FF20E: 0069         ldr r0,[r0,#0x10]
080FF210: 6861         str r0,[r5,#0x14]
080FF212: f0bc         pop {r4,r5,r6,r7}
080FF214: 01bc         pop {r0}
080FF216: 0047         bx r0
