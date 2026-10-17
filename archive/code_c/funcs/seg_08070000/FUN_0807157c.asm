; undefined FUN_0807157c(void)
; entry 0x807157c  size 30 bytes

0807157C: 10b5         push {r4,lr}
0807157E: 041c         add r4,r0,#0x0
08071580: 02f024fb     bl 0x08073bcc
08071584: 0549         ldr r1,[0x0807159c]
08071586: 607b         ldrb r0,[r4,#0xd]
08071588: 8000         lsl r0,r0,#0x2
0807158A: 4018         add r0,r0,r1
0807158C: 0168         ldr r1,[r0,#0x0]
0807158E: 201c         add r0,r4,#0x0
08071590: b7f0f6fc     bl 0x08128f80
08071594: 10bc         pop {r4}
08071596: 01bc         pop {r0}
08071598: 0047         bx r0
