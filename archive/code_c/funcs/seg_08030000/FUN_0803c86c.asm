; undefined FUN_0803c86c(void)
; entry 0x803c86c  size 30 bytes

0803C86C: 00b5         push {lr}
0803C86E: 4069         ldr r0,[r0,#0x14]
0803C870: 0421         mov r1,#0x4
0803C872: 0840         and r0,r1
0803C874: 0028         cmp r0,#0x0
0803C876: 06d0         beq 0x0803c886
0803C878: 044a         ldr r2,[0x0803c88c]
0803C87A: d18b         ldrh r1,[r2,#0x1e]
0803C87C: 0448         ldr r0,[0x0803c890]
0803C87E: 8142         cmp r1,r0
0803C880: 01d8         bhi 0x0803c886
0803C882: 481c         add r0,r1,#0x1
0803C884: d083         strh r0,[r2,#0x1e]
0803C886: 01bc         pop {r0}
0803C888: 0047         bx r0
