; undefined FUN_0802f084(void)
; entry 0x802f084  size 48 bytes

0802F084: 00b5         push {lr}
0802F086: 0004         lsl r0,r0,#0x10
0802F088: 000c         lsr r0,r0,#0x10
0802F08A: 031c         add r3,r0,#0x0
0802F08C: 0906         lsl r1,r1,#0x18
0802F08E: 090e         lsr r1,r1,#0x18
0802F090: 0a1c         add r2,r1,#0x0
0802F092: 0028         cmp r0,#0x0
0802F094: 0bd0         beq 0x0802f0ae
0802F096: 0128         cmp r0,#0x1
0802F098: 03d0         beq 0x0802f0a2
0802F09A: 0728         cmp r0,#0x7
0802F09C: 03d8         bhi 0x0802f0a6
0802F09E: 0029         cmp r1,#0x0
0802F0A0: 05d1         bne 0x0802f0ae
0802F0A2: 0120         mov r0,#0x1
0802F0A4: 04e0         b 0x0802f0b0
0802F0A6: 0d2b         cmp r3,#0xd
0802F0A8: 01d8         bhi 0x0802f0ae
0802F0AA: 002a         cmp r2,#0x0
0802F0AC: f9d1         bne 0x0802f0a2
0802F0AE: 0020         mov r0,#0x0
0802F0B0: 02bc         pop {r1}
0802F0B2: 0847         bx r1
