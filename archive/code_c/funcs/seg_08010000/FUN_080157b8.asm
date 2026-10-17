; undefined FUN_080157b8(void)
; entry 0x80157b8  size 60 bytes

080157B8: 10b5         push {r4,lr}
080157BA: 031c         add r3,r0,#0x0
080157BC: 9c7b         ldrb r4,[r3,#0xe]
080157BE: 002c         cmp r4,#0x0
080157C0: 15d1         bne 0x080157ee
080157C2: d96d         ldr r1,[r3,#0x5c]
080157C4: 0909         lsr r1,r1,#0x4
080157C6: 4900         lsl r1,r1,#0x1
080157C8: 0a48         ldr r0,[0x080157f4]
080157CA: 0918         add r1,r1,r0
080157CC: 0a88         ldrh r2,[r1,#0x0]
080157CE: 0a48         ldr r0,[0x080157f8]
080157D0: 1040         and r0,r2
080157D2: 0322         mov r2,#0x3
080157D4: 1043         orr r0,r2
080157D6: 0880         strh r0,[r1,#0x0]
080157D8: b420         mov r0,#0xb4
080157DA: 0001         lsl r0,r0,#0x4
080157DC: d864         str r0,[r3,#0x4c]
080157DE: 1c65         str r4,[r3,#0x50]
080157E0: c020         mov r0,#0xc0
080157E2: 5864         str r0,[r3,#0x44]
080157E4: 4030         add r0,#0x40
080157E6: 9864         str r0,[r3,#0x48]
080157E8: 987b         ldrb r0,[r3,#0xe]
080157EA: 0130         add r0,#0x1
080157EC: 9873         strb r0,[r3,#0xe]
080157EE: 10bc         pop {r4}
080157F0: 01bc         pop {r0}
080157F2: 0047         bx r0
