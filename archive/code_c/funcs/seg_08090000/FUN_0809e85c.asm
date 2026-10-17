; undefined FUN_0809e85c(void)
; entry 0x809e85c  size 62 bytes

0809E85C: 10b5         push {r4,lr}
0809E85E: 041c         add r4,r0,#0x0
0809E860: 207c         ldrb r0,[r4,#0x10]
0809E862: 0028         cmp r0,#0x0
0809E864: 08d1         bne 0x0809e878
0809E866: 211c         add r1,r4,#0x0
0809E868: 5431         add r1,#0x54
0809E86A: 0120         mov r0,#0x1
0809E86C: 32f00cfa     bl 0x080d0c88
0809E870: 3520         mov r0,#0x35
0809E872: 64f74df9     bl 0x08002b10
0809E876: 04e0         b 0x0809e882
0809E878: 211c         add r1,r4,#0x0
0809E87A: 5431         add r1,#0x54
0809E87C: 0220         mov r0,#0x2
0809E87E: 32f003fa     bl 0x080d0c88
0809E882: 0649         ldr r1,[0x0809e89c]
0809E884: 607a         ldrb r0,[r4,#0x9]
0809E886: 8000         lsl r0,r0,#0x2
0809E888: 4018         add r0,r0,r1
0809E88A: 0421         mov r1,#0x4
0809E88C: e160         str r1,[r4,#0xc]
0809E88E: 0068         ldr r0,[r0,#0x0]
0809E890: 0069         ldr r0,[r0,#0x10]
0809E892: 6061         str r0,[r4,#0x14]
0809E894: 10bc         pop {r4}
0809E896: 01bc         pop {r0}
0809E898: 0047         bx r0
