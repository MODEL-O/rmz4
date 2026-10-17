; undefined FUN_080e971c(void)
; entry 0x80e971c  size 54 bytes

080E971C: 00b5         push {lr}
080E971E: 021c         add r2,r0,#0x0
080E9720: 8c30         add r0,#0x8c
080E9722: 0068         ldr r0,[r0,#0x0]
080E9724: 8021         mov r1,#0x80
080E9726: 8900         lsl r1,r1,#0x2
080E9728: 0840         and r0,r1
080E972A: 0028         cmp r0,#0x0
080E972C: 0ed0         beq 0x080e974c
080E972E: 0649         ldr r1,[0x080e9748]
080E9730: 507a         ldrb r0,[r2,#0x9]
080E9732: 8000         lsl r0,r0,#0x2
080E9734: 4018         add r0,r0,r1
080E9736: 0221         mov r1,#0x2
080E9738: d160         str r1,[r2,#0xc]
080E973A: 0068         ldr r0,[r0,#0x0]
080E973C: 8068         ldr r0,[r0,#0x8]
080E973E: 5061         str r0,[r2,#0x14]
080E9740: 101c         add r0,r2,#0x0
080E9742: 00f009f8     bl 0x080e9758
080E9746: 04e0         b 0x080e9752
080E974C: 101c         add r0,r2,#0x0
080E974E: 33f74ffc     bl 0x0801cff0
080E9752: 01bc         pop {r0}
080E9754: 0047         bx r0
