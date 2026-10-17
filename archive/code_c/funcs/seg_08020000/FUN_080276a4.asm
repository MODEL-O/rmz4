; undefined FUN_080276a4(void)
; entry 0x80276a4  size 54 bytes

080276A4: 70b5         push {r4,r5,r6,lr}
080276A6: 051c         add r5,r0,#0x0
080276A8: 0e1c         add r6,r1,#0x0
080276AA: 2b1c         add r3,r5,#0x0
080276AC: 3033         add r3,#0x30
080276AE: 2c6b         ldr r4,[r5,#0x30]
080276B0: 002c         cmp r4,#0x0
080276B2: 0fd1         bne 0x080276d4
080276B4: 907a         ldrb r0,[r2,#0xa]
080276B6: 8021         mov r1,#0x80
080276B8: 0143         orr r1,r0
080276BA: 9172         strb r1,[r2,#0xa]
080276BC: 9361         str r3,[r2,#0x18]
080276BE: 2a63         str r2,[r5,#0x30]
080276C0: 0220         mov r0,#0x2
080276C2: 1872         strb r0,[r3,#0x8]
080276C4: 5c72         strb r4,[r3,#0x9]
080276C6: dc81         strh r4,[r3,#0xe]
080276C8: 9c81         strh r4,[r3,#0xc]
080276CA: 5c81         strh r4,[r3,#0xa]
080276CC: 281c         add r0,r5,#0x0
080276CE: 311c         add r1,r6,#0x0
080276D0: fff78eff     bl 0x080275f0
080276D4: 70bc         pop {r4,r5,r6}
080276D6: 01bc         pop {r0}
080276D8: 0047         bx r0
