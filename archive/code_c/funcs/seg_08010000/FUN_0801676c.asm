; undefined FUN_0801676c(void)
; entry 0x801676c  size 52 bytes

0801676C: 30b5         push {r4,r5,lr}
0801676E: c36d         ldr r3,[r0,#0x5c]
08016770: 1b04         lsl r3,r3,#0x10
08016772: 1b0d         lsr r3,r3,#0x14
08016774: 9b00         lsl r3,r3,#0x2
08016776: 0a4c         ldr r4,[0x080167a0]
08016778: 1d19         add r5,r3,r4
0801677A: 426b         ldr r2,[r0,#0x34]
0801677C: 416c         ldr r1,[r0,#0x44]
0801677E: 4a43         mul r2,r1
08016780: 1212         asr r2,r2,#0x8
08016782: c16c         ldr r1,[r0,#0x4c]
08016784: 8918         add r1,r1,r2
08016786: 2980         strh r1,[r5,#0x0]
08016788: 0234         add r4,#0x2
0801678A: 1b19         add r3,r3,r4
0801678C: 826b         ldr r2,[r0,#0x38]
0801678E: 816c         ldr r1,[r0,#0x48]
08016790: 5143         mul r1,r2
08016792: 0912         asr r1,r1,#0x8
08016794: 006d         ldr r0,[r0,#0x50]
08016796: 4018         add r0,r0,r1
08016798: 1880         strh r0,[r3,#0x0]
0801679A: 30bc         pop {r4,r5}
0801679C: 01bc         pop {r0}
0801679E: 0047         bx r0
