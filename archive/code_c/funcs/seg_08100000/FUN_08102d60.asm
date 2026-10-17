; undefined FUN_08102d60(void)
; entry 0x8102d60  size 46 bytes

08102D60: 00b5         push {lr}
08102D62: 011c         add r1,r0,#0x0
08102D64: 0023         mov r3,#0x0
08102D66: bc31         add r1,#0xbc
08102D68: 0a88         ldrh r2,[r1,#0x0]
08102D6A: 0949         ldr r1,[0x08102d90]
08102D6C: 8a42         cmp r2,r1
08102D6E: 07d1         bne 0x08102d80
08102D70: 0849         ldr r1,[0x08102d94]
08102D72: 0968         ldr r1,[r1,#0x0]
08102D74: 4a79         ldrb r2,[r1,#0x5]
08102D76: 0121         mov r1,#0x1
08102D78: 1140         and r1,r2
08102D7A: 0029         cmp r1,#0x0
08102D7C: 00d1         bne 0x08102d80
08102D7E: 1423         mov r3,#0x14
08102D80: 002b         cmp r3,#0x0
08102D82: 02d0         beq 0x08102d8a
08102D84: 181c         add r0,r3,#0x0
08102D86: 06f049f9     bl 0x0810901c
08102D8A: 02bc         pop {r1}
08102D8C: 0847         bx r1
