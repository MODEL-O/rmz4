; undefined FUN_08090d0c(void)
; entry 0x8090d0c  size 66 bytes

08090D0C: 70b5         push {r4,r5,r6,lr}
08090D0E: 041c         add r4,r0,#0x0
08090D10: a56a         ldr r5,[r4,#0x28]
08090D12: 667c         ldrb r6,[r4,#0x11]
08090D14: 287b         ldrb r0,[r5,#0xc]
08090D16: 0128         cmp r0,#0x1
08090D18: 0ed9         bls 0x08090d38
08090D1A: 0649         ldr r1,[0x08090d34]
08090D1C: 607a         ldrb r0,[r4,#0x9]
08090D1E: 8000         lsl r0,r0,#0x2
08090D20: 4018         add r0,r0,r1
08090D22: 0221         mov r1,#0x2
08090D24: e160         str r1,[r4,#0xc]
08090D26: 0068         ldr r0,[r0,#0x0]
08090D28: 8068         ldr r0,[r0,#0x8]
08090D2A: 6061         str r0,[r4,#0x14]
08090D2C: 201c         add r0,r4,#0x0
08090D2E: 00f011f8     bl 0x08090d54
08090D32: 0be0         b 0x08090d4c
08090D38: 201c         add r0,r4,#0x0
08090D3A: 8cf759f9     bl 0x0801cff0
08090D3E: 686d         ldr r0,[r5,#0x54]
08090D40: 6065         str r0,[r4,#0x54]
08090D42: 711c         add r1,r6,#0x1
08090D44: c903         lsl r1,r1,#0xf
08090D46: a86d         ldr r0,[r5,#0x58]
08090D48: 401a         sub r0,r0,r1
08090D4A: a065         str r0,[r4,#0x58]
08090D4C: 70bc         pop {r4,r5,r6}
08090D4E: 01bc         pop {r0}
08090D50: 0047         bx r0
