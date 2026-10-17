; undefined FUN_080e4ff0(void)
; entry 0x80e4ff0  size 32 bytes

080E4FF0: 10b5         push {r4,lr}
080E4FF2: 041c         add r4,r0,#0x0
080E4FF4: 0649         ldr r1,[0x080e5010]
080E4FF6: 607b         ldrb r0,[r4,#0xd]
080E4FF8: 8000         lsl r0,r0,#0x2
080E4FFA: 4018         add r0,r0,r1
080E4FFC: 0168         ldr r1,[r0,#0x0]
080E4FFE: 201c         add r0,r4,#0x0
080E5000: 43f0beff     bl 0x08128f80
080E5004: 201c         add r0,r4,#0x0
080E5006: 37f7f3ff     bl 0x0801cff0
080E500A: 10bc         pop {r4}
080E500C: 01bc         pop {r0}
080E500E: 0047         bx r0
