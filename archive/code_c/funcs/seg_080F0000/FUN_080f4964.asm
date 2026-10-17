; undefined FUN_080f4964(void)
; entry 0x80f4964  size 38 bytes

080F4964: 30b5         push {r4,r5,lr}
080F4966: 82b0         sub sp,#0x8
080F4968: 051c         add r5,r0,#0x0
080F496A: 687b         ldrb r0,[r5,#0xd]
080F496C: 0528         cmp r0,#0x5
080F496E: 00d9         bls 0x080f4972
080F4970: 7ce1         b 0x080f4c6c
080F4972: 8000         lsl r0,r0,#0x2
080F4974: 0149         ldr r1,[0x080f497c]
080F4976: 4018         add r0,r0,r1
080F4978: 0068         ldr r0,[r0,#0x0]
080F497A: 8746         mov pc,r0
080F4C6C: 281c         add r0,r5,#0x0
080F4C6E: 28f7bff9     bl 0x0801cff0
080F4C72: 02b0         add sp,#0x8
080F4C74: 30bc         pop {r4,r5}
080F4C76: 01bc         pop {r0}
080F4C78: 0047         bx r0
