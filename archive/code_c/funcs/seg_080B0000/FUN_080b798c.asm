; undefined FUN_080b798c(void)
; entry 0x80b798c  size 76 bytes

080B798C: 70b5         push {r4,r5,r6,lr}
080B798E: 041c         add r4,r0,#0x0
080B7990: 261c         add r6,r4,#0x0
080B7992: c036         add r6,#0xc0
080B7994: 3568         ldr r5,[r6,#0x0]
080B7996: 002d         cmp r5,#0x0
080B7998: 1bd1         bne 0x080b79d2
080B799A: 8c30         add r0,#0x8c
080B799C: 0068         ldr r0,[r0,#0x0]
080B799E: 0121         mov r1,#0x1
080B79A0: 0840         and r0,r1
080B79A2: 0028         cmp r0,#0x0
080B79A4: 15d0         beq 0x080b79d2
080B79A6: 0c4a         ldr r2,[0x080b79d8]
080B79A8: 1560         str r5,[r2,#0x0]
080B79AA: 0c48         ldr r0,[0x080b79dc]
080B79AC: 5060         str r0,[r2,#0x4]
080B79AE: 0020         mov r0,#0x0
080B79B0: 211c         add r1,r4,#0x0
080B79B2: 73f7fbf9     bl 0x0802adac
080B79B6: 3060         str r0,[r6,#0x0]
080B79B8: 0028         cmp r0,#0x0
080B79BA: 0ad0         beq 0x080b79d2
080B79BC: 201c         add r0,r4,#0x0
080B79BE: 7430         add r0,#0x74
080B79C0: 0749         ldr r1,[0x080b79e0]
080B79C2: 4df7dffe     bl 0x08005784
080B79C6: d221         mov r1,#0xd2
080B79C8: 0902         lsl r1,r1,#0x8
080B79CA: 201c         add r0,r4,#0x0
080B79CC: 65f798fa     bl 0x0801cf00
080B79D0: 2566         str r5,[r4,#0x60]
080B79D2: 70bc         pop {r4,r5,r6}
080B79D4: 01bc         pop {r0}
080B79D6: 0047         bx r0
