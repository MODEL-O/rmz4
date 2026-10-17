; undefined FUN_08105954(void)
; entry 0x8105954  size 38 bytes

08105954: 70b5         push {r4,r5,r6,lr}
08105956: 041c         add r4,r0,#0x0
08105958: 0904         lsl r1,r1,#0x10
0810595A: 0e0c         lsr r6,r1,#0x10
0810595C: 1206         lsl r2,r2,#0x18
0810595E: 150e         lsr r5,r2,#0x18
08105960: e07b         ldrb r0,[r4,#0xf]
08105962: 0528         cmp r0,#0x5
08105964: 00d9         bls 0x08105968
08105966: b0e0         b 0x08105aca
08105968: 8000         lsl r0,r0,#0x2
0810596A: 0249         ldr r1,[0x08105974]
0810596C: 4018         add r0,r0,r1
0810596E: 0068         ldr r0,[r0,#0x0]
08105970: 8746         mov pc,r0
08105ACA: 0020         mov r0,#0x0
08105ACC: 70bc         pop {r4,r5,r6}
08105ACE: 02bc         pop {r1}
08105AD0: 0847         bx r1
