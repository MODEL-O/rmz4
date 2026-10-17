; undefined FUN_08073e00(void)
; entry 0x8073e00  size 42 bytes

08073E00: 10b5         push {r4,lr}
08073E02: 82b0         sub sp,#0x8
08073E04: 041c         add r4,r0,#0x0
08073E06: 0949         ldr r1,[0x08073e2c]
08073E08: 6846         mov r0,sp
08073E0A: 0522         mov r2,#0x5
08073E0C: b5f024fa     bl 0x08129258
08073E10: a434         add r4,#0xa4
08073E12: 0021         mov r1,#0x0
08073E14: 605e         ldrsh r0,[r4,r1]
08073E16: 0028         cmp r0,#0x0
08073E18: 00da         bge 0x08073e1c
08073E1A: 0f30         add r0,#0xf
08073E1C: 0011         asr r0,r0,#0x4
08073E1E: 6844         add r0,sp
08073E20: 0078         ldrb r0,[r0,#0x0]
08073E22: 02b0         add sp,#0x8
08073E24: 10bc         pop {r4}
08073E26: 02bc         pop {r1}
08073E28: 0847         bx r1
