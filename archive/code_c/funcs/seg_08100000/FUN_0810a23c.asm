; undefined FUN_0810a23c(void)
; entry 0x810a23c  size 70 bytes

0810A23C: 70b5         push {r4,r5,r6,lr}
0810A23E: 061c         add r6,r0,#0x0
0810A240: 0906         lsl r1,r1,#0x18
0810A242: 0d0e         lsr r5,r1,#0x18
0810A244: 1206         lsl r2,r2,#0x18
0810A246: 140e         lsr r4,r2,#0x18
0810A248: 0e48         ldr r0,[0x0810a284]
0810A24A: 0068         ldr r0,[r0,#0x0]
0810A24C: fbf658f9     bl 0x08005500
0810A250: 021c         add r2,r0,#0x0
0810A252: 002a         cmp r2,#0x0
0810A254: 11d0         beq 0x0810a27a
0810A256: 131c         add r3,r2,#0x0
0810A258: 2533         add r3,#0x25
0810A25A: 0021         mov r1,#0x0
0810A25C: 1020         mov r0,#0x10
0810A25E: 1870         strb r0,[r3,#0x0]
0810A260: 0948         ldr r0,[0x0810a288]
0810A262: 5172         strb r1,[r2,#0x9]
0810A264: 0068         ldr r0,[r0,#0x0]
0810A266: 0068         ldr r0,[r0,#0x0]
0810A268: 5061         str r0,[r2,#0x14]
0810A26A: 0020         mov r0,#0x0
0810A26C: 1184         strh r1,[r2,#0x20]
0810A26E: 111c         add r1,r2,#0x0
0810A270: 2231         add r1,#0x22
0810A272: 0870         strb r0,[r1,#0x0]
0810A274: 9662         str r6,[r2,#0x28]
0810A276: 1574         strb r5,[r2,#0x10]
0810A278: 5474         strb r4,[r2,#0x11]
0810A27A: 101c         add r0,r2,#0x0
0810A27C: 70bc         pop {r4,r5,r6}
0810A27E: 02bc         pop {r1}
0810A280: 0847         bx r1
