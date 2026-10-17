; undefined FUN_080a9b7c(void)
; entry 0x80a9b7c  size 32 bytes

080A9B7C: 00b5         push {lr}
080A9B7E: 426d         ldr r2,[r0,#0x54]
080A9B80: 816d         ldr r1,[r0,#0x58]
080A9B82: 0548         ldr r0,[0x080a9b98]
080A9B84: 0918         add r1,r1,r0
080A9B86: 101c         add r0,r2,#0x0
080A9B88: 5ef778f8     bl 0x08007c7c
080A9B8C: 0004         lsl r0,r0,#0x10
080A9B8E: 0028         cmp r0,#0x0
080A9B90: 04d1         bne 0x080a9b9c
080A9B92: 0020         mov r0,#0x0
080A9B94: 03e0         b 0x080a9b9e
080A9B9C: 0120         mov r0,#0x1
080A9B9E: 02bc         pop {r1}
080A9BA0: 0847         bx r1
