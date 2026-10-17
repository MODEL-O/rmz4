; undefined FUN_080abae8(void)
; entry 0x80abae8  size 58 bytes

080ABAE8: 00b5         push {lr}
080ABAEA: 021c         add r2,r0,#0x0
080ABAEC: 906a         ldr r0,[r2,#0x28]
080ABAEE: 007b         ldrb r0,[r0,#0xc]
080ABAF0: 0128         cmp r0,#0x1
080ABAF2: 0fd9         bls 0x080abb14
080ABAF4: 0649         ldr r1,[0x080abb10]
080ABAF6: 507a         ldrb r0,[r2,#0x9]
080ABAF8: 8000         lsl r0,r0,#0x2
080ABAFA: 4018         add r0,r0,r1
080ABAFC: 0221         mov r1,#0x2
080ABAFE: d160         str r1,[r2,#0xc]
080ABB00: 0068         ldr r0,[r0,#0x0]
080ABB02: 8068         ldr r0,[r0,#0x8]
080ABB04: 5061         str r0,[r2,#0x14]
080ABB06: 101c         add r0,r2,#0x0
080ABB08: 00f076f9     bl 0x080abdf8
080ABB0C: 0ae0         b 0x080abb24
080ABB14: 0448         ldr r0,[0x080abb28]
080ABB16: 517b         ldrb r1,[r2,#0xd]
080ABB18: 8900         lsl r1,r1,#0x2
080ABB1A: 0918         add r1,r1,r0
080ABB1C: 0968         ldr r1,[r1,#0x0]
080ABB1E: 101c         add r0,r2,#0x0
080ABB20: 7df02efa     bl 0x08128f80
080ABB24: 01bc         pop {r0}
080ABB26: 0047         bx r0
