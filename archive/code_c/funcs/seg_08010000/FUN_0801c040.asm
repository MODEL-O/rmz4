; undefined FUN_0801c040(void)
; entry 0x801c040  size 32 bytes

0801C040: 00b5         push {lr}
0801C042: 6830         add r0,#0x68
0801C044: 0188         ldrh r1,[r0,#0x0]
0801C046: 0139         sub r1,#0x1
0801C048: 0180         strh r1,[r0,#0x0]
0801C04A: 0904         lsl r1,r1,#0x10
0801C04C: 0029         cmp r1,#0x0
0801C04E: 05d1         bne 0x0801c05c
0801C050: 0349         ldr r1,[0x0801c060]
0801C052: 0448         ldr r0,[0x0801c064]
0801C054: 0918         add r1,r1,r0
0801C056: 0878         ldrb r0,[r1,#0x0]
0801C058: 0130         add r0,#0x1
0801C05A: 0870         strb r0,[r1,#0x0]
0801C05C: 01bc         pop {r0}
0801C05E: 0047         bx r0
