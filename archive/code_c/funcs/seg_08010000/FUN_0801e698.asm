; undefined FUN_0801e698(void)
; entry 0x801e698  size 50 bytes

0801E698: 00b5         push {lr}
0801E69A: 0168         ldr r1,[r0,#0x0]
0801E69C: 0248         ldr r0,[0x0801e6a8]
0801E69E: 8142         cmp r1,r0
0801E6A0: 04dd         ble 0x0801e6ac
0801E6A2: 0320         mov r0,#0x3
0801E6A4: 19e0         b 0x0801e6da
0801E6AC: 0348         ldr r0,[0x0801e6bc]
0801E6AE: 8142         cmp r1,r0
0801E6B0: 0add         ble 0x0801e6c8
0801E6B2: 0348         ldr r0,[0x0801e6c0]
0801E6B4: 8142         cmp r1,r0
0801E6B6: 05dc         bgt 0x0801e6c4
0801E6B8: 0220         mov r0,#0x2
0801E6BA: 0ee0         b 0x0801e6da
0801E6C4: 0720         mov r0,#0x7
0801E6C6: 08e0         b 0x0801e6da
0801E6C8: 0248         ldr r0,[0x0801e6d4]
0801E6CA: 8142         cmp r1,r0
0801E6CC: 04dc         bgt 0x0801e6d8
0801E6CE: 0020         mov r0,#0x0
0801E6D0: 03e0         b 0x0801e6da
0801E6D8: 0120         mov r0,#0x1
0801E6DA: 02bc         pop {r1}
0801E6DC: 0847         bx r1
