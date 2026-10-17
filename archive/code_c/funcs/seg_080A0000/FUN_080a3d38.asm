; undefined FUN_080a3d38(void)
; entry 0x80a3d38  size 30 bytes

080A3D38: 00b5         push {lr}
080A3D3A: 021c         add r2,r0,#0x0
080A3D3C: 906a         ldr r0,[r2,#0x28]
080A3D3E: 011c         add r1,r0,#0x0
080A3D40: da31         add r1,#0xda
080A3D42: 0878         ldrb r0,[r1,#0x0]
080A3D44: 0028         cmp r0,#0x0
080A3D46: 01d0         beq 0x080a3d4c
080A3D48: 0138         sub r0,#0x1
080A3D4A: 0870         strb r0,[r1,#0x0]
080A3D4C: 101c         add r0,r2,#0x0
080A3D4E: dbf7cdfd     bl 0x0807f8ec
080A3D52: 01bc         pop {r0}
080A3D54: 0047         bx r0
