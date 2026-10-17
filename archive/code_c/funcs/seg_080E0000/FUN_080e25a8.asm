; undefined FUN_080e25a8(void)
; entry 0x80e25a8  size 52 bytes

080E25A8: 10b5         push {r4,lr}
080E25AA: 041c         add r4,r0,#0x0
080E25AC: 606d         ldr r0,[r4,#0x54]
080E25AE: a16d         ldr r1,[r4,#0x58]
080E25B0: 25f764fb     bl 0x08007c7c
080E25B4: 0004         lsl r0,r0,#0x10
080E25B6: 0648         ldr r0,[0x080e25d0]
080E25B8: 0649         ldr r1,[0x080e25d4]
080E25BA: 4018         add r0,r0,r1
080E25BC: a16d         ldr r1,[r4,#0x58]
080E25BE: 064a         ldr r2,[0x080e25d8]
080E25C0: 8918         add r1,r1,r2
080E25C2: 0068         ldr r0,[r0,#0x0]
080E25C4: 8842         cmp r0,r1
080E25C6: 09dd         ble 0x080e25dc
080E25C8: 2a20         mov r0,#0x2a
080E25CA: 20f7a1fa     bl 0x08002b10
080E25CE: 08e0         b 0x080e25e2
080E25DC: 3120         mov r0,#0x31
080E25DE: 20f797fa     bl 0x08002b10
080E25E2: 10bc         pop {r4}
080E25E4: 01bc         pop {r0}
080E25E6: 0047         bx r0
