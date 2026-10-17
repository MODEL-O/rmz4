; undefined FUN_0807fec4(void)
; entry 0x807fec4  size 34 bytes

0807FEC4: 10b5         push {r4,lr}
0807FEC6: 041c         add r4,r0,#0x0
0807FEC8: a07b         ldrb r0,[r4,#0xe]
0807FECA: 0528         cmp r0,#0x5
0807FECC: 00d9         bls 0x0807fed0
0807FECE: 84e1         b 0x080801da
0807FED0: 8000         lsl r0,r0,#0x2
0807FED2: 0249         ldr r1,[0x0807fedc]
0807FED4: 4018         add r0,r0,r1
0807FED6: 0068         ldr r0,[r0,#0x0]
0807FED8: 8746         mov pc,r0
080801DA: 201c         add r0,r4,#0x0
080801DC: 9cf708ff     bl 0x0801cff0
080801E0: 10bc         pop {r4}
080801E2: 01bc         pop {r0}
080801E4: 0047         bx r0
