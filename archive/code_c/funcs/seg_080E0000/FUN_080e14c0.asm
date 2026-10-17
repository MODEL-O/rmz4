; undefined FUN_080e14c0(void)
; entry 0x80e14c0  size 66 bytes

080E14C0: 10b5         push {r4,lr}
080E14C2: 041c         add r4,r0,#0x0
080E14C4: 606d         ldr r0,[r4,#0x54]
080E14C6: e16d         ldr r1,[r4,#0x5c]
080E14C8: 4018         add r0,r0,r1
080E14CA: 6065         str r0,[r4,#0x54]
080E14CC: a16d         ldr r1,[r4,#0x58]
080E14CE: 226e         ldr r2,[r4,#0x60]
080E14D0: 8918         add r1,r1,r2
080E14D2: a165         str r1,[r4,#0x58]
080E14D4: a36e         ldr r3,[r4,#0x68]
080E14D6: d218         add r2,r2,r3
080E14D8: 2266         str r2,[r4,#0x60]
080E14DA: 26f7cffb     bl 0x08007c7c
080E14DE: 0004         lsl r0,r0,#0x10
080E14E0: 0028         cmp r0,#0x0
080E14E2: 08d0         beq 0x080e14f6
080E14E4: 0749         ldr r1,[0x080e1504]
080E14E6: 607a         ldrb r0,[r4,#0x9]
080E14E8: 8000         lsl r0,r0,#0x2
080E14EA: 4018         add r0,r0,r1
080E14EC: 0221         mov r1,#0x2
080E14EE: e160         str r1,[r4,#0xc]
080E14F0: 0068         ldr r0,[r0,#0x0]
080E14F2: 8068         ldr r0,[r0,#0x8]
080E14F4: 6061         str r0,[r4,#0x14]
080E14F6: a07c         ldrb r0,[r4,#0x12]
080E14F8: 0138         sub r0,#0x1
080E14FA: a074         strb r0,[r4,#0x12]
080E14FC: 10bc         pop {r4}
080E14FE: 01bc         pop {r0}
080E1500: 0047         bx r0
