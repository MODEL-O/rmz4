; undefined FUN_080e6398(void)
; entry 0x80e6398  size 32 bytes

080E6398: 10b5         push {r4,lr}
080E639A: 041c         add r4,r0,#0x0
080E639C: 0649         ldr r1,[0x080e63b8]
080E639E: 607b         ldrb r0,[r4,#0xd]
080E63A0: 8000         lsl r0,r0,#0x2
080E63A2: 4018         add r0,r0,r1
080E63A4: 0168         ldr r1,[r0,#0x0]
080E63A6: 201c         add r0,r4,#0x0
080E63A8: 42f0eafd     bl 0x08128f80
080E63AC: 201c         add r0,r4,#0x0
080E63AE: 36f71ffe     bl 0x0801cff0
080E63B2: 10bc         pop {r4}
080E63B4: 01bc         pop {r0}
080E63B6: 0047         bx r0
