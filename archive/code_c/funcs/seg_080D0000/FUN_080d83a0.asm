; undefined FUN_080d83a0(void)
; entry 0x80d83a0  size 48 bytes

080D83A0: 00b5         push {lr}
080D83A2: 021c         add r2,r0,#0x0
080D83A4: 7330         add r0,#0x73
080D83A6: 0078         ldrb r0,[r0,#0x0]
080D83A8: 0328         cmp r0,#0x3
080D83AA: 0fd1         bne 0x080d83cc
080D83AC: 0649         ldr r1,[0x080d83c8]
080D83AE: 507a         ldrb r0,[r2,#0x9]
080D83B0: 8000         lsl r0,r0,#0x2
080D83B2: 4018         add r0,r0,r1
080D83B4: 0221         mov r1,#0x2
080D83B6: d160         str r1,[r2,#0xc]
080D83B8: 0068         ldr r0,[r0,#0x0]
080D83BA: 8068         ldr r0,[r0,#0x8]
080D83BC: 5061         str r0,[r2,#0x14]
080D83BE: 101c         add r0,r2,#0x0
080D83C0: 00f00af8     bl 0x080d83d8
080D83C4: 05e0         b 0x080d83d2
080D83CC: 101c         add r0,r2,#0x0
080D83CE: 44f70ffe     bl 0x0801cff0
080D83D2: 01bc         pop {r0}
080D83D4: 0047         bx r0
