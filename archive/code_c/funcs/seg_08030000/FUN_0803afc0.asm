; undefined FUN_0803afc0(void)
; entry 0x803afc0  size 28 bytes

0803AFC0: 00b5         push {lr}
0803AFC2: 021c         add r2,r0,#0x0
0803AFC4: 507c         ldrb r0,[r2,#0x11]
0803AFC6: 0028         cmp r0,#0x0
0803AFC8: 05d1         bne 0x0803afd6
0803AFCA: 506d         ldr r0,[r2,#0x54]
0803AFCC: 0860         str r0,[r1,#0x0]
0803AFCE: 906d         ldr r0,[r2,#0x58]
0803AFD0: 4860         str r0,[r1,#0x4]
0803AFD2: 0120         mov r0,#0x1
0803AFD4: 00e0         b 0x0803afd8
0803AFD6: 0020         mov r0,#0x0
0803AFD8: 02bc         pop {r1}
0803AFDA: 0847         bx r1
