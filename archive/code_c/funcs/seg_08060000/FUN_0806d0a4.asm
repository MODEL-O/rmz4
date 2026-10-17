; undefined FUN_0806d0a4(void)
; entry 0x806d0a4  size 50 bytes

0806D0A4: 10b5         push {r4,lr}
0806D0A6: 041c         add r4,r0,#0x0
0806D0A8: 6069         ldr r0,[r4,#0x14]
0806D0AA: 0121         mov r1,#0x1
0806D0AC: 0840         and r0,r1
0806D0AE: 0028         cmp r0,#0x0
0806D0B0: 0ed0         beq 0x0806d0d0
0806D0B2: 4720         mov r0,#0x47
0806D0B4: 99f766fc     bl 0x08006984
0806D0B8: e068         ldr r0,[r4,#0xc]
0806D0BA: c06a         ldr r0,[r0,#0x2c]
0806D0BC: e26a         ldr r2,[r4,#0x2c]
0806D0BE: 0023         mov r3,#0x0
0806D0C0: 416d         ldr r1,[r0,#0x54]
0806D0C2: 506d         ldr r0,[r2,#0x54]
0806D0C4: 8142         cmp r1,r0
0806D0C6: 00dd         ble 0x0806d0ca
0806D0C8: 0123         mov r3,#0x1
0806D0CA: 101c         add r0,r2,#0x0
0806D0CC: db30         add r0,#0xdb
0806D0CE: 0370         strb r3,[r0,#0x0]
0806D0D0: 10bc         pop {r4}
0806D0D2: 01bc         pop {r0}
0806D0D4: 0047         bx r0
