; undefined FUN_0801e594(void)
; entry 0x801e594  size 36 bytes

0801E594: 00b5         push {lr}
0801E596: 021c         add r2,r0,#0x0
0801E598: 1168         ldr r1,[r2,#0x0]
0801E59A: 0248         ldr r0,[0x0801e5a4]
0801E59C: 8142         cmp r1,r0
0801E59E: 03dd         ble 0x0801e5a8
0801E5A0: 0220         mov r0,#0x2
0801E5A2: 09e0         b 0x0801e5b8
0801E5A8: 5168         ldr r1,[r2,#0x4]
0801E5AA: f020         mov r0,#0xf0
0801E5AC: 4002         lsl r0,r0,#0x9
0801E5AE: 8142         cmp r1,r0
0801E5B0: 01dc         bgt 0x0801e5b6
0801E5B2: 0020         mov r0,#0x0
0801E5B4: 00e0         b 0x0801e5b8
0801E5B6: 0120         mov r0,#0x1
0801E5B8: 02bc         pop {r1}
0801E5BA: 0847         bx r1
