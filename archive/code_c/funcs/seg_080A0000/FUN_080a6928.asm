; undefined FUN_080a6928(void)
; entry 0x80a6928  size 38 bytes

080A6928: 10b5         push {r4,lr}
080A692A: 041c         add r4,r0,#0x0
080A692C: e06a         ldr r0,[r4,#0x2c]
080A692E: 84f759fd     bl 0x0802b3e4
080A6932: 0028         cmp r0,#0x0
080A6934: 08d0         beq 0x080a6948
080A6936: 201c         add r0,r4,#0x0
080A6938: 7430         add r0,#0x74
080A693A: 0549         ldr r1,[0x080a6950]
080A693C: 5ef722ff     bl 0x08005784
080A6940: 0020         mov r0,#0x0
080A6942: e062         str r0,[r4,#0x2c]
080A6944: 6073         strb r0,[r4,#0xd]
080A6946: a073         strb r0,[r4,#0xe]
080A6948: 10bc         pop {r4}
080A694A: 01bc         pop {r0}
080A694C: 0047         bx r0
