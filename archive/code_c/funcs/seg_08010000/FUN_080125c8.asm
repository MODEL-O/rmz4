; undefined FUN_080125c8(void)
; entry 0x80125c8  size 42 bytes

080125C8: 00b5         push {lr}
080125CA: 031c         add r3,r0,#0x0
080125CC: 987b         ldrb r0,[r3,#0xe]
080125CE: 0028         cmp r0,#0x0
080125D0: 0dd1         bne 0x080125ee
080125D2: d96d         ldr r1,[r3,#0x5c]
080125D4: 0909         lsr r1,r1,#0x4
080125D6: 4900         lsl r1,r1,#0x1
080125D8: 0648         ldr r0,[0x080125f4]
080125DA: 0918         add r1,r1,r0
080125DC: 0a88         ldrh r2,[r1,#0x0]
080125DE: 0648         ldr r0,[0x080125f8]
080125E0: 1040         and r0,r2
080125E2: 0122         mov r2,#0x1
080125E4: 1043         orr r0,r2
080125E6: 0880         strh r0,[r1,#0x0]
080125E8: 987b         ldrb r0,[r3,#0xe]
080125EA: 0130         add r0,#0x1
080125EC: 9873         strb r0,[r3,#0xe]
080125EE: 01bc         pop {r0}
080125F0: 0047         bx r0
