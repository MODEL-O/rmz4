; undefined FUN_080fe0b4(void)
; entry 0x80fe0b4  size 38 bytes

080FE0B4: 00b5         push {lr}
080FE0B6: 427c         ldrb r2,[r0,#0x11]
080FE0B8: 0321         mov r1,#0x3
080FE0BA: 1140         and r1,r2
080FE0BC: 0631         add r1,#0x6
080FE0BE: 8174         strb r1,[r0,#0x12]
080FE0C0: 064a         ldr r2,[0x080fe0dc]
080FE0C2: 417a         ldrb r1,[r0,#0x9]
080FE0C4: 8900         lsl r1,r1,#0x2
080FE0C6: 8918         add r1,r1,r2
080FE0C8: 0122         mov r2,#0x1
080FE0CA: c260         str r2,[r0,#0xc]
080FE0CC: 0968         ldr r1,[r1,#0x0]
080FE0CE: 4968         ldr r1,[r1,#0x4]
080FE0D0: 4161         str r1,[r0,#0x14]
080FE0D2: fff7b5ff     bl 0x080fe040
080FE0D6: 01bc         pop {r0}
080FE0D8: 0047         bx r0
