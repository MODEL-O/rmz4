; undefined FUN_0801c574(void)
; entry 0x801c574  size 70 bytes

0801C574: 10b5         push {r4,lr}
0801C576: 041c         add r4,r0,#0x0
0801C578: 0120         mov r0,#0x1
0801C57A: 211c         add r1,r4,#0x0
0801C57C: eaf70afd     bl 0x08006f94
0801C580: 0004         lsl r0,r0,#0x10
0801C582: 020c         lsr r2,r0,#0x10
0801C584: 2068         ldr r0,[r4,#0x0]
0801C586: 0b49         ldr r1,[0x0801c5b4]
0801C588: 4018         add r0,r0,r1
0801C58A: f021         mov r1,#0xf0
0801C58C: 0902         lsl r1,r1,#0x8
0801C58E: 8842         cmp r0,r1
0801C590: 0dd8         bhi 0x0801c5ae
0801C592: 6168         ldr r1,[r4,#0x4]
0801C594: 0848         ldr r0,[0x0801c5b8]
0801C596: 8142         cmp r1,r0
0801C598: 09dd         ble 0x0801c5ae
0801C59A: c820         mov r0,#0xc8
0801C59C: 8002         lsl r0,r0,#0xa
0801C59E: 8142         cmp r1,r0
0801C5A0: 05dc         bgt 0x0801c5ae
0801C5A2: 0649         ldr r1,[0x0801c5bc]
0801C5A4: 5018         add r0,r2,r1
0801C5A6: 0004         lsl r0,r0,#0x10
0801C5A8: 000c         lsr r0,r0,#0x10
0801C5AA: 0328         cmp r0,#0x3
0801C5AC: 08d8         bhi 0x0801c5c0
0801C5AE: 0020         mov r0,#0x0
0801C5B0: 07e0         b 0x0801c5c2
0801C5C0: 0120         mov r0,#0x1
0801C5C2: 10bc         pop {r4}
0801C5C4: 02bc         pop {r1}
0801C5C6: 0847         bx r1
