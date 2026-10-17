; undefined FUN_080cd080(void)
; entry 0x80cd080  size 64 bytes

080CD080: 10b5         push {r4,lr}
080CD082: 041c         add r4,r0,#0x0
080CD084: 606d         ldr r0,[r4,#0x54]
080CD086: e16d         ldr r1,[r4,#0x5c]
080CD088: 4018         add r0,r0,r1
080CD08A: 6065         str r0,[r4,#0x54]
080CD08C: a16d         ldr r1,[r4,#0x58]
080CD08E: 226e         ldr r2,[r4,#0x60]
080CD090: 8918         add r1,r1,r2
080CD092: a165         str r1,[r4,#0x58]
080CD094: 4032         add r2,#0x40
080CD096: 2266         str r2,[r4,#0x60]
080CD098: 3af7f0fd     bl 0x08007c7c
080CD09C: 0004         lsl r0,r0,#0x10
080CD09E: 0028         cmp r0,#0x0
080CD0A0: 08d0         beq 0x080cd0b4
080CD0A2: 0749         ldr r1,[0x080cd0c0]
080CD0A4: 607a         ldrb r0,[r4,#0x9]
080CD0A6: 8000         lsl r0,r0,#0x2
080CD0A8: 4018         add r0,r0,r1
080CD0AA: 0221         mov r1,#0x2
080CD0AC: e160         str r1,[r4,#0xc]
080CD0AE: 0068         ldr r0,[r0,#0x0]
080CD0B0: 8068         ldr r0,[r0,#0x8]
080CD0B2: 6061         str r0,[r4,#0x14]
080CD0B4: 201c         add r0,r4,#0x0
080CD0B6: 4ff79bff     bl 0x0801cff0
080CD0BA: 10bc         pop {r4}
080CD0BC: 01bc         pop {r0}
080CD0BE: 0047         bx r0
