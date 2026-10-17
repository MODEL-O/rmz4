; undefined FUN_080b0988(void)
; entry 0x80b0988  size 58 bytes

080B0988: 00b5         push {lr}
080B098A: 021c         add r2,r0,#0x0
080B098C: 506d         ldr r0,[r2,#0x54]
080B098E: d16d         ldr r1,[r2,#0x5c]
080B0990: 4018         add r0,r0,r1
080B0992: 5065         str r0,[r2,#0x54]
080B0994: 906d         ldr r0,[r2,#0x58]
080B0996: 116e         ldr r1,[r2,#0x60]
080B0998: 4018         add r0,r0,r1
080B099A: 9065         str r0,[r2,#0x58]
080B099C: 907c         ldrb r0,[r2,#0x12]
080B099E: 0138         sub r0,#0x1
080B09A0: 0021         mov r1,#0x0
080B09A2: 9074         strb r0,[r2,#0x12]
080B09A4: 0006         lsl r0,r0,#0x18
080B09A6: 0028         cmp r0,#0x0
080B09A8: 02d1         bne 0x080b09b0
080B09AA: 0120         mov r0,#0x1
080B09AC: 5073         strb r0,[r2,#0xd]
080B09AE: 9173         strb r1,[r2,#0xe]
080B09B0: 906a         ldr r0,[r2,#0x28]
080B09B2: 007b         ldrb r0,[r0,#0xc]
080B09B4: 0128         cmp r0,#0x1
080B09B6: 02d9         bls 0x080b09be
080B09B8: 0220         mov r0,#0x2
080B09BA: 5073         strb r0,[r2,#0xd]
080B09BC: 9173         strb r1,[r2,#0xe]
080B09BE: 01bc         pop {r0}
080B09C0: 0047         bx r0
