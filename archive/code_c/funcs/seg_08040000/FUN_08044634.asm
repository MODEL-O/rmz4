; undefined FUN_08044634(void)
; entry 0x8044634  size 42 bytes

08044634: 00b5         push {lr}
08044636: 021c         add r2,r0,#0x0
08044638: 5069         ldr r0,[r2,#0x14]
0804463A: 0121         mov r1,#0x1
0804463C: 0840         and r0,r1
0804463E: 0028         cmp r0,#0x0
08044640: 0bd0         beq 0x0804465a
08044642: d068         ldr r0,[r2,#0xc]
08044644: c06a         ldr r0,[r0,#0x2c]
08044646: d26a         ldr r2,[r2,#0x2c]
08044648: 0023         mov r3,#0x0
0804464A: 416d         ldr r1,[r0,#0x54]
0804464C: 506d         ldr r0,[r2,#0x54]
0804464E: 8142         cmp r1,r0
08044650: 00dd         ble 0x08044654
08044652: 0123         mov r3,#0x1
08044654: 101c         add r0,r2,#0x0
08044656: bc30         add r0,#0xbc
08044658: 0370         strb r3,[r0,#0x0]
0804465A: 01bc         pop {r0}
0804465C: 0047         bx r0
