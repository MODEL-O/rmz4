; undefined FUN_080723b4(void)
; entry 0x80723b4  size 30 bytes

080723B4: 10b5         push {r4,lr}
080723B6: 041c         add r4,r0,#0x0
080723B8: 01f008fc     bl 0x08073bcc
080723BC: 0549         ldr r1,[0x080723d4]
080723BE: 607b         ldrb r0,[r4,#0xd]
080723C0: 8000         lsl r0,r0,#0x2
080723C2: 4018         add r0,r0,r1
080723C4: 0168         ldr r1,[r0,#0x0]
080723C6: 201c         add r0,r4,#0x0
080723C8: b6f0dafd     bl 0x08128f80
080723CC: 10bc         pop {r4}
080723CE: 01bc         pop {r0}
080723D0: 0047         bx r0
