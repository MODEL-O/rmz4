; undefined FUN_0810e5f0(void)
; entry 0x810e5f0  size 20 bytes

0810E5F0: 00b5         push {lr}
0810E5F2: 0004         lsl r0,r0,#0x10
0810E5F4: 000c         lsr r0,r0,#0x10
0810E5F6: fff7c5ff     bl 0x0810e584
0810E5FA: 0249         ldr r1,[0x0810e604]
0810E5FC: 0020         mov r0,#0x0
0810E5FE: 8860         str r0,[r1,#0x8]
0810E600: 01bc         pop {r0}
0810E602: 0047         bx r0
