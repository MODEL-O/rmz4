; undefined FUN_080c245c(void)
; entry 0x80c245c  size 62 bytes

080C245C: 10b5         push {r4,lr}
080C245E: 041c         add r4,r0,#0x0
080C2460: 0e48         ldr r0,[0x080c249c]
080C2462: 0068         ldr r0,[r0,#0x0]
080C2464: 43f74cf8     bl 0x08005500
080C2468: 031c         add r3,r0,#0x0
080C246A: 002b         cmp r3,#0x0
080C246C: 11d0         beq 0x080c2492
080C246E: 191c         add r1,r3,#0x0
080C2470: 2531         add r1,#0x25
080C2472: 0022         mov r2,#0x0
080C2474: 0820         mov r0,#0x8
080C2476: 0870         strb r0,[r1,#0x0]
080C2478: 0949         ldr r1,[0x080c24a0]
080C247A: 0f20         mov r0,#0xf
080C247C: 5872         strb r0,[r3,#0x9]
080C247E: c86b         ldr r0,[r1,#0x3c]
080C2480: 0068         ldr r0,[r0,#0x0]
080C2482: 5861         str r0,[r3,#0x14]
080C2484: 0020         mov r0,#0x0
080C2486: 1a84         strh r2,[r3,#0x20]
080C2488: 191c         add r1,r3,#0x0
080C248A: 2231         add r1,#0x22
080C248C: 0870         strb r0,[r1,#0x0]
080C248E: 9c62         str r4,[r3,#0x28]
080C2490: 1874         strb r0,[r3,#0x10]
080C2492: 181c         add r0,r3,#0x0
080C2494: 10bc         pop {r4}
080C2496: 02bc         pop {r1}
080C2498: 0847         bx r1
