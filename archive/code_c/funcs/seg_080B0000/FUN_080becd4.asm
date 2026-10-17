; undefined FUN_080becd4(void)
; entry 0x80becd4  size 34 bytes

080BECD4: 00b5         push {lr}
080BECD6: c168         ldr r1,[r0,#0xc]
080BECD8: ca6a         ldr r2,[r1,#0x2c]
080BECDA: 4069         ldr r0,[r0,#0x14]
080BECDC: 0121         mov r1,#0x1
080BECDE: 0840         and r0,r1
080BECE0: 0028         cmp r0,#0x0
080BECE2: 06d0         beq 0x080becf2
080BECE4: 1189         ldrh r1,[r2,#0x8]
080BECE6: 0448         ldr r0,[0x080becf8]
080BECE8: 8142         cmp r1,r0
080BECEA: 02d1         bne 0x080becf2
080BECEC: 101c         add r0,r2,#0x0
080BECEE: 02f091fe     bl 0x080c1a14
080BECF2: 01bc         pop {r0}
080BECF4: 0047         bx r0
