; undefined FUN_0801b78c(void)
; entry 0x801b78c  size 40 bytes

0801B78C: 00b5         push {lr}
0801B78E: 031c         add r3,r0,#0x0
0801B790: 9a7b         ldrb r2,[r3,#0xe]
0801B792: 002a         cmp r2,#0x0
0801B794: 0cd1         bne 0x0801b7b0
0801B796: 0749         ldr r1,[0x0801b7b4]
0801B798: 0748         ldr r0,[0x0801b7b8]
0801B79A: 0880         strh r0,[r1,#0x0]
0801B79C: 0748         ldr r0,[0x0801b7bc]
0801B79E: 4880         strh r0,[r1,#0x2]
0801B7A0: 0748         ldr r0,[0x0801b7c0]
0801B7A2: 0849         ldr r1,[0x0801b7c4]
0801B7A4: 4018         add r0,r0,r1
0801B7A6: aa21         mov r1,#0xaa
0801B7A8: c902         lsl r1,r1,#0xb
0801B7AA: 0160         str r1,[r0,#0x0]
0801B7AC: 501c         add r0,r2,#0x1
0801B7AE: 9873         strb r0,[r3,#0xe]
0801B7B0: 01bc         pop {r0}
0801B7B2: 0047         bx r0
