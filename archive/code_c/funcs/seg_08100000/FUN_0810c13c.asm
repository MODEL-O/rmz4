; undefined FUN_0810c13c(void)
; entry 0x810c13c  size 50 bytes

0810C13C: 10b5         push {r4,lr}
0810C13E: 041c         add r4,r0,#0x0
0810C140: 0b49         ldr r1,[0x0810c170]
0810C142: 207c         ldrb r0,[r4,#0x10]
0810C144: 8000         lsl r0,r0,#0x2
0810C146: 4018         add r0,r0,r1
0810C148: 0168         ldr r1,[r0,#0x0]
0810C14A: 201c         add r0,r4,#0x0
0810C14C: 1cf018ff     bl 0x08128f80
0810C150: 0849         ldr r1,[0x0810c174]
0810C152: 607a         ldrb r0,[r4,#0x9]
0810C154: 8000         lsl r0,r0,#0x2
0810C156: 4018         add r0,r0,r1
0810C158: 0121         mov r1,#0x1
0810C15A: e160         str r1,[r4,#0xc]
0810C15C: 0068         ldr r0,[r0,#0x0]
0810C15E: 4068         ldr r0,[r0,#0x4]
0810C160: 6061         str r0,[r4,#0x14]
0810C162: 201c         add r0,r4,#0x0
0810C164: 00f008f8     bl 0x0810c178
0810C168: 10bc         pop {r4}
0810C16A: 01bc         pop {r0}
0810C16C: 0047         bx r0
