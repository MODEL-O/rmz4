; undefined FUN_08040aa8(void)
; entry 0x8040aa8  size 48 bytes

08040AA8: 021c         add r2,r0,#0x0
08040AAA: 8c30         add r0,#0x8c
08040AAC: 0021         mov r1,#0x0
08040AAE: 0160         str r1,[r0,#0x0]
08040AB0: 0430         add r0,#0x4
08040AB2: 0160         str r1,[r0,#0x0]
08040AB4: 0430         add r0,#0x4
08040AB6: 0170         strb r1,[r0,#0x0]
08040AB8: 917a         ldrb r1,[r2,#0xa]
08040ABA: fb20         mov r0,#0xfb
08040ABC: 0840         and r0,r1
08040ABE: fe21         mov r1,#0xfe
08040AC0: 0840         and r0,r1
08040AC2: 9072         strb r0,[r2,#0xa]
08040AC4: 0449         ldr r1,[0x08040ad8]
08040AC6: 507a         ldrb r0,[r2,#0x9]
08040AC8: 8000         lsl r0,r0,#0x2
08040ACA: 4018         add r0,r0,r1
08040ACC: 0421         mov r1,#0x4
08040ACE: d160         str r1,[r2,#0xc]
08040AD0: 0068         ldr r0,[r0,#0x0]
08040AD2: 0069         ldr r0,[r0,#0x10]
08040AD4: 5061         str r0,[r2,#0x14]
08040AD6: 7047         bx lr
