; undefined FUN_080128b4(void)
; entry 0x80128b4  size 42 bytes

080128B4: 00b5         push {lr}
080128B6: 031c         add r3,r0,#0x0
080128B8: 987b         ldrb r0,[r3,#0xe]
080128BA: 0028         cmp r0,#0x0
080128BC: 0dd1         bne 0x080128da
080128BE: d96d         ldr r1,[r3,#0x5c]
080128C0: 0909         lsr r1,r1,#0x4
080128C2: 4900         lsl r1,r1,#0x1
080128C4: 0648         ldr r0,[0x080128e0]
080128C6: 0918         add r1,r1,r0
080128C8: 0a88         ldrh r2,[r1,#0x0]
080128CA: 0648         ldr r0,[0x080128e4]
080128CC: 1040         and r0,r2
080128CE: 0222         mov r2,#0x2
080128D0: 1043         orr r0,r2
080128D2: 0880         strh r0,[r1,#0x0]
080128D4: 987b         ldrb r0,[r3,#0xe]
080128D6: 0130         add r0,#0x1
080128D8: 9873         strb r0,[r3,#0xe]
080128DA: 01bc         pop {r0}
080128DC: 0047         bx r0
