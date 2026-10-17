; undefined FUN_08028e48(void)
; entry 0x8028e48  size 60 bytes

08028E48: 00b5         push {lr}
08028E4A: c168         ldr r1,[r0,#0xc]
08028E4C: 4878         ldrb r0,[r1,#0x1]
08028E4E: 0128         cmp r0,#0x1
08028E50: 0bd0         beq 0x08028e6a
08028E52: 0128         cmp r0,#0x1
08028E54: 02dc         bgt 0x08028e5c
08028E56: 0028         cmp r0,#0x0
08028E58: 03d0         beq 0x08028e62
08028E5A: 10e0         b 0x08028e7e
08028E5C: 0228         cmp r0,#0x2
08028E5E: 09d0         beq 0x08028e74
08028E60: 0de0         b 0x08028e7e
08028E62: 8888         ldrh r0,[r1,#0x4]
08028E64: d9f754fe     bl 0x08002b10
08028E68: 09e0         b 0x08028e7e
08028E6A: 0422         mov r2,#0x4
08028E6C: 885e         ldrsh r0,[r1,r2]
08028E6E: d9f775fe     bl 0x08002b5c
08028E72: 04e0         b 0x08028e7e
08028E74: 0422         mov r2,#0x4
08028E76: 885e         ldrsh r0,[r1,r2]
08028E78: 4988         ldrh r1,[r1,#0x2]
08028E7A: d9f77ffe     bl 0x08002b7c
08028E7E: 0020         mov r0,#0x0
08028E80: 02bc         pop {r1}
08028E82: 0847         bx r1
