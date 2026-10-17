; undefined FUN_080fbe70(void)
; entry 0x80fbe70  size 54 bytes

080FBE70: 00b5         push {lr}
080FBE72: 021c         add r2,r0,#0x0
080FBE74: 8c30         add r0,#0x8c
080FBE76: 0068         ldr r0,[r0,#0x0]
080FBE78: 8021         mov r1,#0x80
080FBE7A: 8900         lsl r1,r1,#0x2
080FBE7C: 0840         and r0,r1
080FBE7E: 0028         cmp r0,#0x0
080FBE80: 0ed0         beq 0x080fbea0
080FBE82: 0649         ldr r1,[0x080fbe9c]
080FBE84: 507a         ldrb r0,[r2,#0x9]
080FBE86: 8000         lsl r0,r0,#0x2
080FBE88: 4018         add r0,r0,r1
080FBE8A: 0221         mov r1,#0x2
080FBE8C: d160         str r1,[r2,#0xc]
080FBE8E: 0068         ldr r0,[r0,#0x0]
080FBE90: 8068         ldr r0,[r0,#0x8]
080FBE92: 5061         str r0,[r2,#0x14]
080FBE94: 101c         add r0,r2,#0x0
080FBE96: 00f009f8     bl 0x080fbeac
080FBE9A: 04e0         b 0x080fbea6
080FBEA0: 101c         add r0,r2,#0x0
080FBEA2: 21f7a5f8     bl 0x0801cff0
080FBEA6: 01bc         pop {r0}
080FBEA8: 0047         bx r0
