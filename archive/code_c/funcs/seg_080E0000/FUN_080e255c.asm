; undefined FUN_080e255c(void)
; entry 0x80e255c  size 72 bytes

080E255C: 30b5         push {r4,r5,lr}
080E255E: 041c         add r4,r0,#0x0
080E2560: 606d         ldr r0,[r4,#0x54]
080E2562: a16d         ldr r1,[r4,#0x58]
080E2564: 0122         mov r2,#0x1
080E2566: eef745fd     bl 0x080d0ff4
080E256A: 606d         ldr r0,[r4,#0x54]
080E256C: a16d         ldr r1,[r4,#0x58]
080E256E: a025         mov r5,#0xa0
080E2570: ed00         lsl r5,r5,#0x3
080E2572: 4919         add r1,r1,r5
080E2574: 0122         mov r2,#0x1
080E2576: eef73dfd     bl 0x080d0ff4
080E257A: 606d         ldr r0,[r4,#0x54]
080E257C: 4019         add r0,r0,r5
080E257E: a16d         ldr r1,[r4,#0x58]
080E2580: 0022         mov r2,#0x0
080E2582: eef737fd     bl 0x080d0ff4
080E2586: 606d         ldr r0,[r4,#0x54]
080E2588: a16d         ldr r1,[r4,#0x58]
080E258A: 0022         mov r2,#0x0
080E258C: eef732fd     bl 0x080d0ff4
080E2590: 606d         ldr r0,[r4,#0x54]
080E2592: 0449         ldr r1,[0x080e25a4]
080E2594: 4018         add r0,r0,r1
080E2596: a16d         ldr r1,[r4,#0x58]
080E2598: 0022         mov r2,#0x0
080E259A: eef72bfd     bl 0x080d0ff4
080E259E: 30bc         pop {r4,r5}
080E25A0: 01bc         pop {r0}
080E25A2: 0047         bx r0
