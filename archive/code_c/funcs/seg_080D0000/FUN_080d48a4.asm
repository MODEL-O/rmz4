; undefined FUN_080d48a4(void)
; entry 0x80d48a4  size 66 bytes

080D48A4: 10b5         push {r4,lr}
080D48A6: 041c         add r4,r0,#0x0
080D48A8: 3430         add r0,#0x34
080D48AA: 0f49         ldr r1,[0x080d48e8]
080D48AC: 2ef7f2f9     bl 0x08002c94
080D48B0: e463         str r4,[r4,#0x3c]
080D48B2: a17a         ldrb r1,[r4,#0xa]
080D48B4: f720         mov r0,#0xf7
080D48B6: 0840         and r0,r1
080D48B8: 0022         mov r2,#0x0
080D48BA: 0121         mov r1,#0x1
080D48BC: 0843         orr r0,r1
080D48BE: 0221         mov r1,#0x2
080D48C0: 0843         orr r0,r1
080D48C2: a072         strb r0,[r4,#0xa]
080D48C4: a274         strb r2,[r4,#0x12]
080D48C6: 0949         ldr r1,[0x080d48ec]
080D48C8: 607a         ldrb r0,[r4,#0x9]
080D48CA: 8000         lsl r0,r0,#0x2
080D48CC: 4018         add r0,r0,r1
080D48CE: 0121         mov r1,#0x1
080D48D0: e160         str r1,[r4,#0xc]
080D48D2: 0068         ldr r0,[r0,#0x0]
080D48D4: 4068         ldr r0,[r0,#0x4]
080D48D6: 6061         str r0,[r4,#0x14]
080D48D8: a273         strb r2,[r4,#0xe]
080D48DA: 201c         add r0,r4,#0x0
080D48DC: fff720fb     bl 0x080d3f20
080D48E0: 10bc         pop {r4}
080D48E2: 01bc         pop {r0}
080D48E4: 0047         bx r0
