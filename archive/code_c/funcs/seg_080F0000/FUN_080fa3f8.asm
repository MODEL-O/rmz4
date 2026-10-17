; undefined FUN_080fa3f8(void)
; entry 0x80fa3f8  size 72 bytes

080FA3F8: 30b5         push {r4,r5,lr}
080FA3FA: 041c         add r4,r0,#0x0
080FA3FC: 8c30         add r0,#0x8c
080FA3FE: 0568         ldr r5,[r0,#0x0]
080FA400: 8020         mov r0,#0x80
080FA402: 8000         lsl r0,r0,#0x2
080FA404: 0540         and r5,r0
080FA406: 002d         cmp r5,#0x0
080FA408: 0ed0         beq 0x080fa428
080FA40A: 0649         ldr r1,[0x080fa424]
080FA40C: 607a         ldrb r0,[r4,#0x9]
080FA40E: 8000         lsl r0,r0,#0x2
080FA410: 4018         add r0,r0,r1
080FA412: 0221         mov r1,#0x2
080FA414: e160         str r1,[r4,#0xc]
080FA416: 0068         ldr r0,[r0,#0x0]
080FA418: 8068         ldr r0,[r0,#0x8]
080FA41A: 6061         str r0,[r4,#0x14]
080FA41C: 201c         add r0,r4,#0x0
080FA41E: 00f013f8     bl 0x080fa448
080FA422: 0ce0         b 0x080fa43e
080FA428: 0649         ldr r1,[0x080fa444]
080FA42A: 607b         ldrb r0,[r4,#0xd]
080FA42C: 8000         lsl r0,r0,#0x2
080FA42E: 4018         add r0,r0,r1
080FA430: 0168         ldr r1,[r0,#0x0]
080FA432: 201c         add r0,r4,#0x0
080FA434: 2ef0a4fd     bl 0x08128f80
080FA438: 201c         add r0,r4,#0x0
080FA43A: be30         add r0,#0xbe
080FA43C: 0570         strb r5,[r0,#0x0]
080FA43E: 30bc         pop {r4,r5}
080FA440: 01bc         pop {r0}
080FA442: 0047         bx r0
