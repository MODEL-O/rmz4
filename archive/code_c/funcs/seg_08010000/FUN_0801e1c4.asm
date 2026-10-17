; undefined FUN_0801e1c4(void)
; entry 0x801e1c4  size 48 bytes

0801E1C4: 00b5         push {lr}
0801E1C6: 0a4b         ldr r3,[0x0801e1f0]
0801E1C8: 0a48         ldr r0,[0x0801e1f4]
0801E1CA: 1918         add r1,r3,r0
0801E1CC: 0888         ldrh r0,[r1,#0x0]
0801E1CE: 0028         cmp r0,#0x0
0801E1D0: 14d0         beq 0x0801e1fc
0801E1D2: 0138         sub r0,#0x1
0801E1D4: 0880         strh r0,[r1,#0x0]
0801E1D6: 8921         mov r1,#0x89
0801E1D8: c900         lsl r1,r1,#0x3
0801E1DA: 5a18         add r2,r3,r1
0801E1DC: 1068         ldr r0,[r2,#0x0]
0801E1DE: 0168         ldr r1,[r0,#0x0]
0801E1E0: 1160         str r1,[r2,#0x0]
0801E1E2: 0549         ldr r1,[0x0801e1f8]
0801E1E4: 5a18         add r2,r3,r1
0801E1E6: 1168         ldr r1,[r2,#0x0]
0801E1E8: 0160         str r1,[r0,#0x0]
0801E1EA: 1060         str r0,[r2,#0x0]
0801E1EC: 07e0         b 0x0801e1fe
0801E1FC: 0020         mov r0,#0x0
0801E1FE: 02bc         pop {r1}
0801E200: 0847         bx r1
