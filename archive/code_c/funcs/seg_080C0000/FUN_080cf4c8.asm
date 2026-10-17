; undefined FUN_080cf4c8(void)
; entry 0x80cf4c8  size 58 bytes

080CF4C8: 00b5         push {lr}
080CF4CA: 021c         add r2,r0,#0x0
080CF4CC: bc30         add r0,#0xbc
080CF4CE: 0078         ldrb r0,[r0,#0x0]
080CF4D0: 0028         cmp r0,#0x0
080CF4D2: 0fd0         beq 0x080cf4f4
080CF4D4: 0649         ldr r1,[0x080cf4f0]
080CF4D6: 507a         ldrb r0,[r2,#0x9]
080CF4D8: 8000         lsl r0,r0,#0x2
080CF4DA: 4018         add r0,r0,r1
080CF4DC: 0221         mov r1,#0x2
080CF4DE: d160         str r1,[r2,#0xc]
080CF4E0: 0068         ldr r0,[r0,#0x0]
080CF4E2: 8068         ldr r0,[r0,#0x8]
080CF4E4: 5061         str r0,[r2,#0x14]
080CF4E6: 101c         add r0,r2,#0x0
080CF4E8: 00f05ef9     bl 0x080cf7a8
080CF4EC: 0ae0         b 0x080cf504
080CF4F4: 0448         ldr r0,[0x080cf508]
080CF4F6: 517b         ldrb r1,[r2,#0xd]
080CF4F8: 8900         lsl r1,r1,#0x2
080CF4FA: 0918         add r1,r1,r0
080CF4FC: 0968         ldr r1,[r1,#0x0]
080CF4FE: 101c         add r0,r2,#0x0
080CF500: 59f03efd     bl 0x08128f80
080CF504: 01bc         pop {r0}
080CF506: 0047         bx r0
