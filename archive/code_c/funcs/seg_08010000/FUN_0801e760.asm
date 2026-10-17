; undefined FUN_0801e760(void)
; entry 0x801e760  size 30 bytes

0801E760: 00b5         push {lr}
0801E762: 0168         ldr r1,[r0,#0x0]
0801E764: 0248         ldr r0,[0x0801e770]
0801E766: 8142         cmp r1,r0
0801E768: 04dd         ble 0x0801e774
0801E76A: 0220         mov r0,#0x2
0801E76C: 0be0         b 0x0801e786
0801E774: 0248         ldr r0,[0x0801e780]
0801E776: 8142         cmp r1,r0
0801E778: 04dc         bgt 0x0801e784
0801E77A: 0020         mov r0,#0x0
0801E77C: 03e0         b 0x0801e786
0801E784: 0120         mov r0,#0x1
0801E786: 02bc         pop {r1}
0801E788: 0847         bx r1
