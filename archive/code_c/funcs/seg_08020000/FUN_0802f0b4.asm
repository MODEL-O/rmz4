; undefined FUN_0802f0b4(void)
; entry 0x802f0b4  size 50 bytes

0802F0B4: 10b5         push {r4,lr}
0802F0B6: 021c         add r2,r0,#0x0
0802F0B8: 0021         mov r1,#0x0
0802F0BA: 0023         mov r3,#0x0
0802F0BC: e824         mov r4,#0xe8
0802F0BE: 6400         lsl r4,r4,#0x1
0802F0C0: 1019         add r0,r2,r4
0802F0C2: 0380         strh r3,[r0,#0x0]
0802F0C4: 0230         add r0,#0x2
0802F0C6: 0131         add r1,#0x1
0802F0C8: 3f29         cmp r1,#0x3f
0802F0CA: fad9         bls 0x0802f0c2
0802F0CC: 101c         add r0,r2,#0x0
0802F0CE: b430         add r0,#0xb4
0802F0D0: c07c         ldrb r0,[r0,#0x13]
0802F0D2: 0328         cmp r0,#0x3
0802F0D4: 04d9         bls 0x0802f0e0
0802F0D6: 9520         mov r0,#0x95
0802F0D8: 8000         lsl r0,r0,#0x2
0802F0DA: 1118         add r1,r2,r0
0802F0DC: 0120         mov r0,#0x1
0802F0DE: 0870         strb r0,[r1,#0x0]
0802F0E0: 10bc         pop {r4}
0802F0E2: 01bc         pop {r0}
0802F0E4: 0047         bx r0
