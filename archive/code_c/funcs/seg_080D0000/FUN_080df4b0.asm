; undefined FUN_080df4b0(void)
; entry 0x80df4b0  size 32 bytes

080DF4B0: 10b5         push {r4,lr}
080DF4B2: 041c         add r4,r0,#0x0
080DF4B4: 0649         ldr r1,[0x080df4d0]
080DF4B6: 607c         ldrb r0,[r4,#0x11]
080DF4B8: 8000         lsl r0,r0,#0x2
080DF4BA: 4018         add r0,r0,r1
080DF4BC: 0168         ldr r1,[r0,#0x0]
080DF4BE: 201c         add r0,r4,#0x0
080DF4C0: 49f05efd     bl 0x08128f80
080DF4C4: 201c         add r0,r4,#0x0
080DF4C6: 3df793fd     bl 0x0801cff0
080DF4CA: 10bc         pop {r4}
080DF4CC: 01bc         pop {r0}
080DF4CE: 0047         bx r0
