; undefined FUN_080cd0c4(void)
; entry 0x80cd0c4  size 38 bytes

080CD0C4: 10b5         push {r4,lr}
080CD0C6: 041c         add r4,r0,#0x0
080CD0C8: 211c         add r1,r4,#0x0
080CD0CA: 5431         add r1,#0x54
080CD0CC: 0320         mov r0,#0x3
080CD0CE: 03f0dbfd     bl 0x080d0c88
080CD0D2: 0649         ldr r1,[0x080cd0ec]
080CD0D4: 607a         ldrb r0,[r4,#0x9]
080CD0D6: 8000         lsl r0,r0,#0x2
080CD0D8: 4018         add r0,r0,r1
080CD0DA: 0421         mov r1,#0x4
080CD0DC: e160         str r1,[r4,#0xc]
080CD0DE: 0068         ldr r0,[r0,#0x0]
080CD0E0: 0069         ldr r0,[r0,#0x10]
080CD0E2: 6061         str r0,[r4,#0x14]
080CD0E4: 10bc         pop {r4}
080CD0E6: 01bc         pop {r0}
080CD0E8: 0047         bx r0
