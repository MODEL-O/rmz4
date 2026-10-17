; undefined FUN_08123384(void)
; entry 0x8123384  size 36 bytes

08123384: 00b5         push {lr}
08123386: 084a         ldr r2,[0x081233a8]
08123388: 4178         ldrb r1,[r0,#0x1]
0812338A: 8900         lsl r1,r1,#0x2
0812338C: 8918         add r1,r1,r2
0812338E: 0968         ldr r1,[r1,#0x0]
08123390: 05f0f6fd     bl 0x08128f80
08123394: 0028         cmp r0,#0x0
08123396: 05d1         bne 0x081233a4
08123398: e3f67cfd     bl 0x08006e94
0812339C: def6d4ff     bl 0x08002348
081233A0: ddf6d8ff     bl 0x08001354
081233A4: 01bc         pop {r0}
081233A6: 0047         bx r0
