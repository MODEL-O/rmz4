; undefined FUN_080e5378(void)
; entry 0x80e5378  size 32 bytes

080E5378: 10b5         push {r4,lr}
080E537A: 041c         add r4,r0,#0x0
080E537C: 0649         ldr r1,[0x080e5398]
080E537E: 607b         ldrb r0,[r4,#0xd]
080E5380: 8000         lsl r0,r0,#0x2
080E5382: 4018         add r0,r0,r1
080E5384: 0168         ldr r1,[r0,#0x0]
080E5386: 201c         add r0,r4,#0x0
080E5388: 43f0fafd     bl 0x08128f80
080E538C: 201c         add r0,r4,#0x0
080E538E: 37f72ffe     bl 0x0801cff0
080E5392: 10bc         pop {r4}
080E5394: 01bc         pop {r0}
080E5396: 0047         bx r0
