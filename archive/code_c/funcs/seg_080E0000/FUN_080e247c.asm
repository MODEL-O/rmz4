; undefined FUN_080e247c(void)
; entry 0x80e247c  size 66 bytes

080E247C: 70b5         push {r4,r5,r6,lr}
080E247E: 041c         add r4,r0,#0x0
080E2480: 00f06cf8     bl 0x080e255c
080E2484: 251c         add r5,r4,#0x0
080E2486: 5435         add r5,#0x54
080E2488: 0120         mov r0,#0x1
080E248A: 291c         add r1,r5,#0x0
080E248C: eef7fcfb     bl 0x080d0c88
080E2490: 201c         add r0,r4,#0x0
080E2492: 00f089f8     bl 0x080e25a8
080E2496: 0020         mov r0,#0x0
080E2498: 6074         strb r0,[r4,#0x11]
080E249A: 0949         ldr r1,[0x080e24c0]
080E249C: a27a         ldrb r2,[r4,#0xa]
080E249E: 1209         lsr r2,r2,#0x4
080E24A0: 0126         mov r6,#0x1
080E24A2: 3240         and r2,r6
080E24A4: 281c         add r0,r5,#0x0
080E24A6: fff76ffe     bl 0x080e2188
080E24AA: 0649         ldr r1,[0x080e24c4]
080E24AC: a27a         ldrb r2,[r4,#0xa]
080E24AE: 1209         lsr r2,r2,#0x4
080E24B0: 3240         and r2,r6
080E24B2: 281c         add r0,r5,#0x0
080E24B4: fff768fe     bl 0x080e2188
080E24B8: 70bc         pop {r4,r5,r6}
080E24BA: 01bc         pop {r0}
080E24BC: 0047         bx r0
