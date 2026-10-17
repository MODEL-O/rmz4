; undefined FUN_080c07a0(void)
; entry 0x80c07a0  size 26 bytes

080C07A0: 00b5         push {lr}
080C07A2: 021c         add r2,r0,#0x0
080C07A4: d37b         ldrb r3,[r2,#0xf]
080C07A6: 002b         cmp r3,#0x0
080C07A8: 05d1         bne 0x080c07b6
080C07AA: 907a         ldrb r0,[r2,#0xa]
080C07AC: fe21         mov r1,#0xfe
080C07AE: 0140         and r1,r0
080C07B0: 9172         strb r1,[r2,#0xa]
080C07B2: 581c         add r0,r3,#0x1
080C07B4: d073         strb r0,[r2,#0xf]
080C07B6: 01bc         pop {r0}
080C07B8: 0047         bx r0
