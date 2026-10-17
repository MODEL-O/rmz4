; undefined FUN_080da4dc(void)
; entry 0x80da4dc  size 50 bytes

080DA4DC: 10b5         push {r4,lr}
080DA4DE: 041c         add r4,r0,#0x0
080DA4E0: 11f072fd     bl 0x080ebfc8
080DA4E4: 0004         lsl r0,r0,#0x10
080DA4E6: 0028         cmp r0,#0x0
080DA4E8: 0ed1         bne 0x080da508
080DA4EA: a17a         ldrb r1,[r4,#0xa]
080DA4EC: fe20         mov r0,#0xfe
080DA4EE: 0840         and r0,r1
080DA4F0: fd21         mov r1,#0xfd
080DA4F2: 0840         and r0,r1
080DA4F4: a072         strb r0,[r4,#0xa]
080DA4F6: 0649         ldr r1,[0x080da510]
080DA4F8: 607a         ldrb r0,[r4,#0x9]
080DA4FA: 8000         lsl r0,r0,#0x2
080DA4FC: 4018         add r0,r0,r1
080DA4FE: 0321         mov r1,#0x3
080DA500: e160         str r1,[r4,#0xc]
080DA502: 0068         ldr r0,[r0,#0x0]
080DA504: c068         ldr r0,[r0,#0xc]
080DA506: 6061         str r0,[r4,#0x14]
080DA508: 10bc         pop {r4}
080DA50A: 01bc         pop {r0}
080DA50C: 0047         bx r0
