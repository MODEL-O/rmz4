; undefined FUN_0809e1d0(void)
; entry 0x809e1d0  size 28 bytes

0809E1D0: 00b5         push {lr}
0809E1D2: 021c         add r2,r0,#0x0
0809E1D4: 917a         ldrb r1,[r2,#0xa]
0809E1D6: 1020         mov r0,#0x10
0809E1D8: 0840         and r0,r1
0809E1DA: 0028         cmp r0,#0x0
0809E1DC: 02d0         beq 0x0809e1e4
0809E1DE: c020         mov r0,#0xc0
0809E1E0: 4000         lsl r0,r0,#0x1
0809E1E2: 00e0         b 0x0809e1e6
0809E1E4: 0148         ldr r0,[0x0809e1ec]
0809E1E6: d065         str r0,[r2,#0x5c]
0809E1E8: 01bc         pop {r0}
0809E1EA: 0047         bx r0
