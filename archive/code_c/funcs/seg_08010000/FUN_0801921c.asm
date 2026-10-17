; undefined FUN_0801921c(void)
; entry 0x801921c  size 52 bytes

0801921C: 30b5         push {r4,r5,lr}
0801921E: c36d         ldr r3,[r0,#0x5c]
08019220: 1b04         lsl r3,r3,#0x10
08019222: 1b0d         lsr r3,r3,#0x14
08019224: 9b00         lsl r3,r3,#0x2
08019226: 0a4c         ldr r4,[0x08019250]
08019228: 1d19         add r5,r3,r4
0801922A: 426b         ldr r2,[r0,#0x34]
0801922C: 416c         ldr r1,[r0,#0x44]
0801922E: 4a43         mul r2,r1
08019230: 1212         asr r2,r2,#0x8
08019232: c16c         ldr r1,[r0,#0x4c]
08019234: 8918         add r1,r1,r2
08019236: 2980         strh r1,[r5,#0x0]
08019238: 0234         add r4,#0x2
0801923A: 1b19         add r3,r3,r4
0801923C: 826b         ldr r2,[r0,#0x38]
0801923E: 816c         ldr r1,[r0,#0x48]
08019240: 5143         mul r1,r2
08019242: 0912         asr r1,r1,#0x8
08019244: 006d         ldr r0,[r0,#0x50]
08019246: 4018         add r0,r0,r1
08019248: 1880         strh r0,[r3,#0x0]
0801924A: 30bc         pop {r4,r5}
0801924C: 01bc         pop {r0}
0801924E: 0047         bx r0
