; undefined FUN_080a9774(void)
; entry 0x80a9774  size 38 bytes

080A9774: 10b5         push {r4,lr}
080A9776: 041c         add r4,r0,#0x0
080A9778: e07b         ldrb r0,[r4,#0xf]
080A977A: 0028         cmp r0,#0x0
080A977C: 07d1         bne 0x080a978e
080A977E: 9321         mov r1,#0x93
080A9780: 0902         lsl r1,r1,#0x8
080A9782: 201c         add r0,r4,#0x0
080A9784: 73f7bcfb     bl 0x0801cf00
080A9788: e07b         ldrb r0,[r4,#0xf]
080A978A: 0130         add r0,#0x1
080A978C: e073         strb r0,[r4,#0xf]
080A978E: 201c         add r0,r4,#0x0
080A9790: 73f72efc     bl 0x0801cff0
080A9794: 10bc         pop {r4}
080A9796: 01bc         pop {r0}
080A9798: 0047         bx r0
