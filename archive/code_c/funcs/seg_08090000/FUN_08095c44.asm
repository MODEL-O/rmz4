; undefined FUN_08095c44(void)
; entry 0x8095c44  size 72 bytes

08095C44: 10b5         push {r4,lr}
08095C46: 041c         add r4,r0,#0x0
08095C48: 3520         mov r0,#0x35
08095C4A: 6cf761ff     bl 0x08002b10
08095C4E: 211c         add r1,r4,#0x0
08095C50: 5431         add r1,#0x54
08095C52: 0120         mov r0,#0x1
08095C54: 3bf018f8     bl 0x080d0c88
08095C58: 201c         add r0,r4,#0x0
08095C5A: 8c30         add r0,#0x8c
08095C5C: 0021         mov r1,#0x0
08095C5E: 0160         str r1,[r0,#0x0]
08095C60: 0430         add r0,#0x4
08095C62: 0160         str r1,[r0,#0x0]
08095C64: 0430         add r0,#0x4
08095C66: 0170         strb r1,[r0,#0x0]
08095C68: a17a         ldrb r1,[r4,#0xa]
08095C6A: fb20         mov r0,#0xfb
08095C6C: 0840         and r0,r1
08095C6E: fe21         mov r1,#0xfe
08095C70: 0840         and r0,r1
08095C72: a072         strb r0,[r4,#0xa]
08095C74: 0549         ldr r1,[0x08095c8c]
08095C76: 607a         ldrb r0,[r4,#0x9]
08095C78: 8000         lsl r0,r0,#0x2
08095C7A: 4018         add r0,r0,r1
08095C7C: 0421         mov r1,#0x4
08095C7E: e160         str r1,[r4,#0xc]
08095C80: 0068         ldr r0,[r0,#0x0]
08095C82: 0069         ldr r0,[r0,#0x10]
08095C84: 6061         str r0,[r4,#0x14]
08095C86: 10bc         pop {r4}
08095C88: 01bc         pop {r0}
08095C8A: 0047         bx r0
