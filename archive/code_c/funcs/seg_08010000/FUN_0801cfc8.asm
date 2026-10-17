; undefined FUN_0801cfc8(void)
; entry 0x801cfc8  size 40 bytes

0801CFC8: 70b5         push {r4,r5,r6,lr}
0801CFCA: 061c         add r6,r0,#0x0
0801CFCC: 141c         add r4,r2,#0x0
0801CFCE: 1d1c         add r5,r3,#0x0
0801CFD0: 0904         lsl r1,r1,#0x10
0801CFD2: 090c         lsr r1,r1,#0x10
0801CFD4: 2404         lsl r4,r4,#0x10
0801CFD6: 240c         lsr r4,r4,#0x10
0801CFD8: 2d04         lsl r5,r5,#0x10
0801CFDA: 2d0c         lsr r5,r5,#0x10
0801CFDC: fff790ff     bl 0x0801cf00
0801CFE0: 301c         add r0,r6,#0x0
0801CFE2: 7130         add r0,#0x71
0801CFE4: 0470         strb r4,[r0,#0x0]
0801CFE6: 7236         add r6,#0x72
0801CFE8: 3570         strb r5,[r6,#0x0]
0801CFEA: 70bc         pop {r4,r5,r6}
0801CFEC: 01bc         pop {r0}
0801CFEE: 0047         bx r0
