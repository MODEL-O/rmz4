; undefined FUN_080e243c(void)
; entry 0x80e243c  size 64 bytes

080E243C: 70b5         push {r4,r5,r6,lr}
080E243E: 041c         add r4,r0,#0x0
080E2440: 00f08cf8     bl 0x080e255c
080E2444: 261c         add r6,r4,#0x0
080E2446: 5436         add r6,#0x54
080E2448: c121         mov r1,#0xc1
080E244A: 8900         lsl r1,r1,#0x2
080E244C: a27a         ldrb r2,[r4,#0xa]
080E244E: 1209         lsr r2,r2,#0x4
080E2450: 0125         mov r5,#0x1
080E2452: 2a40         and r2,r5
080E2454: 301c         add r0,r6,#0x0
080E2456: fff797fe     bl 0x080e2188
080E245A: 8022         mov r2,#0x80
080E245C: 9200         lsl r2,r2,#0x2
080E245E: a37a         ldrb r3,[r4,#0xa]
080E2460: 1b09         lsr r3,r3,#0x4
080E2462: 2b40         and r3,r5
080E2464: 0020         mov r0,#0x0
080E2466: 311c         add r1,r6,#0x0
080E2468: eef7acfc     bl 0x080d0dc4
080E246C: 0320         mov r0,#0x3
080E246E: 6074         strb r0,[r4,#0x11]
080E2470: 2534         add r4,#0x25
080E2472: 1820         mov r0,#0x18
080E2474: 2070         strb r0,[r4,#0x0]
080E2476: 70bc         pop {r4,r5,r6}
080E2478: 01bc         pop {r0}
080E247A: 0047         bx r0
