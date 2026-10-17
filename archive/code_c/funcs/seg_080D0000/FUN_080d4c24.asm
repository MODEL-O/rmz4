; undefined FUN_080d4c24(void)
; entry 0x80d4c24  size 68 bytes

080D4C24: 10b5         push {r4,lr}
080D4C26: 041c         add r4,r0,#0x0
080D4C28: 48f7e2f9     bl 0x0801cff0
080D4C2C: 207c         ldrb r0,[r4,#0x10]
080D4C2E: 0028         cmp r0,#0x0
080D4C30: 08d0         beq 0x080d4c44
080D4C32: a26a         ldr r2,[r4,#0x28]
080D4C34: 1068         ldr r0,[r2,#0x0]
080D4C36: 616e         ldr r1,[r4,#0x64]
080D4C38: 4018         add r0,r0,r1
080D4C3A: 6065         str r0,[r4,#0x54]
080D4C3C: 5068         ldr r0,[r2,#0x4]
080D4C3E: a16e         ldr r1,[r4,#0x68]
080D4C40: 4018         add r0,r0,r1
080D4C42: a065         str r0,[r4,#0x58]
080D4C44: a07c         ldrb r0,[r4,#0x12]
080D4C46: 0138         sub r0,#0x1
080D4C48: a074         strb r0,[r4,#0x12]
080D4C4A: 0006         lsl r0,r0,#0x18
080D4C4C: 0028         cmp r0,#0x0
080D4C4E: 08d1         bne 0x080d4c62
080D4C50: 0549         ldr r1,[0x080d4c68]
080D4C52: 607a         ldrb r0,[r4,#0x9]
080D4C54: 8000         lsl r0,r0,#0x2
080D4C56: 4018         add r0,r0,r1
080D4C58: 0221         mov r1,#0x2
080D4C5A: e160         str r1,[r4,#0xc]
080D4C5C: 0068         ldr r0,[r0,#0x0]
080D4C5E: 8068         ldr r0,[r0,#0x8]
080D4C60: 6061         str r0,[r4,#0x14]
080D4C62: 10bc         pop {r4}
080D4C64: 01bc         pop {r0}
080D4C66: 0047         bx r0
