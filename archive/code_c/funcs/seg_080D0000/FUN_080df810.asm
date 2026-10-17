; undefined FUN_080df810(void)
; entry 0x80df810  size 44 bytes

080DF810: 10b5         push {r4,lr}
080DF812: 041c         add r4,r0,#0x0
080DF814: 607b         ldrb r0,[r4,#0xd]
080DF816: 0028         cmp r0,#0x0
080DF818: 0ad1         bne 0x080df830
080DF81A: 0849         ldr r1,[0x080df83c]
080DF81C: 201c         add r0,r4,#0x0
080DF81E: 3df76ffb     bl 0x0801cf00
080DF822: 617c         ldrb r1,[r4,#0x11]
080DF824: 201c         add r0,r4,#0x0
080DF826: fff779ff     bl 0x080df71c
080DF82A: 607b         ldrb r0,[r4,#0xd]
080DF82C: 0130         add r0,#0x1
080DF82E: 6073         strb r0,[r4,#0xd]
080DF830: 201c         add r0,r4,#0x0
080DF832: fff7bbff     bl 0x080df7ac
080DF836: 10bc         pop {r4}
080DF838: 01bc         pop {r0}
080DF83A: 0047         bx r0
