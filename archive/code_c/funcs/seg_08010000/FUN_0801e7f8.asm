; undefined FUN_0801e7f8(void)
; entry 0x801e7f8  size 62 bytes

0801E7F8: 00b5         push {lr}
0801E7FA: 011c         add r1,r0,#0x0
0801E7FC: 4a68         ldr r2,[r1,#0x4]
0801E7FE: 0648         ldr r0,[0x0801e818]
0801E800: 8242         cmp r2,r0
0801E802: 11dc         bgt 0x0801e828
0801E804: 0548         ldr r0,[0x0801e81c]
0801E806: 8242         cmp r2,r0
0801E808: 1cdc         bgt 0x0801e844
0801E80A: 0968         ldr r1,[r1,#0x0]
0801E80C: 0448         ldr r0,[0x0801e820]
0801E80E: 8142         cmp r1,r0
0801E810: 08dc         bgt 0x0801e824
0801E812: 0720         mov r0,#0x7
0801E814: 19e0         b 0x0801e84a
0801E824: 0320         mov r0,#0x3
0801E826: 10e0         b 0x0801e84a
0801E828: 0968         ldr r1,[r1,#0x0]
0801E82A: 0448         ldr r0,[0x0801e83c]
0801E82C: 8142         cmp r1,r0
0801E82E: 0bdd         ble 0x0801e848
0801E830: 0348         ldr r0,[0x0801e840]
0801E832: 8142         cmp r1,r0
0801E834: 06dc         bgt 0x0801e844
0801E836: 0220         mov r0,#0x2
0801E838: 07e0         b 0x0801e84a
0801E844: 0120         mov r0,#0x1
0801E846: 00e0         b 0x0801e84a
0801E848: 0020         mov r0,#0x0
0801E84A: 02bc         pop {r1}
0801E84C: 0847         bx r1
