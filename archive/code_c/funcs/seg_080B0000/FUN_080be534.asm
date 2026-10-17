; undefined FUN_080be534(void)
; entry 0x80be534  size 72 bytes

080BE534: 30b5         push {r4,r5,lr}
080BE536: 051c         add r5,r0,#0x0
080BE538: 0906         lsl r1,r1,#0x18
080BE53A: 0c0e         lsr r4,r1,#0x18
080BE53C: 0f48         ldr r0,[0x080be57c]
080BE53E: 0068         ldr r0,[r0,#0x0]
080BE540: 46f7deff     bl 0x08005500
080BE544: 031c         add r3,r0,#0x0
080BE546: 002b         cmp r3,#0x0
080BE548: 14d0         beq 0x080be574
080BE54A: 191c         add r1,r3,#0x0
080BE54C: 2531         add r1,#0x25
080BE54E: 0022         mov r2,#0x0
080BE550: 0820         mov r0,#0x8
080BE552: 0870         strb r0,[r1,#0x0]
080BE554: 0a49         ldr r1,[0x080be580]
080BE556: 0420         mov r0,#0x4
080BE558: 5872         strb r0,[r3,#0x9]
080BE55A: 0869         ldr r0,[r1,#0x10]
080BE55C: 0068         ldr r0,[r0,#0x0]
080BE55E: 5861         str r0,[r3,#0x14]
080BE560: 0020         mov r0,#0x0
080BE562: 1a84         strh r2,[r3,#0x20]
080BE564: 191c         add r1,r3,#0x0
080BE566: 2231         add r1,#0x22
080BE568: 0870         strb r0,[r1,#0x0]
080BE56A: 2868         ldr r0,[r5,#0x0]
080BE56C: 6968         ldr r1,[r5,#0x4]
080BE56E: 5865         str r0,[r3,#0x54]
080BE570: 9965         str r1,[r3,#0x58]
080BE572: 5c74         strb r4,[r3,#0x11]
080BE574: 181c         add r0,r3,#0x0
080BE576: 30bc         pop {r4,r5}
080BE578: 02bc         pop {r1}
080BE57A: 0847         bx r1
