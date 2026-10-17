; undefined FUN_080edbd0(void)
; entry 0x80edbd0  size 70 bytes

080EDBD0: 10b5         push {r4,lr}
080EDBD2: 041c         add r4,r0,#0x0
080EDBD4: a17a         ldrb r1,[r4,#0xa]
080EDBD6: 0120         mov r0,#0x1
080EDBD8: 0843         orr r0,r1
080EDBDA: 0221         mov r1,#0x2
080EDBDC: 0843         orr r0,r1
080EDBDE: a072         strb r0,[r4,#0xa]
080EDBE0: 201c         add r0,r4,#0x0
080EDBE2: 2ff75bf8     bl 0x0801cc9c
080EDBE6: e17a         ldrb r1,[r4,#0xb]
080EDBE8: 0820         mov r0,#0x8
080EDBEA: 0843         orr r0,r1
080EDBEC: e072         strb r0,[r4,#0xb]
080EDBEE: 0a48         ldr r0,[0x080edc18]
080EDBF0: 2063         str r0,[r4,#0x30]
080EDBF2: 0122         mov r2,#0x1
080EDBF4: e284         strh r2,[r4,#0x26]
080EDBF6: 0949         ldr r1,[0x080edc1c]
080EDBF8: 607a         ldrb r0,[r4,#0x9]
080EDBFA: 8000         lsl r0,r0,#0x2
080EDBFC: 4018         add r0,r0,r1
080EDBFE: e260         str r2,[r4,#0xc]
080EDC00: 0068         ldr r0,[r0,#0x0]
080EDC02: 4068         ldr r0,[r0,#0x4]
080EDC04: 6061         str r0,[r4,#0x14]
080EDC06: 607c         ldrb r0,[r4,#0x11]
080EDC08: 6073         strb r0,[r4,#0xd]
080EDC0A: 201c         add r0,r4,#0x0
080EDC0C: fff7dcfd     bl 0x080ed7c8
080EDC10: 10bc         pop {r4}
080EDC12: 01bc         pop {r0}
080EDC14: 0047         bx r0
