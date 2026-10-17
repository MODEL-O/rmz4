; undefined FUN_080d61d4(void)
; entry 0x80d61d4  size 62 bytes

080D61D4: 10b5         push {r4,lr}
080D61D6: 041c         add r4,r0,#0x0
080D61D8: 0e48         ldr r0,[0x080d6214]
080D61DA: 0068         ldr r0,[r0,#0x0]
080D61DC: 2ff790f9     bl 0x08005500
080D61E0: 031c         add r3,r0,#0x0
080D61E2: 002b         cmp r3,#0x0
080D61E4: 11d0         beq 0x080d620a
080D61E6: 191c         add r1,r3,#0x0
080D61E8: 2531         add r1,#0x25
080D61EA: 0022         mov r2,#0x0
080D61EC: 0120         mov r0,#0x1
080D61EE: 0870         strb r0,[r1,#0x0]
080D61F0: 0949         ldr r1,[0x080d6218]
080D61F2: 1420         mov r0,#0x14
080D61F4: 5872         strb r0,[r3,#0x9]
080D61F6: 086d         ldr r0,[r1,#0x50]
080D61F8: 0068         ldr r0,[r0,#0x0]
080D61FA: 5861         str r0,[r3,#0x14]
080D61FC: 0020         mov r0,#0x0
080D61FE: 1a84         strh r2,[r3,#0x20]
080D6200: 191c         add r1,r3,#0x0
080D6202: 2231         add r1,#0x22
080D6204: 0870         strb r0,[r1,#0x0]
080D6206: 1874         strb r0,[r3,#0x10]
080D6208: 9c62         str r4,[r3,#0x28]
080D620A: 181c         add r0,r3,#0x0
080D620C: 10bc         pop {r4}
080D620E: 02bc         pop {r1}
080D6210: 0847         bx r1
