; undefined FUN_080b55a4(void)
; entry 0x80b55a4  size 78 bytes

080B55A4: 70b5         push {r4,r5,r6,lr}
080B55A6: 051c         add r5,r0,#0x0
080B55A8: 686d         ldr r0,[r5,#0x54]
080B55AA: a96d         ldr r1,[r5,#0x58]
080B55AC: 52f766fb     bl 0x08007c7c
080B55B0: 0004         lsl r0,r0,#0x10
080B55B2: 0028         cmp r0,#0x0
080B55B4: 05d1         bne 0x080b55c2
080B55B6: a86d         ldr r0,[r5,#0x58]
080B55B8: 296e         ldr r1,[r5,#0x60]
080B55BA: 4018         add r0,r0,r1
080B55BC: a865         str r0,[r5,#0x58]
080B55BE: 4031         add r1,#0x40
080B55C0: 2966         str r1,[r5,#0x60]
080B55C2: 2e1c         add r6,r5,#0x0
080B55C4: c036         add r6,#0xc0
080B55C6: 3068         ldr r0,[r6,#0x0]
080B55C8: 75f70cff     bl 0x0802b3e4
080B55CC: 0028         cmp r0,#0x0
080B55CE: 0dd0         beq 0x080b55ec
080B55D0: 281c         add r0,r5,#0x0
080B55D2: 7430         add r0,#0x74
080B55D4: 0749         ldr r1,[0x080b55f4]
080B55D6: 50f7d5f8     bl 0x08005784
080B55DA: 0024         mov r4,#0x0
080B55DC: 3460         str r4,[r6,#0x0]
080B55DE: 686d         ldr r0,[r5,#0x54]
080B55E0: a96d         ldr r1,[r5,#0x58]
080B55E2: 52f7a7ff     bl 0x08008534
080B55E6: a865         str r0,[r5,#0x58]
080B55E8: 6c73         strb r4,[r5,#0xd]
080B55EA: ac73         strb r4,[r5,#0xe]
080B55EC: 70bc         pop {r4,r5,r6}
080B55EE: 01bc         pop {r0}
080B55F0: 0047         bx r0
