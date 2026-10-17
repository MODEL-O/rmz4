; undefined FUN_080192b8(void)
; entry 0x80192b8  size 52 bytes

080192B8: 30b5         push {r4,r5,lr}
080192BA: c36d         ldr r3,[r0,#0x5c]
080192BC: 1b04         lsl r3,r3,#0x10
080192BE: 1b0d         lsr r3,r3,#0x14
080192C0: 9b00         lsl r3,r3,#0x2
080192C2: 0a4c         ldr r4,[0x080192ec]
080192C4: 1d19         add r5,r3,r4
080192C6: 426b         ldr r2,[r0,#0x34]
080192C8: 416c         ldr r1,[r0,#0x44]
080192CA: 4a43         mul r2,r1
080192CC: 1212         asr r2,r2,#0x8
080192CE: c16c         ldr r1,[r0,#0x4c]
080192D0: 8918         add r1,r1,r2
080192D2: 2980         strh r1,[r5,#0x0]
080192D4: 0234         add r4,#0x2
080192D6: 1b19         add r3,r3,r4
080192D8: 826b         ldr r2,[r0,#0x38]
080192DA: 816c         ldr r1,[r0,#0x48]
080192DC: 5143         mul r1,r2
080192DE: 0912         asr r1,r1,#0x8
080192E0: 006d         ldr r0,[r0,#0x50]
080192E2: 4018         add r0,r0,r1
080192E4: 1880         strh r0,[r3,#0x0]
080192E6: 30bc         pop {r4,r5}
080192E8: 01bc         pop {r0}
080192EA: 0047         bx r0
