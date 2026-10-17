; undefined FUN_080164e0(void)
; entry 0x80164e0  size 52 bytes

080164E0: 30b5         push {r4,r5,lr}
080164E2: c36d         ldr r3,[r0,#0x5c]
080164E4: 1b04         lsl r3,r3,#0x10
080164E6: 1b0d         lsr r3,r3,#0x14
080164E8: 9b00         lsl r3,r3,#0x2
080164EA: 0a4c         ldr r4,[0x08016514]
080164EC: 1d19         add r5,r3,r4
080164EE: 426b         ldr r2,[r0,#0x34]
080164F0: 416c         ldr r1,[r0,#0x44]
080164F2: 4a43         mul r2,r1
080164F4: 1212         asr r2,r2,#0x8
080164F6: c16c         ldr r1,[r0,#0x4c]
080164F8: 8918         add r1,r1,r2
080164FA: 2980         strh r1,[r5,#0x0]
080164FC: 0234         add r4,#0x2
080164FE: 1b19         add r3,r3,r4
08016500: 826b         ldr r2,[r0,#0x38]
08016502: 816c         ldr r1,[r0,#0x48]
08016504: 5143         mul r1,r2
08016506: 0912         asr r1,r1,#0x8
08016508: 006d         ldr r0,[r0,#0x50]
0801650A: 4018         add r0,r0,r1
0801650C: 1880         strh r0,[r3,#0x0]
0801650E: 30bc         pop {r4,r5}
08016510: 01bc         pop {r0}
08016512: 0047         bx r0
