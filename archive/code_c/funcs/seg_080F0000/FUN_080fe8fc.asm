; undefined FUN_080fe8fc(void)
; entry 0x80fe8fc  size 54 bytes

080FE8FC: 00b5         push {lr}
080FE8FE: 021c         add r2,r0,#0x0
080FE900: 8c30         add r0,#0x8c
080FE902: 0068         ldr r0,[r0,#0x0]
080FE904: 8021         mov r1,#0x80
080FE906: 8900         lsl r1,r1,#0x2
080FE908: 0840         and r0,r1
080FE90A: 0028         cmp r0,#0x0
080FE90C: 0ed0         beq 0x080fe92c
080FE90E: 0649         ldr r1,[0x080fe928]
080FE910: 507a         ldrb r0,[r2,#0x9]
080FE912: 8000         lsl r0,r0,#0x2
080FE914: 4018         add r0,r0,r1
080FE916: 0221         mov r1,#0x2
080FE918: d160         str r1,[r2,#0xc]
080FE91A: 0068         ldr r0,[r0,#0x0]
080FE91C: 8068         ldr r0,[r0,#0x8]
080FE91E: 5061         str r0,[r2,#0x14]
080FE920: 101c         add r0,r2,#0x0
080FE922: 00f009f8     bl 0x080fe938
080FE926: 04e0         b 0x080fe932
080FE92C: 101c         add r0,r2,#0x0
080FE92E: 1ef75ffb     bl 0x0801cff0
080FE932: 01bc         pop {r0}
080FE934: 0047         bx r0
