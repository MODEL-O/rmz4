; undefined FUN_080f64c0(void)
; entry 0x80f64c0  size 32 bytes

080F64C0: 10b5         push {r4,lr}
080F64C2: 041c         add r4,r0,#0x0
080F64C4: 0649         ldr r1,[0x080f64e0]
080F64C6: 607b         ldrb r0,[r4,#0xd]
080F64C8: 8000         lsl r0,r0,#0x2
080F64CA: 4018         add r0,r0,r1
080F64CC: 0168         ldr r1,[r0,#0x0]
080F64CE: 201c         add r0,r4,#0x0
080F64D0: 32f056fd     bl 0x08128f80
080F64D4: 201c         add r0,r4,#0x0
080F64D6: 26f78bfd     bl 0x0801cff0
080F64DA: 10bc         pop {r4}
080F64DC: 01bc         pop {r0}
080F64DE: 0047         bx r0
