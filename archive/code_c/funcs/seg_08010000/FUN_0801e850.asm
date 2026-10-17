; undefined FUN_0801e850(void)
; entry 0x801e850  size 30 bytes

0801E850: 00b5         push {lr}
0801E852: 0168         ldr r1,[r0,#0x0]
0801E854: 0348         ldr r0,[0x0801e864]
0801E856: 8142         cmp r1,r0
0801E858: 0add         ble 0x0801e870
0801E85A: 0348         ldr r0,[0x0801e868]
0801E85C: 8142         cmp r1,r0
0801E85E: 05dd         ble 0x0801e86c
0801E860: 0120         mov r0,#0x1
0801E862: 06e0         b 0x0801e872
0801E86C: 0220         mov r0,#0x2
0801E86E: 00e0         b 0x0801e872
0801E870: 0020         mov r0,#0x0
0801E872: 02bc         pop {r1}
0801E874: 0847         bx r1
