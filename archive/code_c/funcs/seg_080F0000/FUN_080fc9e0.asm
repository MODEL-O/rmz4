; undefined FUN_080fc9e0(void)
; entry 0x80fc9e0  size 54 bytes

080FC9E0: 00b5         push {lr}
080FC9E2: 021c         add r2,r0,#0x0
080FC9E4: 8c30         add r0,#0x8c
080FC9E6: 0068         ldr r0,[r0,#0x0]
080FC9E8: 8021         mov r1,#0x80
080FC9EA: 8900         lsl r1,r1,#0x2
080FC9EC: 0840         and r0,r1
080FC9EE: 0028         cmp r0,#0x0
080FC9F0: 0ed0         beq 0x080fca10
080FC9F2: 0649         ldr r1,[0x080fca0c]
080FC9F4: 507a         ldrb r0,[r2,#0x9]
080FC9F6: 8000         lsl r0,r0,#0x2
080FC9F8: 4018         add r0,r0,r1
080FC9FA: 0221         mov r1,#0x2
080FC9FC: d160         str r1,[r2,#0xc]
080FC9FE: 0068         ldr r0,[r0,#0x0]
080FCA00: 8068         ldr r0,[r0,#0x8]
080FCA02: 5061         str r0,[r2,#0x14]
080FCA04: 101c         add r0,r2,#0x0
080FCA06: 00f009f8     bl 0x080fca1c
080FCA0A: 04e0         b 0x080fca16
080FCA10: 101c         add r0,r2,#0x0
080FCA12: 20f7edfa     bl 0x0801cff0
080FCA16: 01bc         pop {r0}
080FCA18: 0047         bx r0
