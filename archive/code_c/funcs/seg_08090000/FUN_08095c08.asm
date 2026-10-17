; undefined FUN_08095c08(void)
; entry 0x8095c08  size 52 bytes

08095C08: 10b5         push {r4,lr}
08095C0A: 041c         add r4,r0,#0x0
08095C0C: 607c         ldrb r0,[r4,#0x11]
08095C0E: 0b49         ldr r1,[0x08095c3c]
08095C10: 8000         lsl r0,r0,#0x2
08095C12: 4018         add r0,r0,r1
08095C14: 0021         mov r1,#0x0
08095C16: 405e         ldrsh r0,[r0,r1]
08095C18: 6cf7a0ff     bl 0x08002b5c
08095C1C: a17a         ldrb r1,[r4,#0xa]
08095C1E: fe20         mov r0,#0xfe
08095C20: 0840         and r0,r1
08095C22: a072         strb r0,[r4,#0xa]
08095C24: 0649         ldr r1,[0x08095c40]
08095C26: 607a         ldrb r0,[r4,#0x9]
08095C28: 8000         lsl r0,r0,#0x2
08095C2A: 4018         add r0,r0,r1
08095C2C: 0421         mov r1,#0x4
08095C2E: e160         str r1,[r4,#0xc]
08095C30: 0068         ldr r0,[r0,#0x0]
08095C32: 0069         ldr r0,[r0,#0x10]
08095C34: 6061         str r0,[r4,#0x14]
08095C36: 10bc         pop {r4}
08095C38: 01bc         pop {r0}
08095C3A: 0047         bx r0
