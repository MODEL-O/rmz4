; undefined FUN_081273cc(void)
; entry 0x81273cc  size 48 bytes

081273CC: a17c         ldrb r1,[r4,#0x12]
081273CE: 1420         mov r0,#0x14
081273D0: 2256         ldrsb r2,[r4,r0]
081273D2: 8023         mov r3,#0x80
081273D4: 9b18         add r3,r3,r2
081273D6: 4b43         mul r3,r1
081273D8: 287c         ldrb r0,[r5,#0x10]
081273DA: 5843         mul r0,r3
081273DC: 8013         asr r0,r0,#0xe
081273DE: ff28         cmp r0,#0xff
081273E0: 00d9         bls 0x081273e4
081273E2: ff20         mov r0,#0xff
081273E4: a070         strb r0,[r4,#0x2]
081273E6: 7f23         mov r3,#0x7f
081273E8: 9b1a         sub r3,r3,r2
081273EA: 4b43         mul r3,r1
081273EC: 687c         ldrb r0,[r5,#0x11]
081273EE: 5843         mul r0,r3
081273F0: 8013         asr r0,r0,#0xe
081273F2: ff28         cmp r0,#0xff
081273F4: 00d9         bls 0x081273f8
081273F6: ff20         mov r0,#0xff
081273F8: e070         strb r0,[r4,#0x3]
081273FA: 7047         bx lr
