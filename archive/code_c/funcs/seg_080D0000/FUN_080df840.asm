; undefined FUN_080df840(void)
; entry 0x80df840  size 44 bytes

080DF840: 10b5         push {r4,lr}
080DF842: 041c         add r4,r0,#0x0
080DF844: 607b         ldrb r0,[r4,#0xd]
080DF846: 0028         cmp r0,#0x0
080DF848: 0ad1         bne 0x080df860
080DF84A: 0849         ldr r1,[0x080df86c]
080DF84C: 201c         add r0,r4,#0x0
080DF84E: 3df757fb     bl 0x0801cf00
080DF852: 617c         ldrb r1,[r4,#0x11]
080DF854: 201c         add r0,r4,#0x0
080DF856: fff761ff     bl 0x080df71c
080DF85A: 607b         ldrb r0,[r4,#0xd]
080DF85C: 0130         add r0,#0x1
080DF85E: 6073         strb r0,[r4,#0xd]
080DF860: 201c         add r0,r4,#0x0
080DF862: fff7a3ff     bl 0x080df7ac
080DF866: 10bc         pop {r4}
080DF868: 01bc         pop {r0}
080DF86A: 0047         bx r0
