; undefined FUN_080cf9c4(void)
; entry 0x80cf9c4  size 66 bytes

080CF9C4: 10b5         push {r4,lr}
080CF9C6: 041c         add r4,r0,#0x0
080CF9C8: 606d         ldr r0,[r4,#0x54]
080CF9CA: e16d         ldr r1,[r4,#0x5c]
080CF9CC: 4018         add r0,r0,r1
080CF9CE: 6065         str r0,[r4,#0x54]
080CF9D0: a16d         ldr r1,[r4,#0x58]
080CF9D2: 226e         ldr r2,[r4,#0x60]
080CF9D4: 8918         add r1,r1,r2
080CF9D6: a165         str r1,[r4,#0x58]
080CF9D8: a36e         ldr r3,[r4,#0x68]
080CF9DA: d218         add r2,r2,r3
080CF9DC: 2266         str r2,[r4,#0x60]
080CF9DE: 38f74df9     bl 0x08007c7c
080CF9E2: 0004         lsl r0,r0,#0x10
080CF9E4: 0028         cmp r0,#0x0
080CF9E6: 08d0         beq 0x080cf9fa
080CF9E8: 0749         ldr r1,[0x080cfa08]
080CF9EA: 607a         ldrb r0,[r4,#0x9]
080CF9EC: 8000         lsl r0,r0,#0x2
080CF9EE: 4018         add r0,r0,r1
080CF9F0: 0221         mov r1,#0x2
080CF9F2: e160         str r1,[r4,#0xc]
080CF9F4: 0068         ldr r0,[r0,#0x0]
080CF9F6: 8068         ldr r0,[r0,#0x8]
080CF9F8: 6061         str r0,[r4,#0x14]
080CF9FA: 201c         add r0,r4,#0x0
080CF9FC: 4df7f8fa     bl 0x0801cff0
080CFA00: 10bc         pop {r4}
080CFA02: 01bc         pop {r0}
080CFA04: 0047         bx r0
