; undefined FUN_080689ac(void)
; entry 0x80689ac  size 50 bytes

080689AC: 10b5         push {r4,lr}
080689AE: 041c         add r4,r0,#0x0
080689B0: 6069         ldr r0,[r4,#0x14]
080689B2: 0121         mov r1,#0x1
080689B4: 0840         and r0,r1
080689B6: 0028         cmp r0,#0x0
080689B8: 0ed0         beq 0x080689d8
080689BA: 4a20         mov r0,#0x4a
080689BC: 9df7e2ff     bl 0x08006984
080689C0: e068         ldr r0,[r4,#0xc]
080689C2: c06a         ldr r0,[r0,#0x2c]
080689C4: e26a         ldr r2,[r4,#0x2c]
080689C6: 0023         mov r3,#0x0
080689C8: 416d         ldr r1,[r0,#0x54]
080689CA: 506d         ldr r0,[r2,#0x54]
080689CC: 8142         cmp r1,r0
080689CE: 00dd         ble 0x080689d2
080689D0: 0123         mov r3,#0x1
080689D2: 101c         add r0,r2,#0x0
080689D4: d830         add r0,#0xd8
080689D6: 0370         strb r3,[r0,#0x0]
080689D8: 10bc         pop {r4}
080689DA: 01bc         pop {r0}
080689DC: 0047         bx r0
