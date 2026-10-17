; undefined FUN_080c6cb8(void)
; entry 0x80c6cb8  size 42 bytes

080C6CB8: 10b5         push {r4,lr}
080C6CBA: 041c         add r4,r0,#0x0
080C6CBC: 56f798f9     bl 0x0801cff0
080C6CC0: 201c         add r0,r4,#0x0
080C6CC2: 7330         add r0,#0x73
080C6CC4: 0078         ldrb r0,[r0,#0x0]
080C6CC6: 0328         cmp r0,#0x3
080C6CC8: 08d1         bne 0x080c6cdc
080C6CCA: 0649         ldr r1,[0x080c6ce4]
080C6CCC: 607a         ldrb r0,[r4,#0x9]
080C6CCE: 8000         lsl r0,r0,#0x2
080C6CD0: 4018         add r0,r0,r1
080C6CD2: 0221         mov r1,#0x2
080C6CD4: e160         str r1,[r4,#0xc]
080C6CD6: 0068         ldr r0,[r0,#0x0]
080C6CD8: 8068         ldr r0,[r0,#0x8]
080C6CDA: 6061         str r0,[r4,#0x14]
080C6CDC: 10bc         pop {r4}
080C6CDE: 01bc         pop {r0}
080C6CE0: 0047         bx r0
