; undefined FUN_0807e720(void)
; entry 0x807e720  size 30 bytes

0807E720: 10b5         push {r4,lr}
0807E722: 041c         add r4,r0,#0x0
0807E724: 00f044f9     bl 0x0807e9b0
0807E728: 0549         ldr r1,[0x0807e740]
0807E72A: 607b         ldrb r0,[r4,#0xd]
0807E72C: 8000         lsl r0,r0,#0x2
0807E72E: 4018         add r0,r0,r1
0807E730: 0168         ldr r1,[r0,#0x0]
0807E732: 201c         add r0,r4,#0x0
0807E734: aaf024fc     bl 0x08128f80
0807E738: 10bc         pop {r4}
0807E73A: 01bc         pop {r0}
0807E73C: 0047         bx r0
