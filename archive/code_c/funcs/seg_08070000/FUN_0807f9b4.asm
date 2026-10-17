; undefined FUN_0807f9b4(void)
; entry 0x807f9b4  size 28 bytes

0807F9B4: 00b5         push {lr}
0807F9B6: 011c         add r1,r0,#0x0
0807F9B8: 0448         ldr r0,[0x0807f9cc]
0807F9BA: 0068         ldr r0,[r0,#0x0]
0807F9BC: 5431         add r1,#0x54
0807F9BE: 9df7b7f8     bl 0x0801cb30
0807F9C2: 0028         cmp r0,#0x0
0807F9C4: 04d1         bne 0x0807f9d0
0807F9C6: 0020         mov r0,#0x0
0807F9C8: 03e0         b 0x0807f9d2
0807F9D0: 5430         add r0,#0x54
0807F9D2: 02bc         pop {r1}
0807F9D4: 0847         bx r1
