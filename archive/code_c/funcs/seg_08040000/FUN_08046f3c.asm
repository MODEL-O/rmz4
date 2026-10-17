; undefined FUN_08046f3c(void)
; entry 0x8046f3c  size 40 bytes

08046F3C: 10b5         push {r4,lr}
08046F3E: 041c         add r4,r0,#0x0
08046F40: bd30         add r0,#0xbd
08046F42: 0078         ldrb r0,[r0,#0x0]
08046F44: 0028         cmp r0,#0x0
08046F46: 07d0         beq 0x08046f58
08046F48: 211c         add r1,r4,#0x0
08046F4A: 5431         add r1,#0x54
08046F4C: 0120         mov r0,#0x1
08046F4E: 89f09bfe     bl 0x080d0c88
08046F52: 3520         mov r0,#0x35
08046F54: bbf7dcfd     bl 0x08002b10
08046F58: 201c         add r0,r4,#0x0
08046F5A: f3f7abfc     bl 0x0803a8b4
08046F5E: 10bc         pop {r4}
08046F60: 01bc         pop {r0}
08046F62: 0047         bx r0
