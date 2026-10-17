; undefined FUN_081013b0(void)
; entry 0x81013b0  size 54 bytes

081013B0: 10b5         push {r4,lr}
081013B2: 041c         add r4,r0,#0x0
081013B4: 1bf71cfe     bl 0x0801cff0
081013B8: 0b48         ldr r0,[0x081013e8]
081013BA: 0068         ldr r0,[r0,#0x0]
081013BC: 406d         ldr r0,[r0,#0x54]
081013BE: 616d         ldr r1,[r4,#0x54]
081013C0: 401a         sub r0,r0,r1
081013C2: 0012         asr r0,r0,#0x8
081013C4: 0028         cmp r0,#0x0
081013C6: 00da         bge 0x081013ca
081013C8: 4042         rsb r0,r0
081013CA: 5f28         cmp r0,#0x5f
081013CC: 08dc         bgt 0x081013e0
081013CE: 0749         ldr r1,[0x081013ec]
081013D0: 607a         ldrb r0,[r4,#0x9]
081013D2: 8000         lsl r0,r0,#0x2
081013D4: 4018         add r0,r0,r1
081013D6: 0221         mov r1,#0x2
081013D8: e160         str r1,[r4,#0xc]
081013DA: 0068         ldr r0,[r0,#0x0]
081013DC: 8068         ldr r0,[r0,#0x8]
081013DE: 6061         str r0,[r4,#0x14]
081013E0: 10bc         pop {r4}
081013E2: 01bc         pop {r0}
081013E4: 0047         bx r0
