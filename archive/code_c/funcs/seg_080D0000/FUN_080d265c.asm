; undefined FUN_080d265c(void)
; entry 0x80d265c  size 46 bytes

080D265C: 10b5         push {r4,lr}
080D265E: 041c         add r4,r0,#0x0
080D2660: 4af7c6fc     bl 0x0801cff0
080D2664: a07c         ldrb r0,[r4,#0x12]
080D2666: 0138         sub r0,#0x1
080D2668: a074         strb r0,[r4,#0x12]
080D266A: 0006         lsl r0,r0,#0x18
080D266C: 000e         lsr r0,r0,#0x18
080D266E: ff28         cmp r0,#0xff
080D2670: 08d1         bne 0x080d2684
080D2672: 0649         ldr r1,[0x080d268c]
080D2674: 607a         ldrb r0,[r4,#0x9]
080D2676: 8000         lsl r0,r0,#0x2
080D2678: 4018         add r0,r0,r1
080D267A: 0221         mov r1,#0x2
080D267C: e160         str r1,[r4,#0xc]
080D267E: 0068         ldr r0,[r0,#0x0]
080D2680: 8068         ldr r0,[r0,#0x8]
080D2682: 6061         str r0,[r4,#0x14]
080D2684: 10bc         pop {r4}
080D2686: 01bc         pop {r0}
080D2688: 0047         bx r0
