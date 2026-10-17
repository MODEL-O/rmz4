; undefined FUN_080166c4(void)
; entry 0x80166c4  size 44 bytes

080166C4: 00b5         push {lr}
080166C6: 031c         add r3,r0,#0x0
080166C8: 987b         ldrb r0,[r3,#0xe]
080166CA: 0028         cmp r0,#0x0
080166CC: 0ed1         bne 0x080166ec
080166CE: d86d         ldr r0,[r3,#0x5c]
080166D0: 0004         lsl r0,r0,#0x10
080166D2: 000d         lsr r0,r0,#0x14
080166D4: 4000         lsl r0,r0,#0x1
080166D6: 0649         ldr r1,[0x080166f0]
080166D8: 4018         add r0,r0,r1
080166DA: 0288         ldrh r2,[r0,#0x0]
080166DC: 0549         ldr r1,[0x080166f4]
080166DE: 1140         and r1,r2
080166E0: 0322         mov r2,#0x3
080166E2: 1143         orr r1,r2
080166E4: 0180         strh r1,[r0,#0x0]
080166E6: 987b         ldrb r0,[r3,#0xe]
080166E8: 0130         add r0,#0x1
080166EA: 9873         strb r0,[r3,#0xe]
080166EC: 01bc         pop {r0}
080166EE: 0047         bx r0
