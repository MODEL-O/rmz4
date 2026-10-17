; undefined FUN_080a5b7c(void)
; entry 0x80a5b7c  size 80 bytes

080A5B7C: 10b5         push {r4,lr}
080A5B7E: 041c         add r4,r0,#0x0
080A5B80: e07b         ldrb r0,[r4,#0xf]
080A5B82: 0028         cmp r0,#0x0
080A5B84: 12d1         bne 0x080a5bac
080A5B86: 201c         add r0,r4,#0x0
080A5B88: 7430         add r0,#0x74
080A5B8A: 1049         ldr r1,[0x080a5bcc]
080A5B8C: 5ff7fafd     bl 0x08005784
080A5B90: 0f49         ldr r1,[0x080a5bd0]
080A5B92: 201c         add r0,r4,#0x0
080A5B94: 77f7b4f9     bl 0x0801cf00
080A5B98: 201c         add r0,r4,#0x0
080A5B9A: 77f7c9fb     bl 0x0801d330
080A5B9E: 201c         add r0,r4,#0x0
080A5BA0: 0621         mov r1,#0x6
080A5BA2: 77f715fc     bl 0x0801d3d0
080A5BA6: e07b         ldrb r0,[r4,#0xf]
080A5BA8: 0130         add r0,#0x1
080A5BAA: e073         strb r0,[r4,#0xf]
080A5BAC: 201c         add r0,r4,#0x0
080A5BAE: 77f71ffa     bl 0x0801cff0
080A5BB2: 201c         add r0,r4,#0x0
080A5BB4: 7330         add r0,#0x73
080A5BB6: 0078         ldrb r0,[r0,#0x0]
080A5BB8: 0328         cmp r0,#0x3
080A5BBA: 04d1         bne 0x080a5bc6
080A5BBC: 0021         mov r1,#0x0
080A5BBE: 0220         mov r0,#0x2
080A5BC0: 6073         strb r0,[r4,#0xd]
080A5BC2: a173         strb r1,[r4,#0xe]
080A5BC4: e173         strb r1,[r4,#0xf]
080A5BC6: 10bc         pop {r4}
080A5BC8: 01bc         pop {r0}
080A5BCA: 0047         bx r0
