; undefined FUN_080054cc(void)
; entry 0x80054cc  size 50 bytes

080054CC: 00b5         push {lr}
080054CE: 031c         add r3,r0,#0x0
080054D0: 1a69         ldr r2,[r3,#0x10]
080054D2: 002a         cmp r2,#0x0
080054D4: 10d0         beq 0x080054f8
080054D6: 1068         ldr r0,[r2,#0x0]
080054D8: 1861         str r0,[r3,#0x10]
080054DA: 5889         ldrh r0,[r3,#0xa]
080054DC: 0138         sub r0,#0x1
080054DE: 0021         mov r1,#0x0
080054E0: 5881         strh r0,[r3,#0xa]
080054E2: 181c         add r0,r3,#0x0
080054E4: 1430         add r0,#0x14
080054E6: 1060         str r0,[r2,#0x0]
080054E8: 9869         ldr r0,[r3,#0x18]
080054EA: 5060         str r0,[r2,#0x4]
080054EC: 9869         ldr r0,[r3,#0x18]
080054EE: 0260         str r2,[r0,#0x0]
080054F0: 9a61         str r2,[r3,#0x18]
080054F2: 5181         strh r1,[r2,#0xa]
080054F4: d160         str r1,[r2,#0xc]
080054F6: 1161         str r1,[r2,#0x10]
080054F8: 101c         add r0,r2,#0x0
080054FA: 02bc         pop {r1}
080054FC: 0847         bx r1
