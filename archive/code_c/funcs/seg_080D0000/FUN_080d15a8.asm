; undefined FUN_080d15a8(void)
; entry 0x80d15a8  size 72 bytes

080D15A8: 10b5         push {r4,lr}
080D15AA: 041c         add r4,r0,#0x0
080D15AC: 4bf776fb     bl 0x0801cc9c
080D15B0: a17a         ldrb r1,[r4,#0xa]
080D15B2: 0220         mov r0,#0x2
080D15B4: 0843         orr r0,r1
080D15B6: 0022         mov r2,#0x0
080D15B8: ef21         mov r1,#0xef
080D15BA: 0840         and r0,r1
080D15BC: a072         strb r0,[r4,#0xa]
080D15BE: 0123         mov r3,#0x1
080D15C0: 201c         add r0,r4,#0x0
080D15C2: 4c30         add r0,#0x4c
080D15C4: 0270         strb r2,[r0,#0x0]
080D15C6: 221c         add r2,r4,#0x0
080D15C8: 4a32         add r2,#0x4a
080D15CA: 1178         ldrb r1,[r2,#0x0]
080D15CC: 1120         mov r0,#0x11
080D15CE: 4042         rsb r0,r0
080D15D0: 0840         and r0,r1
080D15D2: 1070         strb r0,[r2,#0x0]
080D15D4: 0649         ldr r1,[0x080d15f0]
080D15D6: 607a         ldrb r0,[r4,#0x9]
080D15D8: 8000         lsl r0,r0,#0x2
080D15DA: 4018         add r0,r0,r1
080D15DC: e360         str r3,[r4,#0xc]
080D15DE: 0068         ldr r0,[r0,#0x0]
080D15E0: 4068         ldr r0,[r0,#0x4]
080D15E2: 6061         str r0,[r4,#0x14]
080D15E4: 201c         add r0,r4,#0x0
080D15E6: 00f005f8     bl 0x080d15f4
080D15EA: 10bc         pop {r4}
080D15EC: 01bc         pop {r0}
080D15EE: 0047         bx r0
