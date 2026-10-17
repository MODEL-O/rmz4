; undefined FUN_080eb3b4(void)
; entry 0x80eb3b4  size 42 bytes

080EB3B4: 00b5         push {lr}
080EB3B6: c16a         ldr r1,[r0,#0x2c]
080EB3B8: c068         ldr r0,[r0,#0xc]
080EB3BA: c36a         ldr r3,[r0,#0x2c]
080EB3BC: 0820         mov r0,#0x8
080EB3BE: 1856         ldrsb r0,[r3,r0]
080EB3C0: 0028         cmp r0,#0x0
080EB3C2: 0ad1         bne 0x080eb3da
080EB3C4: 081c         add r0,r1,#0x0
080EB3C6: b430         add r0,#0xb4
080EB3C8: 0360         str r3,[r0,#0x0]
080EB3CA: 0549         ldr r1,[0x080eb3e0]
080EB3CC: 888a         ldrh r0,[r1,#0x14]
080EB3CE: 0122         mov r2,#0x1
080EB3D0: 1043         orr r0,r2
080EB3D2: 8882         strh r0,[r1,#0x14]
080EB3D4: 0349         ldr r1,[0x080eb3e4]
080EB3D6: 5818         add r0,r3,r1
080EB3D8: 0270         strb r2,[r0,#0x0]
080EB3DA: 01bc         pop {r0}
080EB3DC: 0047         bx r0
