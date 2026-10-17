; undefined FUN_0801e4f0(void)
; entry 0x801e4f0  size 32 bytes

0801E4F0: 00b5         push {lr}
0801E4F2: 0168         ldr r1,[r0,#0x0]
0801E4F4: a320         mov r0,#0xa3
0801E4F6: 4003         lsl r0,r0,#0xd
0801E4F8: 8142         cmp r1,r0
0801E4FA: 01dd         ble 0x0801e500
0801E4FC: 0220         mov r0,#0x2
0801E4FE: 08e0         b 0x0801e512
0801E500: 0248         ldr r0,[0x0801e50c]
0801E502: 8142         cmp r1,r0
0801E504: 04dc         bgt 0x0801e510
0801E506: 0020         mov r0,#0x0
0801E508: 03e0         b 0x0801e512
0801E510: 0120         mov r0,#0x1
0801E512: 02bc         pop {r1}
0801E514: 0847         bx r1
