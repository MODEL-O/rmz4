; undefined FUN_0801ba54(void)
; entry 0x801ba54  size 46 bytes

0801BA54: 10b5         push {r4,lr}
0801BA56: 041c         add r4,r0,#0x0
0801BA58: e520         mov r0,#0xe5
0801BA5A: 4000         lsl r0,r0,#0x1
0801BA5C: e7f77ef8     bl 0x08002b5c
0801BA60: 0020         mov r0,#0x0
0801BA62: 2065         str r0,[r4,#0x50]
0801BA64: a26e         ldr r2,[r4,#0x68]
0801BA66: 002a         cmp r2,#0x0
0801BA68: 08d0         beq 0x0801ba7c
0801BA6A: 0649         ldr r1,[0x0801ba84]
0801BA6C: 507a         ldrb r0,[r2,#0x9]
0801BA6E: 8000         lsl r0,r0,#0x2
0801BA70: 4018         add r0,r0,r1
0801BA72: 0221         mov r1,#0x2
0801BA74: d160         str r1,[r2,#0xc]
0801BA76: 0068         ldr r0,[r0,#0x0]
0801BA78: 8068         ldr r0,[r0,#0x8]
0801BA7A: 5061         str r0,[r2,#0x14]
0801BA7C: 10bc         pop {r4}
0801BA7E: 01bc         pop {r0}
0801BA80: 0047         bx r0
