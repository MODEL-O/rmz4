; undefined FUN_080d5aa4(void)
; entry 0x80d5aa4  size 68 bytes

080D5AA4: 10b5         push {r4,lr}
080D5AA6: 041c         add r4,r0,#0x0
080D5AA8: 3430         add r0,#0x34
080D5AAA: 0f49         ldr r1,[0x080d5ae8]
080D5AAC: 2df7f2f8     bl 0x08002c94
080D5AB0: e463         str r4,[r4,#0x3c]
080D5AB2: a17a         ldrb r1,[r4,#0xa]
080D5AB4: f720         mov r0,#0xf7
080D5AB6: 0840         and r0,r1
080D5AB8: 0022         mov r2,#0x0
080D5ABA: 0121         mov r1,#0x1
080D5ABC: 0843         orr r0,r1
080D5ABE: 0221         mov r1,#0x2
080D5AC0: 0843         orr r0,r1
080D5AC2: a072         strb r0,[r4,#0xa]
080D5AC4: 201c         add r0,r4,#0x0
080D5AC6: 7730         add r0,#0x77
080D5AC8: 0270         strb r2,[r0,#0x0]
080D5ACA: 0849         ldr r1,[0x080d5aec]
080D5ACC: 607a         ldrb r0,[r4,#0x9]
080D5ACE: 8000         lsl r0,r0,#0x2
080D5AD0: 4018         add r0,r0,r1
080D5AD2: 0121         mov r1,#0x1
080D5AD4: e160         str r1,[r4,#0xc]
080D5AD6: 0068         ldr r0,[r0,#0x0]
080D5AD8: 4068         ldr r0,[r0,#0x4]
080D5ADA: 6061         str r0,[r4,#0x14]
080D5ADC: 201c         add r0,r4,#0x0
080D5ADE: 00f007f8     bl 0x080d5af0
080D5AE2: 10bc         pop {r4}
080D5AE4: 01bc         pop {r0}
080D5AE6: 0047         bx r0
