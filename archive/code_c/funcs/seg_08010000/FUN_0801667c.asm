; undefined FUN_0801667c(void)
; entry 0x801667c  size 60 bytes

0801667C: 10b5         push {r4,lr}
0801667E: 031c         add r3,r0,#0x0
08016680: 9c7b         ldrb r4,[r3,#0xe]
08016682: 002c         cmp r4,#0x0
08016684: 15d1         bne 0x080166b2
08016686: d86d         ldr r0,[r3,#0x5c]
08016688: 0004         lsl r0,r0,#0x10
0801668A: 000d         lsr r0,r0,#0x14
0801668C: 4000         lsl r0,r0,#0x1
0801668E: 0a49         ldr r1,[0x080166b8]
08016690: 4018         add r0,r0,r1
08016692: 0288         ldrh r2,[r0,#0x0]
08016694: 0949         ldr r1,[0x080166bc]
08016696: 1140         and r1,r2
08016698: 0322         mov r2,#0x3
0801669A: 1143         orr r1,r2
0801669C: 0180         strh r1,[r0,#0x0]
0801669E: 5c64         str r4,[r3,#0x44]
080166A0: 9c64         str r4,[r3,#0x48]
080166A2: 0748         ldr r0,[0x080166c0]
080166A4: d864         str r0,[r3,#0x4c]
080166A6: a020         mov r0,#0xa0
080166A8: c000         lsl r0,r0,#0x3
080166AA: 1865         str r0,[r3,#0x50]
080166AC: 987b         ldrb r0,[r3,#0xe]
080166AE: 0130         add r0,#0x1
080166B0: 9873         strb r0,[r3,#0xe]
080166B2: 10bc         pop {r4}
080166B4: 01bc         pop {r0}
080166B6: 0047         bx r0
