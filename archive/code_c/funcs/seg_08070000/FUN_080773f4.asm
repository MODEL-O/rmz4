; undefined FUN_080773f4(void)
; entry 0x80773f4  size 28 bytes

080773F4: 30b5         push {r4,r5,lr}
080773F6: 041c         add r4,r0,#0x0
080773F8: e07b         ldrb r0,[r4,#0xf]
080773FA: 0428         cmp r0,#0x4
080773FC: 00d9         bls 0x08077400
080773FE: f0e0         b 0x080775e2
08077400: 8000         lsl r0,r0,#0x2
08077402: 0249         ldr r1,[0x0807740c]
08077404: 4018         add r0,r0,r1
08077406: 0068         ldr r0,[r0,#0x0]
08077408: 8746         mov pc,r0
080775E2: 30bc         pop {r4,r5}
080775E4: 01bc         pop {r0}
080775E6: 0047         bx r0
