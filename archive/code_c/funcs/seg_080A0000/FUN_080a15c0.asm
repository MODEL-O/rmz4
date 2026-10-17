; undefined FUN_080a15c0(void)
; entry 0x80a15c0  size 56 bytes

080A15C0: 10b5         push {r4,lr}
080A15C2: 041c         add r4,r0,#0x0
080A15C4: e07b         ldrb r0,[r4,#0xf]
080A15C6: 0028         cmp r0,#0x0
080A15C8: 0cd1         bne 0x080a15e4
080A15CA: 211c         add r1,r4,#0x0
080A15CC: 2531         add r1,#0x25
080A15CE: 1820         mov r0,#0x18
080A15D0: 0870         strb r0,[r1,#0x0]
080A15D2: 0949         ldr r1,[0x080a15f8]
080A15D4: 201c         add r0,r4,#0x0
080A15D6: 7bf793fc     bl 0x0801cf00
080A15DA: 0848         ldr r0,[0x080a15fc]
080A15DC: 2066         str r0,[r4,#0x60]
080A15DE: e07b         ldrb r0,[r4,#0xf]
080A15E0: 0130         add r0,#0x1
080A15E2: e073         strb r0,[r4,#0xf]
080A15E4: 201c         add r0,r4,#0x0
080A15E6: 7bf703fd     bl 0x0801cff0
080A15EA: a06d         ldr r0,[r4,#0x58]
080A15EC: 216e         ldr r1,[r4,#0x60]
080A15EE: 4018         add r0,r0,r1
080A15F0: a065         str r0,[r4,#0x58]
080A15F2: 10bc         pop {r4}
080A15F4: 01bc         pop {r0}
080A15F6: 0047         bx r0
