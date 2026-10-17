; undefined FUN_080d2564(void)
; entry 0x80d2564  size 62 bytes

080D2564: 10b5         push {r4,lr}
080D2566: 041c         add r4,r0,#0x0
080D2568: 4af742fd     bl 0x0801cff0
080D256C: 606d         ldr r0,[r4,#0x54]
080D256E: e16d         ldr r1,[r4,#0x5c]
080D2570: 4018         add r0,r0,r1
080D2572: 6065         str r0,[r4,#0x54]
080D2574: a16d         ldr r1,[r4,#0x58]
080D2576: 226e         ldr r2,[r4,#0x60]
080D2578: 8918         add r1,r1,r2
080D257A: a165         str r1,[r4,#0x58]
080D257C: 4032         add r2,#0x40
080D257E: 2266         str r2,[r4,#0x60]
080D2580: 35f77cfb     bl 0x08007c7c
080D2584: 0004         lsl r0,r0,#0x10
080D2586: 0028         cmp r0,#0x0
080D2588: 08d0         beq 0x080d259c
080D258A: 0649         ldr r1,[0x080d25a4]
080D258C: 607a         ldrb r0,[r4,#0x9]
080D258E: 8000         lsl r0,r0,#0x2
080D2590: 4018         add r0,r0,r1
080D2592: 0221         mov r1,#0x2
080D2594: e160         str r1,[r4,#0xc]
080D2596: 0068         ldr r0,[r0,#0x0]
080D2598: 8068         ldr r0,[r0,#0x8]
080D259A: 6061         str r0,[r4,#0x14]
080D259C: 10bc         pop {r4}
080D259E: 01bc         pop {r0}
080D25A0: 0047         bx r0
