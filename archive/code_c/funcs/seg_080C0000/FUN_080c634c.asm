; undefined FUN_080c634c(void)
; entry 0x80c634c  size 72 bytes

080C634C: 70b5         push {r4,r5,r6,lr}
080C634E: 041c         add r4,r0,#0x0
080C6350: 0d1c         add r5,r1,#0x0
080C6352: 1206         lsl r2,r2,#0x18
080C6354: 160e         lsr r6,r2,#0x18
080C6356: 0f48         ldr r0,[0x080c6394]
080C6358: 0068         ldr r0,[r0,#0x0]
080C635A: 3ff7d1f8     bl 0x08005500
080C635E: 031c         add r3,r0,#0x0
080C6360: 002b         cmp r3,#0x0
080C6362: 14d0         beq 0x080c638e
080C6364: 191c         add r1,r3,#0x0
080C6366: 2531         add r1,#0x25
080C6368: 0022         mov r2,#0x0
080C636A: 0820         mov r0,#0x8
080C636C: 0870         strb r0,[r1,#0x0]
080C636E: 0a49         ldr r1,[0x080c6398]
080C6370: 1a20         mov r0,#0x1a
080C6372: 5872         strb r0,[r3,#0x9]
080C6374: 886e         ldr r0,[r1,#0x68]
080C6376: 0068         ldr r0,[r0,#0x0]
080C6378: 5861         str r0,[r3,#0x14]
080C637A: 0020         mov r0,#0x0
080C637C: 1a84         strh r2,[r3,#0x20]
080C637E: 191c         add r1,r3,#0x0
080C6380: 2231         add r1,#0x22
080C6382: 0870         strb r0,[r1,#0x0]
080C6384: 5c65         str r4,[r3,#0x54]
080C6386: 9d65         str r5,[r3,#0x58]
080C6388: 0220         mov r0,#0x2
080C638A: 1874         strb r0,[r3,#0x10]
080C638C: 5e74         strb r6,[r3,#0x11]
080C638E: 70bc         pop {r4,r5,r6}
080C6390: 01bc         pop {r0}
080C6392: 0047         bx r0
